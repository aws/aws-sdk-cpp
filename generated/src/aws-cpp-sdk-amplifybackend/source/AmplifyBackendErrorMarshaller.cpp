/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/amplifybackend/AmplifyBackendErrorMarshaller.h>
#include <aws/amplifybackend/AmplifyBackendErrors.h>

using namespace Aws::Client;
using namespace Aws::AmplifyBackend;

AWSError<CoreErrors> AmplifyBackendErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = AmplifyBackendErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}