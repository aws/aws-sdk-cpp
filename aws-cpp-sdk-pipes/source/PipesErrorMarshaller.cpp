/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/pipes/PipesErrorMarshaller.h>
#include <aws/pipes/PipesErrors.h>

using namespace Aws::Client;
using namespace Aws::Pipes;

AWSError<CoreErrors> PipesErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = PipesErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}