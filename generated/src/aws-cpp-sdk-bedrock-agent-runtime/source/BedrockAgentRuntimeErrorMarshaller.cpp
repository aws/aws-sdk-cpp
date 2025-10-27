/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeErrorMarshaller.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeErrors.h>
#include <aws/core/client/AWSError.h>

using namespace Aws::Client;
using namespace Aws::BedrockAgentRuntime;

AWSError<CoreErrors> BedrockAgentRuntimeErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = BedrockAgentRuntimeErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}