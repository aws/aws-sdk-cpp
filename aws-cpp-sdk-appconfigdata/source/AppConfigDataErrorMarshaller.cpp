/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/appconfigdata/AppConfigDataErrorMarshaller.h>
#include <aws/appconfigdata/AppConfigDataErrors.h>

using namespace Aws::Client;
using namespace Aws::AppConfigData;

AWSError<CoreErrors> AppConfigDataErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = AppConfigDataErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}