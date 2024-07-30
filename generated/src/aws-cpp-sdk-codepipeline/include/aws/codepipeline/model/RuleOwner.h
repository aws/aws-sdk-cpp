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
  enum class RuleOwner
  {
    NOT_SET,
    AWS
  };

namespace RuleOwnerMapper
{
AWS_CODEPIPELINE_API RuleOwner GetRuleOwnerForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForRuleOwner(RuleOwner value);
} // namespace RuleOwnerMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
