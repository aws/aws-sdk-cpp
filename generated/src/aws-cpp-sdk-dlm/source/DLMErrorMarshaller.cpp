/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/dlm/DLMErrorMarshaller.h>
#include <aws/dlm/DLMErrors.h>

using namespace Aws::Client;
using namespace Aws::DLM;

AWSError<CoreErrors> DLMErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = DLMErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}