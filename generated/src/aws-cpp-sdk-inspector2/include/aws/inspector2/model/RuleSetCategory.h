/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class RuleSetCategory
  {
    NOT_SET,
    SAST,
    IAC,
    SCA
  };

namespace RuleSetCategoryMapper
{
AWS_INSPECTOR2_API RuleSetCategory GetRuleSetCategoryForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForRuleSetCategory(RuleSetCategory value);
} // namespace RuleSetCategoryMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
