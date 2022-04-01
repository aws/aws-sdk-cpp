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
  enum class StatefulRuleDirection
  {
    NOT_SET,
    FORWARD,
    ANY
  };

namespace StatefulRuleDirectionMapper
{
AWS_NETWORKFIREWALL_API StatefulRuleDirection GetStatefulRuleDirectionForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForStatefulRuleDirection(StatefulRuleDirection value);
} // namespace StatefulRuleDirectionMapper
} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
