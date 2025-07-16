/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlErrorMarshaller.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlErrors.h>

using namespace Aws::Client;
using namespace Aws::BedrockAgentCoreControl;

AWSError<CoreErrors> BedrockAgentCoreControlErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = BedrockAgentCoreControlErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}