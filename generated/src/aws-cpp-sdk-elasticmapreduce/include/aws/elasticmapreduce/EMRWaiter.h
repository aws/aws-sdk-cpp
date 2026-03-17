/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
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
    std::vector<Aws::Utils::Acceptor<Model::DescribeClusterOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("RUNNING"),
                         [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ClusterStateMapper::GetNameForClusterState(result.GetCluster().GetStatus().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("WAITING"),
                         [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ClusterStateMapper::GetNameForClusterState(result.GetCluster().GetStatus().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("TERMINATING"),
                         [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ClusterStateMapper::GetNameForClusterState(result.GetCluster().GetStatus().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("TERMINATED"),
                         [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ClusterStateMapper::GetNameForClusterState(result.GetCluster().GetStatus().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("TERMINATED_WITH_ERRORS"),
                         [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ClusterStateMapper::GetNameForClusterState(result.GetCluster().GetStatus().GetState()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeClusterRequest& req) { return static_cast<DerivedClient*>(this)->DescribeCluster(req); };
    Aws::Utils::Waiter<Model::DescribeClusterRequest, Model::DescribeClusterOutcome> waiter(30, 4, acceptors, operation,
                                                                                            "WaitUntilClusterRunning");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeClusterOutcome> WaitUntilClusterTerminated(const Model::DescribeClusterRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeClusterOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("TERMINATED"),
                         [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ClusterStateMapper::GetNameForClusterState(result.GetCluster().GetStatus().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("TERMINATED_WITH_ERRORS"),
                         [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ClusterStateMapper::GetNameForClusterState(result.GetCluster().GetStatus().GetState()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeClusterRequest& req) { return static_cast<DerivedClient*>(this)->DescribeCluster(req); };
    Aws::Utils::Waiter<Model::DescribeClusterRequest, Model::DescribeClusterOutcome> waiter(30, 4, acceptors, operation,
                                                                                            "WaitUntilClusterTerminated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeStepOutcome> WaitUntilStepComplete(const Model::DescribeStepRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeStepOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED"),
                         [](const Model::DescribeStepOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StepStateMapper::GetNameForStepState(result.GetStep().GetStatus().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::DescribeStepOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StepStateMapper::GetNameForStepState(result.GetStep().GetStatus().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CANCELLED"),
                         [](const Model::DescribeStepOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StepStateMapper::GetNameForStepState(result.GetStep().GetStatus().GetState()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeStepRequest& req) { return static_cast<DerivedClient*>(this)->DescribeStep(req); };
    Aws::Utils::Waiter<Model::DescribeStepRequest, Model::DescribeStepOutcome> waiter(30, 4, acceptors, operation, "WaitUntilStepComplete");
    return waiter.Wait(request);
  }
};
}  // namespace EMR
}  // namespace Aws
