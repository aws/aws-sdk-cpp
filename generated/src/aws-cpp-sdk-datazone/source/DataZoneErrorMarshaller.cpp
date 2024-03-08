/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/datazone/DataZoneErrorMarshaller.h>
#include <aws/datazone/DataZoneErrors.h>

using namespace Aws::Client;
using namespace Aws::DataZone;

AWSError<CoreErrors> DataZoneErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = DataZoneErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}