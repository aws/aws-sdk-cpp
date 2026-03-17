/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
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
    std::vector<Aws::Utils::Acceptor<Model::DescribeHybridADUpdateOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Updated"),
                         [](const Model::DescribeHybridADUpdateOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(
                               result.GetUpdateActivities().GetSelfManagedInstances().begin(),
                               result.GetUpdateActivities().GetSelfManagedInstances().end(),
                               [&](const Model::HybridUpdateInfoEntry& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("UpdateFailed"),
                         [](const Model::DescribeHybridADUpdateOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetUpdateActivities().GetSelfManagedInstances().begin(),
                               result.GetUpdateActivities().GetSelfManagedInstances().end(),
                               [&](const Model::HybridUpdateInfoEntry& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});

    auto operation = [this](const Model::DescribeHybridADUpdateRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeHybridADUpdate(req);
    };
    Aws::Utils::Waiter<Model::DescribeHybridADUpdateRequest, Model::DescribeHybridADUpdateOutcome> waiter(120, 1, acceptors, operation,
                                                                                                          "WaitUntilHybridADUpdated");
    return waiter.Wait(request);
  }
};
}  // namespace DirectoryService
}  // namespace Aws
