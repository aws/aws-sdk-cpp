/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/batch/BatchErrorMarshaller.h>
#include <aws/batch/BatchErrors.h>

using namespace Aws::Client;
using namespace Aws::Batch;

AWSError<CoreErrors> BatchErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = BatchErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}