/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/s3/S3ErrorMarshaller.h>
#include <aws/s3/S3Errors.h>

using namespace Aws::Client;
using namespace Aws::S3;

AWSError<CoreErrors> S3ErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = S3ErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
