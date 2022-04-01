/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentityErrorMarshaller.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentityErrors.h>

using namespace Aws::Client;
using namespace Aws::ChimeSDKIdentity;

AWSError<CoreErrors> ChimeSDKIdentityErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ChimeSDKIdentityErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}