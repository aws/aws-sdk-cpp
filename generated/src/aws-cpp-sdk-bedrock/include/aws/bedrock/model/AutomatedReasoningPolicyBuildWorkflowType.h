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
  enum class AutomatedReasoningPolicyBuildWorkflowType
  {
    NOT_SET,
    INGEST_CONTENT,
    REFINE_POLICY,
    IMPORT_POLICY
  };

namespace AutomatedReasoningPolicyBuildWorkflowTypeMapper
{
AWS_BEDROCK_API AutomatedReasoningPolicyBuildWorkflowType GetAutomatedReasoningPolicyBuildWorkflowTypeForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForAutomatedReasoningPolicyBuildWorkflowType(AutomatedReasoningPolicyBuildWorkflowType value);
} // namespace AutomatedReasoningPolicyBuildWorkflowTypeMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
