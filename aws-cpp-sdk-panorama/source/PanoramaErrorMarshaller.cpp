/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/panorama/PanoramaErrorMarshaller.h>
#include <aws/panorama/PanoramaErrors.h>

using namespace Aws::Client;
using namespace Aws::Panorama;

AWSError<CoreErrors> PanoramaErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = PanoramaErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}