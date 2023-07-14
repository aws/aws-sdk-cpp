/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeErrorMarshaller.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeErrors.h>

using namespace Aws::Client;
using namespace Aws::SageMakerFeatureStoreRuntime;

AWSError<CoreErrors> SageMakerFeatureStoreRuntimeErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SageMakerFeatureStoreRuntimeErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}