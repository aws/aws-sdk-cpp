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
  enum class StatefulAction
  {
    NOT_SET,
    PASS,
    DROP,
    ALERT
  };

namespace StatefulActionMapper
{
AWS_NETWORKFIREWALL_API StatefulAction GetStatefulActionForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForStatefulAction(StatefulAction value);
} // namespace StatefulActionMapper
} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
