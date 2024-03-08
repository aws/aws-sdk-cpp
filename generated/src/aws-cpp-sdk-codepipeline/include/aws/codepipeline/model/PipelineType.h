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
  enum class PipelineType
  {
    NOT_SET,
    V1,
    V2
  };

namespace PipelineTypeMapper
{
AWS_CODEPIPELINE_API PipelineType GetPipelineTypeForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForPipelineType(PipelineType value);
} // namespace PipelineTypeMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
