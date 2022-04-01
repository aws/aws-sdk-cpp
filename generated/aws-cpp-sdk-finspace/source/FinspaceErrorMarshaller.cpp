/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/finspace/FinspaceErrorMarshaller.h>
#include <aws/finspace/FinspaceErrors.h>

using namespace Aws::Client;
using namespace Aws::finspace;

AWSError<CoreErrors> FinspaceErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = FinspaceErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}