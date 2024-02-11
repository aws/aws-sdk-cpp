/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/bedrock-agent/BedrockAgentErrorMarshaller.h>
#include <aws/bedrock-agent/BedrockAgentErrors.h>

using namespace Aws::Client;
using namespace Aws::BedrockAgent;

AWSError<CoreErrors> BedrockAgentErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = BedrockAgentErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}