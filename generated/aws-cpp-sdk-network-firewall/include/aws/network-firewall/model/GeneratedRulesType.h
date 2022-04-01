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
  enum class GeneratedRulesType
  {
    NOT_SET,
    ALLOWLIST,
    DENYLIST
  };

namespace GeneratedRulesTypeMapper
{
AWS_NETWORKFIREWALL_API GeneratedRulesType GetGeneratedRulesTypeForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForGeneratedRulesType(GeneratedRulesType value);
} // namespace GeneratedRulesTypeMapper
} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
