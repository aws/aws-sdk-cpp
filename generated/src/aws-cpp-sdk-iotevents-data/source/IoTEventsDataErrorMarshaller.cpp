/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/iotevents-data/IoTEventsDataErrorMarshaller.h>
#include <aws/iotevents-data/IoTEventsDataErrors.h>

using namespace Aws::Client;
using namespace Aws::IoTEventsData;

AWSError<CoreErrors> IoTEventsDataErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = IoTEventsDataErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}