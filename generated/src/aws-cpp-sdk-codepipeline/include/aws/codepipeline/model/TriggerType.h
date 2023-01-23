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
  enum class TriggerType
  {
    NOT_SET,
    CreatePipeline,
    StartPipelineExecution,
    PollForSourceChanges,
    Webhook,
    CloudWatchEvent,
    PutActionRevision
  };

namespace TriggerTypeMapper
{
AWS_CODEPIPELINE_API TriggerType GetTriggerTypeForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForTriggerType(TriggerType value);
} // namespace TriggerTypeMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
