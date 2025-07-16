/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    CannotParse,
    FieldValidationFailed,
    IdempotentParameterMismatchException,
    EventInOtherSession,
    ResourceConflict
  };

namespace ValidationExceptionReasonMapper
{
AWS_BEDROCKAGENTCORE_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
