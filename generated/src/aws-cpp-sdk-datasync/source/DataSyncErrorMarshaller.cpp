/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/datasync/DataSyncErrorMarshaller.h>
#include <aws/datasync/DataSyncErrors.h>

using namespace Aws::Client;
using namespace Aws::DataSync;

AWSError<CoreErrors> DataSyncErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = DataSyncErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}