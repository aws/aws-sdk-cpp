/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/storagegateway/StorageGatewayErrorMarshaller.h>
#include <aws/storagegateway/StorageGatewayErrors.h>

using namespace Aws::Client;
using namespace Aws::StorageGateway;

AWSError<CoreErrors> StorageGatewayErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = StorageGatewayErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}