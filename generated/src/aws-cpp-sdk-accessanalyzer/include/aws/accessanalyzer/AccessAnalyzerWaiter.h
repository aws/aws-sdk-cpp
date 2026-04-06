/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzerClient.h>
#include <aws/accessanalyzer/model/GetPolicyPreviewConfigurationRequest.h>
#include <aws/accessanalyzer/model/GetPolicyPreviewConfigurationResult.h>
#include <aws/accessanalyzer/model/GetPolicyPreviewJobRequest.h>
#include <aws/accessanalyzer/model/GetPolicyPreviewJobResult.h>
#include <aws/accessanalyzer/model/ImpactAnalysisJobStatus.h>
#include <aws/accessanalyzer/model/PolicyPreviewStatus.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace AccessAnalyzer {

template <typename DerivedClient = AccessAnalyzerClient>
class AccessAnalyzerWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetPolicyPreviewConfigurationOutcome> WaitUntilPolicyPreviewConfigurationActive(
      const Model::GetPolicyPreviewConfigurationRequest& request) {
    using OutcomeT = Model::GetPolicyPreviewConfigurationOutcome;
    using RequestT = Model::GetPolicyPreviewConfigurationRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "PolicyPreviewConfigurationActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::GetPolicyPreviewConfigurationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetPolicyPreviewConfigurations().begin(), result.GetPolicyPreviewConfigurations().end(),
                             [&](const Model::PolicyPreviewConfiguration& item) {
                               return Model::PolicyPreviewStatusMapper::GetNameForPolicyPreviewStatus(item.GetStatus()) ==
                                      expected.get<Aws::String>();
                             });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "PolicyPreviewConfigurationActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetPolicyPreviewConfigurationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetPolicyPreviewConfigurations().begin(), result.GetPolicyPreviewConfigurations().end(),
                             [&](const Model::PolicyPreviewConfiguration& item) {
                               return Model::PolicyPreviewStatusMapper::GetNameForPolicyPreviewStatus(item.GetStatus()) ==
                                      expected.get<Aws::String>();
                             });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetPolicyPreviewConfiguration(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilPolicyPreviewConfigurationActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetPolicyPreviewJobOutcome> WaitUntilPolicyPreviewJobCompleted(
      const Model::GetPolicyPreviewJobRequest& request) {
    using OutcomeT = Model::GetPolicyPreviewJobOutcome;
    using RequestT = Model::GetPolicyPreviewJobRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "PolicyPreviewJobCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED"),
        [](const Model::GetPolicyPreviewJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImpactAnalysisJobStatusMapper::GetNameForImpactAnalysisJobStatus(result.GetJobDetails().GetJobStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "PolicyPreviewJobCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetPolicyPreviewJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImpactAnalysisJobStatusMapper::GetNameForImpactAnalysisJobStatus(result.GetJobDetails().GetJobStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "PolicyPreviewJobCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CANCELED"),
        [](const Model::GetPolicyPreviewJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImpactAnalysisJobStatusMapper::GetNameForImpactAnalysisJobStatus(result.GetJobDetails().GetJobStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetPolicyPreviewJob(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilPolicyPreviewJobCompleted");
    return waiter.Wait(request);
  }
};
}  // namespace AccessAnalyzer
}  // namespace Aws
