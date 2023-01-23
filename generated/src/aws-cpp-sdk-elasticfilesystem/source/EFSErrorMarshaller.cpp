/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/elasticfilesystem/EFSErrorMarshaller.h>
#include <aws/elasticfilesystem/EFSErrors.h>

using namespace Aws::Client;
using namespace Aws::EFS;

AWSError<CoreErrors> EFSErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = EFSErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}