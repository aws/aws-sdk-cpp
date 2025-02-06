/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{
  enum class RuleType
  {
    NOT_SET,
    Required
  };

namespace RuleTypeMapper
{
AWS_CONNECTCASES_API RuleType GetRuleTypeForName(const Aws::String& name);

AWS_CONNECTCASES_API Aws::String GetNameForRuleType(RuleType value);
} // namespace RuleTypeMapper
} // namespace Model
} // namespace ConnectCases
} // namespace Aws
