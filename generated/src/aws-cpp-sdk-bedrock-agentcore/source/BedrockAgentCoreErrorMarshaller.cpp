/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreErrorMarshaller.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreErrors.h>

using namespace Aws::Client;
using namespace Aws::BedrockAgentCore;

AWSError<CoreErrors> BedrockAgentCoreErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = BedrockAgentCoreErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}