/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/directory-service-data/DirectoryServiceDataErrorMarshaller.h>
#include <aws/directory-service-data/DirectoryServiceDataErrors.h>

using namespace Aws::Client;
using namespace Aws::DirectoryServiceData;

AWSError<CoreErrors> DirectoryServiceDataErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = DirectoryServiceDataErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}