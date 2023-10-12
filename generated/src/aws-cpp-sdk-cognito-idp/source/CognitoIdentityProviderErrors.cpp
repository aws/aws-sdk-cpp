/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/cognito-idp/CognitoIdentityProviderErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CognitoIdentityProvider;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace CognitoIdentityProviderErrorMapper
{

static constexpr uint32_t USER_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("UserNotFoundException");
static constexpr uint32_t ENABLE_SOFTWARE_TOKEN_M_F_A_HASH = ConstExprHashingUtils::HashString("EnableSoftwareTokenMFAException");
static constexpr uint32_t UNSUPPORTED_USER_STATE_HASH = ConstExprHashingUtils::HashString("UnsupportedUserStateException");
static constexpr uint32_t ALIAS_EXISTS_HASH = ConstExprHashingUtils::HashString("AliasExistsException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t M_F_A_METHOD_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("MFAMethodNotFoundException");
static constexpr uint32_t CONCURRENT_MODIFICATION_HASH = ConstExprHashingUtils::HashString("ConcurrentModificationException");
static constexpr uint32_t PASSWORD_RESET_REQUIRED_HASH = ConstExprHashingUtils::HashString("PasswordResetRequiredException");
static constexpr uint32_t UNEXPECTED_LAMBDA_HASH = ConstExprHashingUtils::HashString("UnexpectedLambdaException");
static constexpr uint32_t INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("InternalErrorException");
static constexpr uint32_t INVALID_SMS_ROLE_TRUST_RELATIONSHIP_HASH = ConstExprHashingUtils::HashString("InvalidSmsRoleTrustRelationshipException");
static constexpr uint32_t GROUP_EXISTS_HASH = ConstExprHashingUtils::HashString("GroupExistsException");
static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidParameterException");
static constexpr uint32_t USER_NOT_CONFIRMED_HASH = ConstExprHashingUtils::HashString("UserNotConfirmedException");
static constexpr uint32_t UNAUTHORIZED_HASH = ConstExprHashingUtils::HashString("UnauthorizedException");
static constexpr uint32_t DUPLICATE_PROVIDER_HASH = ConstExprHashingUtils::HashString("DuplicateProviderException");
static constexpr uint32_t TOO_MANY_FAILED_ATTEMPTS_HASH = ConstExprHashingUtils::HashString("TooManyFailedAttemptsException");
static constexpr uint32_t INVALID_SMS_ROLE_ACCESS_POLICY_HASH = ConstExprHashingUtils::HashString("InvalidSmsRoleAccessPolicyException");
static constexpr uint32_t UNSUPPORTED_OPERATION_HASH = ConstExprHashingUtils::HashString("UnsupportedOperationException");
static constexpr uint32_t INVALID_PASSWORD_HASH = ConstExprHashingUtils::HashString("InvalidPasswordException");
static constexpr uint32_t INVALID_LAMBDA_RESPONSE_HASH = ConstExprHashingUtils::HashString("InvalidLambdaResponseException");
static constexpr uint32_t EXPIRED_CODE_HASH = ConstExprHashingUtils::HashString("ExpiredCodeException");
static constexpr uint32_t UNSUPPORTED_IDENTITY_PROVIDER_HASH = ConstExprHashingUtils::HashString("UnsupportedIdentityProviderException");
static constexpr uint32_t FORBIDDEN_HASH = ConstExprHashingUtils::HashString("ForbiddenException");
static constexpr uint32_t CODE_MISMATCH_HASH = ConstExprHashingUtils::HashString("CodeMismatchException");
static constexpr uint32_t INVALID_O_AUTH_FLOW_HASH = ConstExprHashingUtils::HashString("InvalidOAuthFlowException");
static constexpr uint32_t USER_POOL_ADD_ON_NOT_ENABLED_HASH = ConstExprHashingUtils::HashString("UserPoolAddOnNotEnabledException");
static constexpr uint32_t UNSUPPORTED_TOKEN_TYPE_HASH = ConstExprHashingUtils::HashString("UnsupportedTokenTypeException");
static constexpr uint32_t USER_LAMBDA_VALIDATION_HASH = ConstExprHashingUtils::HashString("UserLambdaValidationException");
static constexpr uint32_t CODE_DELIVERY_FAILURE_HASH = ConstExprHashingUtils::HashString("CodeDeliveryFailureException");
static constexpr uint32_t INVALID_USER_POOL_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("InvalidUserPoolConfigurationException");
static constexpr uint32_t INVALID_EMAIL_ROLE_ACCESS_POLICY_HASH = ConstExprHashingUtils::HashString("InvalidEmailRoleAccessPolicyException");
static constexpr uint32_t USERNAME_EXISTS_HASH = ConstExprHashingUtils::HashString("UsernameExistsException");
static constexpr uint32_t SCOPE_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("ScopeDoesNotExistException");
static constexpr uint32_t USER_IMPORT_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("UserImportInProgressException");
static constexpr uint32_t USER_POOL_TAGGING_HASH = ConstExprHashingUtils::HashString("UserPoolTaggingException");
static constexpr uint32_t NOT_AUTHORIZED_HASH = ConstExprHashingUtils::HashString("NotAuthorizedException");
static constexpr uint32_t TOO_MANY_REQUESTS_HASH = ConstExprHashingUtils::HashString("TooManyRequestsException");
static constexpr uint32_t PRECONDITION_NOT_MET_HASH = ConstExprHashingUtils::HashString("PreconditionNotMetException");
static constexpr uint32_t SOFTWARE_TOKEN_M_F_A_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("SoftwareTokenMFANotFoundException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::LIMIT_EXCEEDED), true);
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
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::UNAUTHORIZED), false);
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
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::UNSUPPORTED_OPERATION), false);
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
  else if (hashCode == FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::FORBIDDEN), false);
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
  else if (hashCode == UNSUPPORTED_TOKEN_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::UNSUPPORTED_TOKEN_TYPE), false);
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
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::TOO_MANY_REQUESTS), true);
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
