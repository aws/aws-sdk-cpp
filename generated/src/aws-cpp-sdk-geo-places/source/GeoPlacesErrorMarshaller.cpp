/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/geo-places/GeoPlacesErrorMarshaller.h>
#include <aws/geo-places/GeoPlacesErrors.h>

using namespace Aws::Client;
using namespace Aws::GeoPlaces;

AWSError<CoreErrors> GeoPlacesErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = GeoPlacesErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}