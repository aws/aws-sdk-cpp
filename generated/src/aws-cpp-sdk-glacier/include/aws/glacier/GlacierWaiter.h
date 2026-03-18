/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/glacier/GlacierClient.h>
#include <aws/glacier/model/DescribeVaultRequest.h>
#include <aws/glacier/model/DescribeVaultResult.h>

#include <algorithm>

namespace Aws {
namespace Glacier {

template <typename DerivedClient = GlacierClient>
class GlacierWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeVaultOutcome> WaitUntilVaultExists(const Model::DescribeVaultRequest& request) {
    using OutcomeT = Model::DescribeVaultOutcome;
    using RequestT = Model::DescribeVaultRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(
        Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("VaultExistsWaiter", Aws::Utils::WaiterState::SUCCESS, false));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("VaultExistsWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeVault(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 40, std::move(acceptors), operation, "WaitUntilVaultExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeVaultOutcome> WaitUntilVaultNotExists(const Model::DescribeVaultRequest& request) {
    using OutcomeT = Model::DescribeVaultOutcome;
    using RequestT = Model::DescribeVaultRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(
        Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("VaultNotExistsWaiter", Aws::Utils::WaiterState::RETRY, false));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("VaultNotExistsWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeVault(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 40, std::move(acceptors), operation, "WaitUntilVaultNotExists");
    return waiter.Wait(request);
  }
};
}  // namespace Glacier
}  // namespace Aws
