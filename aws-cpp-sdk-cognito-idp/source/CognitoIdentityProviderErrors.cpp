/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

static const int USER_NOT_FOUND_HASH = HashingUtils::HashString("UserNotFoundException");
static const int ENABLE_SOFTWARE_TOKEN_M_F_A_HASH = HashingUtils::HashString("EnableSoftwareTokenMFAException");
static const int UNSUPPORTED_USER_STATE_HASH = HashingUtils::HashString("UnsupportedUserStateException");
static const int ALIAS_EXISTS_HASH = HashingUtils::HashString("AliasExistsException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int M_F_A_METHOD_NOT_FOUND_HASH = HashingUtils::HashString("MFAMethodNotFoundException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int PASSWORD_RESET_REQUIRED_HASH = HashingUtils::HashString("PasswordResetRequiredException");
static const int UNEXPECTED_LAMBDA_HASH = HashingUtils::HashString("UnexpectedLambdaException");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("InternalErrorException");
static const int INVALID_SMS_ROLE_TRUST_RELATIONSHIP_HASH = HashingUtils::HashString("InvalidSmsRoleTrustRelationshipException");
static const int GROUP_EXISTS_HASH = HashingUtils::HashString("GroupExistsException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int USER_NOT_CONFIRMED_HASH = HashingUtils::HashString("UserNotConfirmedException");
static const int DUPLICATE_PROVIDER_HASH = HashingUtils::HashString("DuplicateProviderException");
static const int TOO_MANY_FAILED_ATTEMPTS_HASH = HashingUtils::HashString("TooManyFailedAttemptsException");
static const int INVALID_SMS_ROLE_ACCESS_POLICY_HASH = HashingUtils::HashString("InvalidSmsRoleAccessPolicyException");
static const int INVALID_PASSWORD_HASH = HashingUtils::HashString("InvalidPasswordException");
static const int INVALID_LAMBDA_RESPONSE_HASH = HashingUtils::HashString("InvalidLambdaResponseException");
static const int EXPIRED_CODE_HASH = HashingUtils::HashString("ExpiredCodeException");
static const int UNSUPPORTED_IDENTITY_PROVIDER_HASH = HashingUtils::HashString("UnsupportedIdentityProviderException");
static const int CODE_MISMATCH_HASH = HashingUtils::HashString("CodeMismatchException");
static const int INVALID_O_AUTH_FLOW_HASH = HashingUtils::HashString("InvalidOAuthFlowException");
static const int USER_POOL_ADD_ON_NOT_ENABLED_HASH = HashingUtils::HashString("UserPoolAddOnNotEnabledException");
static const int USER_LAMBDA_VALIDATION_HASH = HashingUtils::HashString("UserLambdaValidationException");
static const int CODE_DELIVERY_FAILURE_HASH = HashingUtils::HashString("CodeDeliveryFailureException");
static const int INVALID_USER_POOL_CONFIGURATION_HASH = HashingUtils::HashString("InvalidUserPoolConfigurationException");
static const int INVALID_EMAIL_ROLE_ACCESS_POLICY_HASH = HashingUtils::HashString("InvalidEmailRoleAccessPolicyException");
static const int USERNAME_EXISTS_HASH = HashingUtils::HashString("UsernameExistsException");
static const int SCOPE_DOES_NOT_EXIST_HASH = HashingUtils::HashString("ScopeDoesNotExistException");
static const int USER_IMPORT_IN_PROGRESS_HASH = HashingUtils::HashString("UserImportInProgressException");
static const int USER_POOL_TAGGING_HASH = HashingUtils::HashString("UserPoolTaggingException");
static const int NOT_AUTHORIZED_HASH = HashingUtils::HashString("NotAuthorizedException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int PRECONDITION_NOT_MET_HASH = HashingUtils::HashString("PreconditionNotMetException");
static const int SOFTWARE_TOKEN_M_F_A_NOT_FOUND_HASH = HashingUtils::HashString("SoftwareTokenMFANotFoundException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == USER_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::USER_NOT_FOUND), false);
  }
  else if (hashCode == ENABLE_SOFTWARE_TOKEN_M_F_A_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::ENABLE_SOFTWARE_TOKEN_M_F_A), false);
  }
  else if (hashCode == UNSUPPORTED_USER_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::UNSUPPORTED_USER_STATE), false);
  }
  else if (hashCode == ALIAS_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::ALIAS_EXISTS), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == M_F_A_METHOD_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::M_F_A_METHOD_NOT_FOUND), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == PASSWORD_RESET_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::PASSWORD_RESET_REQUIRED), false);
  }
  else if (hashCode == UNEXPECTED_LAMBDA_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::UNEXPECTED_LAMBDA), false);
  }
  else if (hashCode == INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::INTERNAL_ERROR), false);
  }
  else if (hashCode == INVALID_SMS_ROLE_TRUST_RELATIONSHIP_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::INVALID_SMS_ROLE_TRUST_RELATIONSHIP), false);
  }
  else if (hashCode == GROUP_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::GROUP_EXISTS), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == USER_NOT_CONFIRMED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::USER_NOT_CONFIRMED), false);
  }
  else if (hashCode == DUPLICATE_PROVIDER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::DUPLICATE_PROVIDER), false);
  }
  else if (hashCode == TOO_MANY_FAILED_ATTEMPTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::TOO_MANY_FAILED_ATTEMPTS), false);
  }
  else if (hashCode == INVALID_SMS_ROLE_ACCESS_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::INVALID_SMS_ROLE_ACCESS_POLICY), false);
  }
  else if (hashCode == INVALID_PASSWORD_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::INVALID_PASSWORD), false);
  }
  else if (hashCode == INVALID_LAMBDA_RESPONSE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::INVALID_LAMBDA_RESPONSE), false);
  }
  else if (hashCode == EXPIRED_CODE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::EXPIRED_CODE), false);
  }
  else if (hashCode == UNSUPPORTED_IDENTITY_PROVIDER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::UNSUPPORTED_IDENTITY_PROVIDER), false);
  }
  else if (hashCode == CODE_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::CODE_MISMATCH), false);
  }
  else if (hashCode == INVALID_O_AUTH_FLOW_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::INVALID_O_AUTH_FLOW), false);
  }
  else if (hashCode == USER_POOL_ADD_ON_NOT_ENABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::USER_POOL_ADD_ON_NOT_ENABLED), false);
  }
  else if (hashCode == USER_LAMBDA_VALIDATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::USER_LAMBDA_VALIDATION), false);
  }
  else if (hashCode == CODE_DELIVERY_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::CODE_DELIVERY_FAILURE), false);
  }
  else if (hashCode == INVALID_USER_POOL_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::INVALID_USER_POOL_CONFIGURATION), false);
  }
  else if (hashCode == INVALID_EMAIL_ROLE_ACCESS_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::INVALID_EMAIL_ROLE_ACCESS_POLICY), false);
  }
  else if (hashCode == USERNAME_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::USERNAME_EXISTS), false);
  }
  else if (hashCode == SCOPE_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::SCOPE_DOES_NOT_EXIST), false);
  }
  else if (hashCode == USER_IMPORT_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::USER_IMPORT_IN_PROGRESS), false);
  }
  else if (hashCode == USER_POOL_TAGGING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::USER_POOL_TAGGING), false);
  }
  else if (hashCode == NOT_AUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::NOT_AUTHORIZED), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::TOO_MANY_REQUESTS), false);
  }
  else if (hashCode == PRECONDITION_NOT_MET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::PRECONDITION_NOT_MET), false);
  }
  else if (hashCode == SOFTWARE_TOKEN_M_F_A_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::SOFTWARE_TOKEN_M_F_A_NOT_FOUND), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CognitoIdentityProviderErrorMapper
} // namespace CognitoIdentityProvider
} // namespace Aws
