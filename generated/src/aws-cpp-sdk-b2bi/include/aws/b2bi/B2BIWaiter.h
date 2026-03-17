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

#include <algorithm>

namespace Aws {
namespace B2BI {

template <typename DerivedClient = B2BIClient>
class B2BIWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetTransformerJobOutcome> WaitUntilTransformerJobSucceeded(
      const Model::GetTransformerJobRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetTransformerJobOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("succeeded"),
                         [](const Model::GetTransformerJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::TransformerJobStatusMapper::GetNameForTransformerJobStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("failed"),
                         [](const Model::GetTransformerJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::TransformerJobStatusMapper::GetNameForTransformerJobStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetTransformerJobRequest& req) {
      return static_cast<DerivedClient*>(this)->GetTransformerJob(req);
    };
    Aws::Utils::Waiter<Model::GetTransformerJobRequest, Model::GetTransformerJobOutcome> waiter(10, 12, acceptors, operation,
                                                                                                "WaitUntilTransformerJobSucceeded");
    return waiter.Wait(request);
  }
};
}  // namespace B2BI
}  // namespace Aws
