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
  enum class ConditionType
  {
    NOT_SET,
    BEFORE_ENTRY,
    ON_SUCCESS
  };

namespace ConditionTypeMapper
{
AWS_CODEPIPELINE_API ConditionType GetConditionTypeForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForConditionType(ConditionType value);
} // namespace ConditionTypeMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
