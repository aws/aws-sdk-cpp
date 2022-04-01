/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace NetworkFirewall
{
namespace NetworkFirewallEndpoint
{
AWS_NETWORKFIREWALL_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace NetworkFirewallEndpoint
} // namespace NetworkFirewall
} // namespace Aws
