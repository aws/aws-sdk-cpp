/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/macie2/Macie2Client.h>
#include <aws/macie2/model/GetSensitiveDataOccurrencesRequest.h>
#include <aws/macie2/model/GetSensitiveDataOccurrencesResult.h>
#include <aws/macie2/model/RevealRequestStatus.h>

#include <algorithm>

namespace Aws {
namespace Macie2 {

template <typename DerivedClient = Macie2Client>
class Macie2Waiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetSensitiveDataOccurrencesOutcome> WaitUntilFindingRevealed(
      const Model::GetSensitiveDataOccurrencesRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetSensitiveDataOccurrencesOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("SUCCESS"),
                         [](const Model::GetSensitiveDataOccurrencesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RevealRequestStatusMapper::GetNameForRevealRequestStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ERROR"),
                         [](const Model::GetSensitiveDataOccurrencesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RevealRequestStatusMapper::GetNameForRevealRequestStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetSensitiveDataOccurrencesRequest& req) {
      return static_cast<DerivedClient*>(this)->GetSensitiveDataOccurrences(req);
    };
    Aws::Utils::Waiter<Model::GetSensitiveDataOccurrencesRequest, Model::GetSensitiveDataOccurrencesOutcome> waiter(
        2, 60, acceptors, operation, "WaitUntilFindingRevealed");
    return waiter.Wait(request);
  }
};
}  // namespace Macie2
}  // namespace Aws
