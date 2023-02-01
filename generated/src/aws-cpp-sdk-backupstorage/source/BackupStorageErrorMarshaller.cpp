/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/backupstorage/BackupStorageErrorMarshaller.h>
#include <aws/backupstorage/BackupStorageErrors.h>

using namespace Aws::Client;
using namespace Aws::BackupStorage;

AWSError<CoreErrors> BackupStorageErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = BackupStorageErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}