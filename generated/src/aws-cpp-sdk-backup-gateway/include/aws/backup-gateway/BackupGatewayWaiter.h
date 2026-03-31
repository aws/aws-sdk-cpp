/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGatewayClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace BackupGateway {

template <typename DerivedClient = BackupGatewayClient>
class BackupGatewayWaiter {
 public:
};
}  // namespace BackupGateway
}  // namespace Aws
