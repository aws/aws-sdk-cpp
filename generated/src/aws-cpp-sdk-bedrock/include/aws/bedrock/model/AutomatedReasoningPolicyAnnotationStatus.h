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
  enum class AutomatedReasoningPolicyAnnotationStatus
  {
    NOT_SET,
    APPLIED,
    FAILED
  };

namespace AutomatedReasoningPolicyAnnotationStatusMapper
{
AWS_BEDROCK_API AutomatedReasoningPolicyAnnotationStatus GetAutomatedReasoningPolicyAnnotationStatusForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForAutomatedReasoningPolicyAnnotationStatus(AutomatedReasoningPolicyAnnotationStatus value);
} // namespace AutomatedReasoningPolicyAnnotationStatusMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
