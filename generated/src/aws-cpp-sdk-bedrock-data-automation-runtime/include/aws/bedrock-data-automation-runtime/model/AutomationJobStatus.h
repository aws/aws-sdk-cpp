/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockDataAutomationRuntime
{
namespace Model
{
  enum class AutomationJobStatus
  {
    NOT_SET,
    Created,
    InProgress,
    Success,
    ServiceError,
    ClientError
  };

namespace AutomationJobStatusMapper
{
AWS_BEDROCKDATAAUTOMATIONRUNTIME_API AutomationJobStatus GetAutomationJobStatusForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATIONRUNTIME_API Aws::String GetNameForAutomationJobStatus(AutomationJobStatus value);
} // namespace AutomationJobStatusMapper
} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
