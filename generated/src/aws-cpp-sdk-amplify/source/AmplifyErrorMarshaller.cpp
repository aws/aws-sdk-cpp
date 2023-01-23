/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/amplify/AmplifyErrorMarshaller.h>
#include <aws/amplify/AmplifyErrors.h>

using namespace Aws::Client;
using namespace Aws::Amplify;

AWSError<CoreErrors> AmplifyErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = AmplifyErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}