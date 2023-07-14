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
  enum class OverrideAction
  {
    NOT_SET,
    DROP_TO_ALERT
  };

namespace OverrideActionMapper
{
AWS_NETWORKFIREWALL_API OverrideAction GetOverrideActionForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForOverrideAction(OverrideAction value);
} // namespace OverrideActionMapper
} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
