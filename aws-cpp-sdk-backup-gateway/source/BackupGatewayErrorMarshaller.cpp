/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/backup-gateway/BackupGatewayErrorMarshaller.h>
#include <aws/backup-gateway/BackupGatewayErrors.h>

using namespace Aws::Client;
using namespace Aws::BackupGateway;

AWSError<CoreErrors> BackupGatewayErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = BackupGatewayErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}