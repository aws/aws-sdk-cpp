/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/lex/LexRuntimeServiceErrorMarshaller.h>
#include <aws/lex/LexRuntimeServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::LexRuntimeService;

AWSError<CoreErrors> LexRuntimeServiceErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = LexRuntimeServiceErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}