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
  enum class AutomatedReasoningPolicyBuildMessageType
  {
    NOT_SET,
    INFO,
    WARNING,
    ERROR_
  };

namespace AutomatedReasoningPolicyBuildMessageTypeMapper
{
AWS_BEDROCK_API AutomatedReasoningPolicyBuildMessageType GetAutomatedReasoningPolicyBuildMessageTypeForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForAutomatedReasoningPolicyBuildMessageType(AutomatedReasoningPolicyBuildMessageType value);
} // namespace AutomatedReasoningPolicyBuildMessageTypeMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
