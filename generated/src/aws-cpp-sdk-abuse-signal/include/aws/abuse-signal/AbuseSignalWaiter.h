/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/abuse-signal/AbuseSignalClient.h>
#include <aws/abuse-signal/model/GetAbuseReportStatusRequest.h>
#include <aws/abuse-signal/model/GetAbuseReportStatusResult.h>
#include <aws/abuse-signal/model/ReportSubmissionStatus.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace AbuseSignal {

template <typename DerivedClient = AbuseSignalClient>
class AbuseSignalWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetAbuseReportStatusOutcome> WaitUntilReportProcessing(
      const Model::GetAbuseReportStatusRequest& request) {
    using OutcomeT = Model::GetAbuseReportStatusOutcome;
    using RequestT = Model::GetAbuseReportStatusRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReportProcessingWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("PROCESSING"),
        [](const Model::GetAbuseReportStatusOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ReportSubmissionStatusMapper::GetNameForReportSubmissionStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReportProcessingWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED"),
        [](const Model::GetAbuseReportStatusOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ReportSubmissionStatusMapper::GetNameForReportSubmissionStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ReportProcessingWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetAbuseReportStatus(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(1, 5, std::move(acceptors), operation, "WaitUntilReportProcessing");
    return waiter.Wait(request);
  }
};
}  // namespace AbuseSignal
}  // namespace Aws
