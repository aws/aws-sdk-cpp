/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgentCoreControl
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
AWS_BEDROCKAGENTCORECONTROL_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
