/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/appconfig/AppConfigErrorMarshaller.h>
#include <aws/appconfig/AppConfigErrors.h>

using namespace Aws::Client;
using namespace Aws::AppConfig;

AWSError<CoreErrors> AppConfigErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = AppConfigErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}