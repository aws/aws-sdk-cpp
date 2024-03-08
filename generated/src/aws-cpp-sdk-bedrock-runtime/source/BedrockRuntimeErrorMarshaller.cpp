/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/bedrock-runtime/BedrockRuntimeErrorMarshaller.h>
#include <aws/bedrock-runtime/BedrockRuntimeErrors.h>

using namespace Aws::Client;
using namespace Aws::BedrockRuntime;

AWSError<CoreErrors> BedrockRuntimeErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = BedrockRuntimeErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}