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
  enum class AutomatedReasoningPolicyBuildDocumentContentType
  {
    NOT_SET,
    pdf,
    txt
  };

namespace AutomatedReasoningPolicyBuildDocumentContentTypeMapper
{
AWS_BEDROCK_API AutomatedReasoningPolicyBuildDocumentContentType GetAutomatedReasoningPolicyBuildDocumentContentTypeForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForAutomatedReasoningPolicyBuildDocumentContentType(AutomatedReasoningPolicyBuildDocumentContentType value);
} // namespace AutomatedReasoningPolicyBuildDocumentContentTypeMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
