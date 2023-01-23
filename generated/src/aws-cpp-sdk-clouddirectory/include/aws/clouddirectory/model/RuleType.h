/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{
  enum class RuleType
  {
    NOT_SET,
    BINARY_LENGTH,
    NUMBER_COMPARISON,
    STRING_FROM_SET,
    STRING_LENGTH
  };

namespace RuleTypeMapper
{
AWS_CLOUDDIRECTORY_API RuleType GetRuleTypeForName(const Aws::String& name);

AWS_CLOUDDIRECTORY_API Aws::String GetNameForRuleType(RuleType value);
} // namespace RuleTypeMapper
} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
