/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
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
    std::vector<Aws::Utils::Acceptor<Model::DescribeVaultOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, false});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});

    auto operation = [this](const Model::DescribeVaultRequest& req) { return static_cast<DerivedClient*>(this)->DescribeVault(req); };
    Aws::Utils::Waiter<Model::DescribeVaultRequest, Model::DescribeVaultOutcome> waiter(3, 40, acceptors, operation,
                                                                                        "WaitUntilVaultExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeVaultOutcome> WaitUntilVaultNotExists(const Model::DescribeVaultRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeVaultOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, false});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});

    auto operation = [this](const Model::DescribeVaultRequest& req) { return static_cast<DerivedClient*>(this)->DescribeVault(req); };
    Aws::Utils::Waiter<Model::DescribeVaultRequest, Model::DescribeVaultOutcome> waiter(3, 40, acceptors, operation,
                                                                                        "WaitUntilVaultNotExists");
    return waiter.Wait(request);
  }
};
}  // namespace Glacier
}  // namespace Aws
