/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/geo-routes/GeoRoutesErrorMarshaller.h>
#include <aws/geo-routes/GeoRoutesErrors.h>

using namespace Aws::Client;
using namespace Aws::GeoRoutes;

AWSError<CoreErrors> GeoRoutesErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = GeoRoutesErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}