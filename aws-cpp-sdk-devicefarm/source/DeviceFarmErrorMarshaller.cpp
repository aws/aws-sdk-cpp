/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/devicefarm/DeviceFarmErrorMarshaller.h>
#include <aws/devicefarm/DeviceFarmErrors.h>

using namespace Aws::Client;
using namespace Aws::DeviceFarm;

AWSError<CoreErrors> DeviceFarmErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = DeviceFarmErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}