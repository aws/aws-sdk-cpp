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
  enum class RuleType
  {
    NOT_SET,
    METADATA_FORM_ENFORCEMENT
  };

namespace RuleTypeMapper
{
AWS_DATAZONE_API RuleType GetRuleTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForRuleType(RuleType value);
} // namespace RuleTypeMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
