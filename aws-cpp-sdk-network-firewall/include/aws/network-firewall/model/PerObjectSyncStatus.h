/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{
  enum class PerObjectSyncStatus
  {
    NOT_SET,
    PENDING,
    IN_SYNC
  };

namespace PerObjectSyncStatusMapper
{
AWS_NETWORKFIREWALL_API PerObjectSyncStatus GetPerObjectSyncStatusForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForPerObjectSyncStatus(PerObjectSyncStatus value);
} // namespace PerObjectSyncStatusMapper
} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
