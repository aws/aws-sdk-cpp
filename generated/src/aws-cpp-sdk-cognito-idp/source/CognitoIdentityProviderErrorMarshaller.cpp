/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/cognito-idp/CognitoIdentityProviderErrorMarshaller.h>
#include <aws/cognito-idp/CognitoIdentityProviderErrors.h>

using namespace Aws::Client;
using namespace Aws::CognitoIdentityProvider;

AWSError<CoreErrors> CognitoIdentityProviderErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = CognitoIdentityProviderErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}