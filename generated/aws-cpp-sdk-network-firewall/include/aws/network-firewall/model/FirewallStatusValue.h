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
  enum class FirewallStatusValue
  {
    NOT_SET,
    PROVISIONING,
    DELETING,
    READY
  };

namespace FirewallStatusValueMapper
{
AWS_NETWORKFIREWALL_API FirewallStatusValue GetFirewallStatusValueForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForFirewallStatusValue(FirewallStatusValue value);
} // namespace FirewallStatusValueMapper
} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
