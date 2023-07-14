/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/iotthingsgraph/IoTThingsGraphErrorMarshaller.h>
#include <aws/iotthingsgraph/IoTThingsGraphErrors.h>

using namespace Aws::Client;
using namespace Aws::IoTThingsGraph;

AWSError<CoreErrors> IoTThingsGraphErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = IoTThingsGraphErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}