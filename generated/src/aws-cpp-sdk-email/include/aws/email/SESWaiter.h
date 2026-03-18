/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/email/SESClient.h>
#include <aws/email/model/GetIdentityVerificationAttributesRequest.h>
#include <aws/email/model/GetIdentityVerificationAttributesResult.h>
#include <aws/email/model/VerificationStatus.h>

#include <algorithm>

namespace Aws {
namespace SES {

template <typename DerivedClient = SESClient>
class SESWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetIdentityVerificationAttributesOutcome> WaitUntilIdentityExists(
      const Model::GetIdentityVerificationAttributesRequest& request) {
    using OutcomeT = Model::GetIdentityVerificationAttributesOutcome;
    using RequestT = Model::GetIdentityVerificationAttributesRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "IdentityExistsWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Success"),
        [](const Model::GetIdentityVerificationAttributesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetVerificationAttributes().begin(), result.GetVerificationAttributes().end(), [&](const auto& pair0) {
            const auto& item = pair0.second;
            return Model::VerificationStatusMapper::GetNameForVerificationStatus(item.GetVerificationStatus()) ==
                   expected.get<Aws::String>();
          });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetIdentityVerificationAttributes(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 40, std::move(acceptors), operation, "WaitUntilIdentityExists");
    return waiter.Wait(request);
  }
};
}  // namespace SES
}  // namespace Aws
