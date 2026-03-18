/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
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
    using OutcomeT = Model::GetClusterOutcome;
    using RequestT = Model::GetClusterRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::GetClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ClusterStatusMapper::GetNameForClusterStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetCluster(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(2, 60, std::move(acceptors), operation, "WaitUntilClusterActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetClusterOutcome> WaitUntilClusterNotExists(const Model::GetClusterRequest& request) {
    using OutcomeT = Model::GetClusterOutcome;
    using RequestT = Model::GetClusterRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ClusterNotExistsWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetCluster(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(2, 60, std::move(acceptors), operation, "WaitUntilClusterNotExists");
    return waiter.Wait(request);
  }
};
}  // namespace DSQL
}  // namespace Aws
