/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{
  enum class PipelineExecutionStartCondition
  {
    NOT_SET,
    EXPRESSION_MATCH_ONLY,
    EXPRESSION_MATCH_AND_DEPENDENCY_UPDATES_AVAILABLE
  };

namespace PipelineExecutionStartConditionMapper
{
AWS_IMAGEBUILDER_API PipelineExecutionStartCondition GetPipelineExecutionStartConditionForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForPipelineExecutionStartCondition(PipelineExecutionStartCondition value);
} // namespace PipelineExecutionStartConditionMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
