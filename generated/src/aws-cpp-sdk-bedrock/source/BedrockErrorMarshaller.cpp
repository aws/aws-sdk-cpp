﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/bedrock/BedrockErrorMarshaller.h>
#include <aws/bedrock/BedrockErrors.h>

using namespace Aws::Client;
using namespace Aws::Bedrock;

AWSError<CoreErrors> BedrockErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = BedrockErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}