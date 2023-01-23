/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/arc-zonal-shift/ARCZonalShiftErrorMarshaller.h>
#include <aws/arc-zonal-shift/ARCZonalShiftErrors.h>

using namespace Aws::Client;
using namespace Aws::ARCZonalShift;

AWSError<CoreErrors> ARCZonalShiftErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ARCZonalShiftErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}