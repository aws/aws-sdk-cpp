/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/chatbot/ChatbotErrorMarshaller.h>
#include <aws/chatbot/ChatbotErrors.h>

using namespace Aws::Client;
using namespace Aws::chatbot;

AWSError<CoreErrors> ChatbotErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ChatbotErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}