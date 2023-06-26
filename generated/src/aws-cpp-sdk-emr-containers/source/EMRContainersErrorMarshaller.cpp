/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/emr-containers/EMRContainersErrorMarshaller.h>
#include <aws/emr-containers/EMRContainersErrors.h>

using namespace Aws::Client;
using namespace Aws::EMRContainers;

AWSError<CoreErrors> EMRContainersErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = EMRContainersErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}