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
  enum class ConfigurationSyncState
  {
    NOT_SET,
    PENDING,
    IN_SYNC
  };

namespace ConfigurationSyncStateMapper
{
AWS_NETWORKFIREWALL_API ConfigurationSyncState GetConfigurationSyncStateForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForConfigurationSyncState(ConfigurationSyncState value);
} // namespace ConfigurationSyncStateMapper
} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
