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
  enum class RuleGroupType
  {
    NOT_SET,
    STATELESS,
    STATEFUL
  };

namespace RuleGroupTypeMapper
{
AWS_NETWORKFIREWALL_API RuleGroupType GetRuleGroupTypeForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForRuleGroupType(RuleGroupType value);
} // namespace RuleGroupTypeMapper
} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
