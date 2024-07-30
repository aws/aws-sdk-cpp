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
  enum class RuleConfigurationPropertyType
  {
    NOT_SET,
    String,
    Number,
    Boolean
  };

namespace RuleConfigurationPropertyTypeMapper
{
AWS_CODEPIPELINE_API RuleConfigurationPropertyType GetRuleConfigurationPropertyTypeForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForRuleConfigurationPropertyType(RuleConfigurationPropertyType value);
} // namespace RuleConfigurationPropertyTypeMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
