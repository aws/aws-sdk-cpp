/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/appstream/AppStreamErrorMarshaller.h>
#include <aws/appstream/AppStreamErrors.h>

using namespace Aws::Client;
using namespace Aws::AppStream;

AWSError<CoreErrors> AppStreamErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = AppStreamErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}