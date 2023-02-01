/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/iotfleetwise/IoTFleetWiseErrorMarshaller.h>
#include <aws/iotfleetwise/IoTFleetWiseErrors.h>

using namespace Aws::Client;
using namespace Aws::IoTFleetWise;

AWSError<CoreErrors> IoTFleetWiseErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = IoTFleetWiseErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}