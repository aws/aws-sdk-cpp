/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/lightsail/LightsailErrorMarshaller.h>
#include <aws/lightsail/LightsailErrors.h>

using namespace Aws::Client;
using namespace Aws::Lightsail;

AWSError<CoreErrors> LightsailErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = LightsailErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}