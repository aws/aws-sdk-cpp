/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/ds/DirectoryServiceClient.h>
#include <aws/ds/model/DescribeHybridADUpdateRequest.h>
#include <aws/ds/model/DescribeHybridADUpdateResult.h>

#include <algorithm>

namespace Aws {
namespace DirectoryService {

template <typename DerivedClient = DirectoryServiceClient>
class DirectoryServiceWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeHybridADUpdateOutcome> WaitUntilHybridADUpdated(
      const Model::DescribeHybridADUpdateRequest& request) {
    using OutcomeT = Model::DescribeHybridADUpdateOutcome;
    using RequestT = Model::DescribeHybridADUpdateRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "HybridADUpdatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Updated"),
        [](const Model::DescribeHybridADUpdateOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetUpdateActivities().GetSelfManagedInstances().begin(),
                             result.GetUpdateActivities().GetSelfManagedInstances().end(),
                             [&](const Model::HybridUpdateInfoEntry& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "HybridADUpdatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("UpdateFailed"),
        [](const Model::DescribeHybridADUpdateOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetUpdateActivities().GetSelfManagedInstances().begin(),
                             result.GetUpdateActivities().GetSelfManagedInstances().end(),
                             [&](const Model::HybridUpdateInfoEntry& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeHybridADUpdate(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(120, 1, std::move(acceptors), operation, "WaitUntilHybridADUpdated");
    return waiter.Wait(request);
  }
};
}  // namespace DirectoryService
}  // namespace Aws
