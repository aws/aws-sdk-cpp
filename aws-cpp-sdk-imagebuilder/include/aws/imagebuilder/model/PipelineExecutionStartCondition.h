/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
