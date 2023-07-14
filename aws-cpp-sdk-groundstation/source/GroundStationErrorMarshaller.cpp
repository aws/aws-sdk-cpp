/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/groundstation/GroundStationErrorMarshaller.h>
#include <aws/groundstation/GroundStationErrors.h>

using namespace Aws::Client;
using namespace Aws::GroundStation;

AWSError<CoreErrors> GroundStationErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = GroundStationErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}