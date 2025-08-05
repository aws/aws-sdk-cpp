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
  enum class AutomatedReasoningPolicyBuildWorkflowStatus
  {
    NOT_SET,
    SCHEDULED,
    CANCEL_REQUESTED,
    PREPROCESSING,
    BUILDING,
    TESTING,
    COMPLETED,
    FAILED,
    CANCELLED
  };

namespace AutomatedReasoningPolicyBuildWorkflowStatusMapper
{
AWS_BEDROCK_API AutomatedReasoningPolicyBuildWorkflowStatus GetAutomatedReasoningPolicyBuildWorkflowStatusForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForAutomatedReasoningPolicyBuildWorkflowStatus(AutomatedReasoningPolicyBuildWorkflowStatus value);
} // namespace AutomatedReasoningPolicyBuildWorkflowStatusMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
