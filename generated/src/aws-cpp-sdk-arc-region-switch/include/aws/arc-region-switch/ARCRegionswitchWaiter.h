/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitchClient.h>
#include <aws/arc-region-switch/model/EvaluationStatus.h>
#include <aws/arc-region-switch/model/ExecutionState.h>
#include <aws/arc-region-switch/model/GetPlanEvaluationStatusRequest.h>
#include <aws/arc-region-switch/model/GetPlanEvaluationStatusResult.h>
#include <aws/arc-region-switch/model/GetPlanExecutionRequest.h>
#include <aws/arc-region-switch/model/GetPlanExecutionResult.h>
#include <aws/core/utils/Waiter.h>

#include <algorithm>

namespace Aws {
namespace ARCRegionswitch {

template <typename DerivedClient = ARCRegionswitchClient>
class ARCRegionswitchWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetPlanEvaluationStatusOutcome> WaitUntilPlanEvaluationStatusPassed(
      const Model::GetPlanEvaluationStatusRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetPlanEvaluationStatusOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("passed"),
                         [](const Model::GetPlanEvaluationStatusOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::EvaluationStatusMapper::GetNameForEvaluationStatus(result.GetEvaluationState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("actionRequired"),
                         [](const Model::GetPlanEvaluationStatusOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::EvaluationStatusMapper::GetNameForEvaluationStatus(result.GetEvaluationState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("pendingEvaluation"),
                         [](const Model::GetPlanEvaluationStatusOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::EvaluationStatusMapper::GetNameForEvaluationStatus(result.GetEvaluationState()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetPlanEvaluationStatusRequest& req) {
      return static_cast<DerivedClient*>(this)->GetPlanEvaluationStatus(req);
    };
    Aws::Utils::Waiter<Model::GetPlanEvaluationStatusRequest, Model::GetPlanEvaluationStatusOutcome> waiter(
        30, 4, acceptors, operation, "WaitUntilPlanEvaluationStatusPassed");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetPlanExecutionOutcome> WaitUntilPlanExecutionCompleted(const Model::GetPlanExecutionRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetPlanExecutionOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("completed"),
                         [](const Model::GetPlanExecutionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ExecutionStateMapper::GetNameForExecutionState(result.GetExecutionState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("completedWithExceptions"),
                         [](const Model::GetPlanExecutionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ExecutionStateMapper::GetNameForExecutionState(result.GetExecutionState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("failed"),
                         [](const Model::GetPlanExecutionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ExecutionStateMapper::GetNameForExecutionState(result.GetExecutionState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("canceled"),
                         [](const Model::GetPlanExecutionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ExecutionStateMapper::GetNameForExecutionState(result.GetExecutionState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("planExecutionTimedOut"),
                         [](const Model::GetPlanExecutionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ExecutionStateMapper::GetNameForExecutionState(result.GetExecutionState()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetPlanExecutionRequest& req) { return static_cast<DerivedClient*>(this)->GetPlanExecution(req); };
    Aws::Utils::Waiter<Model::GetPlanExecutionRequest, Model::GetPlanExecutionOutcome> waiter(30, 4, acceptors, operation,
                                                                                              "WaitUntilPlanExecutionCompleted");
    return waiter.Wait(request);
  }
};
}  // namespace ARCRegionswitch
}  // namespace Aws
