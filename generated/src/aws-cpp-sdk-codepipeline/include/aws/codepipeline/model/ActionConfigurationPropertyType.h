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
  enum class ActionConfigurationPropertyType
  {
    NOT_SET,
    String,
    Number,
    Boolean
  };

namespace ActionConfigurationPropertyTypeMapper
{
AWS_CODEPIPELINE_API ActionConfigurationPropertyType GetActionConfigurationPropertyTypeForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForActionConfigurationPropertyType(ActionConfigurationPropertyType value);
} // namespace ActionConfigurationPropertyTypeMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
