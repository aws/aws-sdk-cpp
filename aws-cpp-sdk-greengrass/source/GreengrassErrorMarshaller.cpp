/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/greengrass/GreengrassErrorMarshaller.h>
#include <aws/greengrass/GreengrassErrors.h>

using namespace Aws::Client;
using namespace Aws::Greengrass;

AWSError<CoreErrors> GreengrassErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = GreengrassErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}