/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
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
    std::vector<Aws::Utils::Acceptor<Model::GetFeedOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("DELETED"),
                         [](const Model::GetFeedOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::FeedStatusMapper::GetNameForFeedStatus(result.GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("DELETING"),
                         [](const Model::GetFeedOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::FeedStatusMapper::GetNameForFeedStatus(result.GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("TooManyRequestException")});

    auto operation = [this](const Model::GetFeedRequest& req) { return static_cast<DerivedClient*>(this)->GetFeed(req); };
    Aws::Utils::Waiter<Model::GetFeedRequest, Model::GetFeedOutcome> waiter(3, 40, acceptors, operation, "WaitUntilFeedDeleted");
    return waiter.Wait(request);
  }
};
}  // namespace ElementalInference
}  // namespace Aws
