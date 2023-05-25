/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/iotfleethub/IoTFleetHubErrorMarshaller.h>
#include <aws/iotfleethub/IoTFleetHubErrors.h>

using namespace Aws::Client;
using namespace Aws::IoTFleetHub;

AWSError<CoreErrors> IoTFleetHubErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = IoTFleetHubErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}