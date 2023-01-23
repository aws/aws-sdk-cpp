/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorErrorMarshaller.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorErrors.h>

using namespace Aws::Client;
using namespace Aws::IoTDeviceAdvisor;

AWSError<CoreErrors> IoTDeviceAdvisorErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = IoTDeviceAdvisorErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}