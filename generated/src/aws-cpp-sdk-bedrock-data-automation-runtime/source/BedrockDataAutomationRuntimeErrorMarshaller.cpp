/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeErrorMarshaller.h>
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeErrors.h>

using namespace Aws::Client;
using namespace Aws::BedrockDataAutomationRuntime;

AWSError<CoreErrors> BedrockDataAutomationRuntimeErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = BedrockDataAutomationRuntimeErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}