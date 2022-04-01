/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53RecoveryControlConfig
{
namespace Model
{
  enum class RuleType
  {
    NOT_SET,
    ATLEAST,
    AND,
    OR
  };

namespace RuleTypeMapper
{
AWS_ROUTE53RECOVERYCONTROLCONFIG_API RuleType GetRuleTypeForName(const Aws::String& name);

AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::String GetNameForRuleType(RuleType value);
} // namespace RuleTypeMapper
} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
