/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/sagemaker-geospatial/SageMakerGeospatialErrorMarshaller.h>
#include <aws/sagemaker-geospatial/SageMakerGeospatialErrors.h>

using namespace Aws::Client;
using namespace Aws::SageMakerGeospatial;

AWSError<CoreErrors> SageMakerGeospatialErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SageMakerGeospatialErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}