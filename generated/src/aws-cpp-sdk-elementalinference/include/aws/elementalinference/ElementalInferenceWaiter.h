/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/elementalinference/ElementalInferenceClient.h>
#include <aws/elementalinference/model/FeedStatus.h>
#include <aws/elementalinference/model/GetFeedRequest.h>
#include <aws/elementalinference/model/GetFeedResult.h>

#include <algorithm>

namespace Aws {
namespace ElementalInference {

template <typename DerivedClient = ElementalInferenceClient>
class ElementalInferenceWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetFeedOutcome> WaitUntilFeedDeleted(const Model::GetFeedRequest& request) {
    using OutcomeT = Model::GetFeedOutcome;
    using RequestT = Model::GetFeedRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("FeedDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ResourceNotFoundException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FeedDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DELETED"),
        [](const Model::GetFeedOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::FeedStatusMapper::GetNameForFeedStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FeedDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("DELETING"),
        [](const Model::GetFeedOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::FeedStatusMapper::GetNameForFeedStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("FeedDeletedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("FeedDeletedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("TooManyRequestException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetFeed(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 40, std::move(acceptors), operation, "WaitUntilFeedDeleted");
    return waiter.Wait(request);
  }
};
}  // namespace ElementalInference
}  // namespace Aws
