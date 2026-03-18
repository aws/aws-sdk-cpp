/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BIClient.h>
#include <aws/b2bi/model/GetTransformerJobRequest.h>
#include <aws/b2bi/model/GetTransformerJobResult.h>
#include <aws/b2bi/model/TransformerJobStatus.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace B2BI {

template <typename DerivedClient = B2BIClient>
class B2BIWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetTransformerJobOutcome> WaitUntilTransformerJobSucceeded(
      const Model::GetTransformerJobRequest& request) {
    using OutcomeT = Model::GetTransformerJobOutcome;
    using RequestT = Model::GetTransformerJobRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TransformerJobSucceededWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("succeeded"),
        [](const Model::GetTransformerJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TransformerJobStatusMapper::GetNameForTransformerJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TransformerJobSucceededWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("failed"),
        [](const Model::GetTransformerJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TransformerJobStatusMapper::GetNameForTransformerJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetTransformerJob(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilTransformerJobSucceeded");
    return waiter.Wait(request);
  }
};
}  // namespace B2BI
}  // namespace Aws
