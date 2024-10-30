/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/geo-maps/GeoMapsErrorMarshaller.h>
#include <aws/geo-maps/GeoMapsErrors.h>

using namespace Aws::Client;
using namespace Aws::GeoMaps;

AWSError<CoreErrors> GeoMapsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = GeoMapsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}