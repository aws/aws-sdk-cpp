/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class RuleTargetType
  {
    NOT_SET,
    DOMAIN_UNIT
  };

namespace RuleTargetTypeMapper
{
AWS_DATAZONE_API RuleTargetType GetRuleTargetTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForRuleTargetType(RuleTargetType value);
} // namespace RuleTargetTypeMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
