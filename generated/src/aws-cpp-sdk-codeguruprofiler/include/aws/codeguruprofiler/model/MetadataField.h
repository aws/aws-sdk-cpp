/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{
  enum class MetadataField
  {
    NOT_SET,
    ComputePlatform,
    AgentId,
    AwsRequestId,
    ExecutionEnvironment,
    LambdaFunctionArn,
    LambdaMemoryLimitInMB,
    LambdaRemainingTimeInMilliseconds,
    LambdaTimeGapBetweenInvokesInMilliseconds,
    LambdaPreviousExecutionTimeInMilliseconds
  };

namespace MetadataFieldMapper
{
AWS_CODEGURUPROFILER_API MetadataField GetMetadataFieldForName(const Aws::String& name);

AWS_CODEGURUPROFILER_API Aws::String GetNameForMetadataField(MetadataField value);
} // namespace MetadataFieldMapper
} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
