/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{
  enum class RuleCategory
  {
    NOT_SET,
    Rule
  };

namespace RuleCategoryMapper
{
AWS_CODEPIPELINE_API RuleCategory GetRuleCategoryForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForRuleCategory(RuleCategory value);
} // namespace RuleCategoryMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
