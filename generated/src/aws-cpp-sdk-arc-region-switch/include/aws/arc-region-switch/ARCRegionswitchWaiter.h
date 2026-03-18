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
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace ARCRegionswitch {

template <typename DerivedClient = ARCRegionswitchClient>
class ARCRegionswitchWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetPlanEvaluationStatusOutcome> WaitUntilPlanEvaluationStatusPassed(
      const Model::GetPlanEvaluationStatusRequest& request) {
    using OutcomeT = Model::GetPlanEvaluationStatusOutcome;
    using RequestT = Model::GetPlanEvaluationStatusRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "PlanEvaluationStatusPassedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("passed"),
        [](const Model::GetPlanEvaluationStatusOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::EvaluationStatusMapper::GetNameForEvaluationStatus(result.GetEvaluationState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "PlanEvaluationStatusPassedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("actionRequired"),
        [](const Model::GetPlanEvaluationStatusOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::EvaluationStatusMapper::GetNameForEvaluationStatus(result.GetEvaluationState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "PlanEvaluationStatusPassedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("pendingEvaluation"),
        [](const Model::GetPlanEvaluationStatusOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::EvaluationStatusMapper::GetNameForEvaluationStatus(result.GetEvaluationState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetPlanEvaluationStatus(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilPlanEvaluationStatusPassed");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetPlanExecutionOutcome> WaitUntilPlanExecutionCompleted(const Model::GetPlanExecutionRequest& request) {
    using OutcomeT = Model::GetPlanExecutionOutcome;
    using RequestT = Model::GetPlanExecutionRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "PlanExecutionCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("completed"),
        [](const Model::GetPlanExecutionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ExecutionStateMapper::GetNameForExecutionState(result.GetExecutionState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "PlanExecutionCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("completedWithExceptions"),
        [](const Model::GetPlanExecutionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ExecutionStateMapper::GetNameForExecutionState(result.GetExecutionState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "PlanExecutionCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("failed"),
        [](const Model::GetPlanExecutionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ExecutionStateMapper::GetNameForExecutionState(result.GetExecutionState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "PlanExecutionCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("canceled"),
        [](const Model::GetPlanExecutionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ExecutionStateMapper::GetNameForExecutionState(result.GetExecutionState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "PlanExecutionCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("planExecutionTimedOut"),
        [](const Model::GetPlanExecutionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ExecutionStateMapper::GetNameForExecutionState(result.GetExecutionState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetPlanExecution(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilPlanExecutionCompleted");
    return waiter.Wait(request);
  }
};
}  // namespace ARCRegionswitch
}  // namespace Aws
