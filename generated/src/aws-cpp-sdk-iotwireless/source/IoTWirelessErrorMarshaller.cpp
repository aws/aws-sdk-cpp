/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/iotwireless/IoTWirelessErrorMarshaller.h>
#include <aws/iotwireless/IoTWirelessErrors.h>

using namespace Aws::Client;
using namespace Aws::IoTWireless;

AWSError<CoreErrors> IoTWirelessErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = IoTWirelessErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}