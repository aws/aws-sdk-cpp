/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/dsql/DSQLClient.h>
#include <aws/dsql/model/ClusterStatus.h>
#include <aws/dsql/model/GetClusterRequest.h>
#include <aws/dsql/model/GetClusterResult.h>

#include <algorithm>

namespace Aws {
namespace DSQL {

template <typename DerivedClient = DSQLClient>
class DSQLWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetClusterOutcome> WaitUntilClusterActive(const Model::GetClusterRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetClusterOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::GetClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ClusterStatusMapper::GetNameForClusterStatus(result.GetStatus()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetClusterRequest& req) { return static_cast<DerivedClient*>(this)->GetCluster(req); };
    Aws::Utils::Waiter<Model::GetClusterRequest, Model::GetClusterOutcome> waiter(2, 60, acceptors, operation, "WaitUntilClusterActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetClusterOutcome> WaitUntilClusterNotExists(const Model::GetClusterRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetClusterOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});

    auto operation = [this](const Model::GetClusterRequest& req) { return static_cast<DerivedClient*>(this)->GetCluster(req); };
    Aws::Utils::Waiter<Model::GetClusterRequest, Model::GetClusterOutcome> waiter(2, 60, acceptors, operation, "WaitUntilClusterNotExists");
    return waiter.Wait(request);
  }
};
}  // namespace DSQL
}  // namespace Aws
