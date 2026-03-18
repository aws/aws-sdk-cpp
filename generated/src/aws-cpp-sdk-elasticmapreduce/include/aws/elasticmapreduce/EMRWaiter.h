/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/elasticmapreduce/EMRClient.h>
#include <aws/elasticmapreduce/model/ClusterState.h>
#include <aws/elasticmapreduce/model/DescribeClusterRequest.h>
#include <aws/elasticmapreduce/model/DescribeClusterResult.h>
#include <aws/elasticmapreduce/model/DescribeStepRequest.h>
#include <aws/elasticmapreduce/model/DescribeStepResult.h>
#include <aws/elasticmapreduce/model/StepState.h>

#include <algorithm>

namespace Aws {
namespace EMR {

template <typename DerivedClient = EMRClient>
class EMRWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeClusterOutcome> WaitUntilClusterRunning(const Model::DescribeClusterRequest& request) {
    using OutcomeT = Model::DescribeClusterOutcome;
    using RequestT = Model::DescribeClusterRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterRunningWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("RUNNING"),
        [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ClusterStateMapper::GetNameForClusterState(result.GetCluster().GetStatus().GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterRunningWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("WAITING"),
        [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ClusterStateMapper::GetNameForClusterState(result.GetCluster().GetStatus().GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("TERMINATING"),
        [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ClusterStateMapper::GetNameForClusterState(result.GetCluster().GetStatus().GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("TERMINATED"),
        [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ClusterStateMapper::GetNameForClusterState(result.GetCluster().GetStatus().GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("TERMINATED_WITH_ERRORS"),
        [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ClusterStateMapper::GetNameForClusterState(result.GetCluster().GetStatus().GetState()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeCluster(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilClusterRunning");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeClusterOutcome> WaitUntilClusterTerminated(const Model::DescribeClusterRequest& request) {
    using OutcomeT = Model::DescribeClusterOutcome;
    using RequestT = Model::DescribeClusterRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterTerminatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("TERMINATED"),
        [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ClusterStateMapper::GetNameForClusterState(result.GetCluster().GetStatus().GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterTerminatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("TERMINATED_WITH_ERRORS"),
        [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ClusterStateMapper::GetNameForClusterState(result.GetCluster().GetStatus().GetState()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeCluster(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilClusterTerminated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeStepOutcome> WaitUntilStepComplete(const Model::DescribeStepRequest& request) {
    using OutcomeT = Model::DescribeStepOutcome;
    using RequestT = Model::DescribeStepRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StepCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED"),
        [](const Model::DescribeStepOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StepStateMapper::GetNameForStepState(result.GetStep().GetStatus().GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StepCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeStepOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StepStateMapper::GetNameForStepState(result.GetStep().GetStatus().GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StepCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CANCELLED"),
        [](const Model::DescribeStepOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StepStateMapper::GetNameForStepState(result.GetStep().GetStatus().GetState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeStep(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilStepComplete");
    return waiter.Wait(request);
  }
};
}  // namespace EMR
}  // namespace Aws
