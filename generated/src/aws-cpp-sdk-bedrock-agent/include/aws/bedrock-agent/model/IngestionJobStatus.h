/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{
  enum class IngestionJobStatus
  {
    NOT_SET,
    STARTING,
    IN_PROGRESS,
    COMPLETE,
    FAILED
  };

namespace IngestionJobStatusMapper
{
AWS_BEDROCKAGENT_API IngestionJobStatus GetIngestionJobStatusForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForIngestionJobStatus(IngestionJobStatus value);
} // namespace IngestionJobStatusMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
