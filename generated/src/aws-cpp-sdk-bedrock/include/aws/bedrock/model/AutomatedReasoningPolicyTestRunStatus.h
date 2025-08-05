/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class AutomatedReasoningPolicyTestRunStatus
  {
    NOT_SET,
    NOT_STARTED,
    SCHEDULED,
    IN_PROGRESS,
    COMPLETED,
    FAILED
  };

namespace AutomatedReasoningPolicyTestRunStatusMapper
{
AWS_BEDROCK_API AutomatedReasoningPolicyTestRunStatus GetAutomatedReasoningPolicyTestRunStatusForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForAutomatedReasoningPolicyTestRunStatus(AutomatedReasoningPolicyTestRunStatus value);
} // namespace AutomatedReasoningPolicyTestRunStatusMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
