/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/backup/BackupErrorMarshaller.h>
#include <aws/backup/BackupErrors.h>

using namespace Aws::Client;
using namespace Aws::Backup;

AWSError<CoreErrors> BackupErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = BackupErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}