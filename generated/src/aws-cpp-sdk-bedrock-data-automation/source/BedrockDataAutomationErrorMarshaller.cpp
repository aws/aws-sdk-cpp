/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationErrorMarshaller.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationErrors.h>

using namespace Aws::Client;
using namespace Aws::BedrockDataAutomation;

AWSError<CoreErrors> BedrockDataAutomationErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = BedrockDataAutomationErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}