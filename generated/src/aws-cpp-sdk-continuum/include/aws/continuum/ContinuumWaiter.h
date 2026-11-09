/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/ContinuumClient.h>
#include <aws/continuum/model/GetCodeScanRequest.h>
#include <aws/continuum/model/GetCodeScanResult.h>
#include <aws/continuum/model/ScanStatus.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace Continuum {

template <typename DerivedClient = ContinuumClient>
class ContinuumWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetCodeScanOutcome> WaitUntilCodeScanSucceeded(const Model::GetCodeScanRequest& request) {
    using OutcomeT = Model::GetCodeScanOutcome;
    using RequestT = Model::GetCodeScanRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CodeScanSucceededWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUCCEEDED"),
        [](const Model::GetCodeScanOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ScanStatusMapper::GetNameForScanStatus(result.GetScan().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CodeScanSucceededWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetCodeScanOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ScanStatusMapper::GetNameForScanStatus(result.GetScan().GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetCodeScan(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 480, std::move(acceptors), operation, "WaitUntilCodeScanSucceeded");
    return waiter.Wait(request);
  }
};
}  // namespace Continuum
}  // namespace Aws
