/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FMS
{
namespace Model
{
  enum class NetworkFirewallOverrideAction
  {
    NOT_SET,
    DROP_TO_ALERT
  };

namespace NetworkFirewallOverrideActionMapper
{
AWS_FMS_API NetworkFirewallOverrideAction GetNetworkFirewallOverrideActionForName(const Aws::String& name);

AWS_FMS_API Aws::String GetNameForNetworkFirewallOverrideAction(NetworkFirewallOverrideAction value);
} // namespace NetworkFirewallOverrideActionMapper
} // namespace Model
} // namespace FMS
} // namespace Aws
