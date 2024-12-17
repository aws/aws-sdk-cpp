/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/backupsearch/BackupSearchErrorMarshaller.h>
#include <aws/backupsearch/BackupSearchErrors.h>

using namespace Aws::Client;
using namespace Aws::BackupSearch;

AWSError<CoreErrors> BackupSearchErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = BackupSearchErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}