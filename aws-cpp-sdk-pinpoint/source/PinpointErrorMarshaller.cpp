/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/pinpoint/PinpointErrorMarshaller.h>
#include <aws/pinpoint/PinpointErrors.h>

using namespace Aws::Client;
using namespace Aws::Pinpoint;

AWSError<CoreErrors> PinpointErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = PinpointErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}