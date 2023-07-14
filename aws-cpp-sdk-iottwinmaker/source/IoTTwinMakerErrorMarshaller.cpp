/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/iottwinmaker/IoTTwinMakerErrorMarshaller.h>
#include <aws/iottwinmaker/IoTTwinMakerErrors.h>

using namespace Aws::Client;
using namespace Aws::IoTTwinMaker;

AWSError<CoreErrors> IoTTwinMakerErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = IoTTwinMakerErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}