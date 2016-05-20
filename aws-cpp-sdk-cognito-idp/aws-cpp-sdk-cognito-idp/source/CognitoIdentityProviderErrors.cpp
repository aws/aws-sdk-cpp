/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/cognito-idp/CognitoIdentityProviderErrors.h>

using namespace Aws::Client;
using namespace Aws::CognitoIdentityProvider;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace CognitoIdentityProviderErrorMapper
{

static const int INVALID_LAMBDA_RESPONSE_HASH = HashingUtils::HashString("InvalidLambdaResponseException");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("InternalErrorException");
static const int NOT_AUTHORIZED_HASH = HashingUtils::HashString("NotAuthorizedException");
static const int ALIAS_EXISTS_HASH = HashingUtils::HashString("AliasExistsException");
static const int INVALID_PASSWORD_HASH = HashingUtils::HashString("InvalidPasswordException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int TOO_MANY_FAILED_ATTEMPTS_HASH = HashingUtils::HashString("TooManyFailedAttemptsException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int UNEXPECTED_LAMBDA_HASH = HashingUtils::HashString("UnexpectedLambdaException");
static const int USER_LAMBDA_VALIDATION_HASH = HashingUtils::HashString("UserLambdaValidationException");
static const int CODE_MISMATCH_HASH = HashingUtils::HashString("CodeMismatchException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int USERNAME_EXISTS_HASH = HashingUtils::HashString("UsernameExistsException");
static const int EXPIRED_CODE_HASH = HashingUtils::HashString("ExpiredCodeException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_LAMBDA_RESPONSE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::INVALID_LAMBDA_RESPONSE), false);
  }
  else if (hashCode == INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::INTERNAL_ERROR), false);
  }
  else if (hashCode == NOT_AUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::NOT_AUTHORIZED), false);
  }
  else if (hashCode == ALIAS_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::ALIAS_EXISTS), false);
  }
  else if (hashCode == INVALID_PASSWORD_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::INVALID_PASSWORD), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::TOO_MANY_REQUESTS), false);
  }
  else if (hashCode == TOO_MANY_FAILED_ATTEMPTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::TOO_MANY_FAILED_ATTEMPTS), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == UNEXPECTED_LAMBDA_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::UNEXPECTED_LAMBDA), false);
  }
  else if (hashCode == USER_LAMBDA_VALIDATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::USER_LAMBDA_VALIDATION), false);
  }
  else if (hashCode == CODE_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::CODE_MISMATCH), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == USERNAME_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::USERNAME_EXISTS), false);
  }
  else if (hashCode == EXPIRED_CODE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::EXPIRED_CODE), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::INVALID_PARAMETER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CognitoIdentityProviderErrorMapper
} // namespace CognitoIdentityProvider
} // namespace Aws
