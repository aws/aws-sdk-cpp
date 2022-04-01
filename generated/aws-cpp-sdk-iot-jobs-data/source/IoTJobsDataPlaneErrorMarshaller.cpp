/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/iot-jobs-data/IoTJobsDataPlaneErrorMarshaller.h>
#include <aws/iot-jobs-data/IoTJobsDataPlaneErrors.h>

using namespace Aws::Client;
using namespace Aws::IoTJobsDataPlane;

AWSError<CoreErrors> IoTJobsDataPlaneErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = IoTJobsDataPlaneErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}