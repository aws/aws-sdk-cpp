/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/timestream-write/TimestreamWriteErrorMarshaller.h>
#include <aws/timestream-write/TimestreamWriteErrors.h>

using namespace Aws::Client;
using namespace Aws::TimestreamWrite;

AWSError<CoreErrors> TimestreamWriteErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = TimestreamWriteErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}