/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/cognito-idp/CognitoIdentityProviderErrors.h>
#include <aws/cognito-idp/model/InvalidParameterException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CognitoIdentityProvider;
using namespace Aws::CognitoIdentityProvider::Model;

namespace Aws
{
namespace CognitoIdentityProvider
{
template<> AWS_COGNITOIDENTITYPROVIDER_API InvalidParameterException CognitoIdentityProviderError::GetModeledError()
{
  assert(this->GetErrorType() == CognitoIdentityProviderErrors::INVALID_PARAMETER);
  return InvalidParameterException(this->GetJsonPayload().View());
}

namespace CognitoIdentityProviderErrorMapper
{

static const int TIER_CHANGE_NOT_ALLOWED_HASH = HashingUtils::HashString("TierChangeNotAllowedException");
static const int UNSUPPORTED_USER_STATE_HASH = HashingUtils::HashString("UnsupportedUserStateException");
static const int ALIAS_EXISTS_HASH = HashingUtils::HashString("AliasExistsException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int FEATURE_UNAVAILABLE_IN_TIER_HASH = HashingUtils::HashString("FeatureUnavailableInTierException");
static const int TERMS_EXISTS_HASH = HashingUtils::HashString("TermsExistsException");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("InternalErrorException");
static const int USER_NOT_CONFIRMED_HASH = HashingUtils::HashString("UserNotConfirmedException");
static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UnauthorizedException");
static const int INVALID_SMS_ROLE_ACCESS_POLICY_HASH = HashingUtils::HashString("InvalidSmsRoleAccessPolicyException");
static const int WEB_AUTHN_CONFIGURATION_MISSING_HASH = HashingUtils::HashString("WebAuthnConfigurationMissingException");
static const int EXPIRED_CODE_HASH = HashingUtils::HashString("ExpiredCodeException");
static const int UNSUPPORTED_IDENTITY_PROVIDER_HASH = HashingUtils::HashString("UnsupportedIdentityProviderException");
static const int DEVICE_KEY_EXISTS_HASH = HashingUtils::HashString("DeviceKeyExistsException");
static const int FORBIDDEN_HASH = HashingUtils::HashString("ForbiddenException");
static const int CODE_MISMATCH_HASH = HashingUtils::HashString("CodeMismatchException");
static const int INVALID_O_AUTH_FLOW_HASH = HashingUtils::HashString("InvalidOAuthFlowException");
static const int USER_POOL_ADD_ON_NOT_ENABLED_HASH = HashingUtils::HashString("UserPoolAddOnNotEnabledException");
static const int UNSUPPORTED_TOKEN_TYPE_HASH = HashingUtils::HashString("UnsupportedTokenTypeException");
static const int INVALID_USER_POOL_CONFIGURATION_HASH = HashingUtils::HashString("InvalidUserPoolConfigurationException");
static const int INVALID_EMAIL_ROLE_ACCESS_POLICY_HASH = HashingUtils::HashString("InvalidEmailRoleAccessPolicyException");
static const int SCOPE_DOES_NOT_EXIST_HASH = HashingUtils::HashString("ScopeDoesNotExistException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int PRECONDITION_NOT_MET_HASH = HashingUtils::HashString("PreconditionNotMetException");
static const int SOFTWARE_TOKEN_M_F_A_NOT_FOUND_HASH = HashingUtils::HashString("SoftwareTokenMFANotFoundException");
static const int WEB_AUTHN_NOT_ENABLED_HASH = HashingUtils::HashString("WebAuthnNotEnabledException");
static const int USER_NOT_FOUND_HASH = HashingUtils::HashString("UserNotFoundException");
static const int ENABLE_SOFTWARE_TOKEN_M_F_A_HASH = HashingUtils::HashString("EnableSoftwareTokenMFAException");
static const int M_F_A_METHOD_NOT_FOUND_HASH = HashingUtils::HashString("MFAMethodNotFoundException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int MANAGED_LOGIN_BRANDING_EXISTS_HASH = HashingUtils::HashString("ManagedLoginBrandingExistsException");
static const int PASSWORD_RESET_REQUIRED_HASH = HashingUtils::HashString("PasswordResetRequiredException");
static const int WEB_AUTHN_CREDENTIAL_NOT_SUPPORTED_HASH = HashingUtils::HashString("WebAuthnCredentialNotSupportedException");
static const int UNEXPECTED_LAMBDA_HASH = HashingUtils::HashString("UnexpectedLambdaException");
static const int PASSWORD_HISTORY_POLICY_VIOLATION_HASH = HashingUtils::HashString("PasswordHistoryPolicyViolationException");
static const int INVALID_SMS_ROLE_TRUST_RELATIONSHIP_HASH = HashingUtils::HashString("InvalidSmsRoleTrustRelationshipException");
static const int GROUP_EXISTS_HASH = HashingUtils::HashString("GroupExistsException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int DUPLICATE_PROVIDER_HASH = HashingUtils::HashString("DuplicateProviderException");
static const int TOO_MANY_FAILED_ATTEMPTS_HASH = HashingUtils::HashString("TooManyFailedAttemptsException");
static const int UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("UnsupportedOperationException");
static const int WEB_AUTHN_CHALLENGE_NOT_FOUND_HASH = HashingUtils::HashString("WebAuthnChallengeNotFoundException");
static const int INVALID_PASSWORD_HASH = HashingUtils::HashString("InvalidPasswordException");
static const int INVALID_LAMBDA_RESPONSE_HASH = HashingUtils::HashString("InvalidLambdaResponseException");
static const int WEB_AUTHN_ORIGIN_NOT_ALLOWED_HASH = HashingUtils::HashString("WebAuthnOriginNotAllowedException");
static const int WEB_AUTHN_CLIENT_MISMATCH_HASH = HashingUtils::HashString("WebAuthnClientMismatchException");
static const int USER_LAMBDA_VALIDATION_HASH = HashingUtils::HashString("UserLambdaValidationException");
static const int CODE_DELIVERY_FAILURE_HASH = HashingUtils::HashString("CodeDeliveryFailureException");
static const int REFRESH_TOKEN_REUSE_HASH = HashingUtils::HashString("RefreshTokenReuseException");
static const int USERNAME_EXISTS_HASH = HashingUtils::HashString("UsernameExistsException");
static const int USER_IMPORT_IN_PROGRESS_HASH = HashingUtils::HashString("UserImportInProgressException");
static const int USER_POOL_TAGGING_HASH = HashingUtils::HashString("UserPoolTaggingException");
static const int NOT_AUTHORIZED_HASH = HashingUtils::HashString("NotAuthorizedException");
static const int WEB_AUTHN_RELYING_PARTY_MISMATCH_HASH = HashingUtils::HashString("WebAuthnRelyingPartyMismatchException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == TIER_CHANGE_NOT_ALLOWED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::TIER_CHANGE_NOT_ALLOWED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNSUPPORTED_USER_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::UNSUPPORTED_USER_STATE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ALIAS_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::ALIAS_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == FEATURE_UNAVAILABLE_IN_TIER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::FEATURE_UNAVAILABLE_IN_TIER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TERMS_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::TERMS_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::INTERNAL_ERROR), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == USER_NOT_CONFIRMED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::USER_NOT_CONFIRMED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::UNAUTHORIZED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_SMS_ROLE_ACCESS_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::INVALID_SMS_ROLE_ACCESS_POLICY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == WEB_AUTHN_CONFIGURATION_MISSING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::WEB_AUTHN_CONFIGURATION_MISSING), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == EXPIRED_CODE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::EXPIRED_CODE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNSUPPORTED_IDENTITY_PROVIDER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::UNSUPPORTED_IDENTITY_PROVIDER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DEVICE_KEY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::DEVICE_KEY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::FORBIDDEN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CODE_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::CODE_MISMATCH), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_O_AUTH_FLOW_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::INVALID_O_AUTH_FLOW), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == USER_POOL_ADD_ON_NOT_ENABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::USER_POOL_ADD_ON_NOT_ENABLED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNSUPPORTED_TOKEN_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::UNSUPPORTED_TOKEN_TYPE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_USER_POOL_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::INVALID_USER_POOL_CONFIGURATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_EMAIL_ROLE_ACCESS_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::INVALID_EMAIL_ROLE_ACCESS_POLICY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SCOPE_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::SCOPE_DOES_NOT_EXIST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::TOO_MANY_REQUESTS), RetryableType::RETRYABLE);
  }
  else if (hashCode == PRECONDITION_NOT_MET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::PRECONDITION_NOT_MET), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SOFTWARE_TOKEN_M_F_A_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::SOFTWARE_TOKEN_M_F_A_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == WEB_AUTHN_NOT_ENABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::WEB_AUTHN_NOT_ENABLED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == USER_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::USER_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ENABLE_SOFTWARE_TOKEN_M_F_A_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::ENABLE_SOFTWARE_TOKEN_M_F_A), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == M_F_A_METHOD_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::M_F_A_METHOD_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::CONCURRENT_MODIFICATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == MANAGED_LOGIN_BRANDING_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::MANAGED_LOGIN_BRANDING_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PASSWORD_RESET_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::PASSWORD_RESET_REQUIRED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == WEB_AUTHN_CREDENTIAL_NOT_SUPPORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::WEB_AUTHN_CREDENTIAL_NOT_SUPPORTED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNEXPECTED_LAMBDA_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::UNEXPECTED_LAMBDA), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PASSWORD_HISTORY_POLICY_VIOLATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::PASSWORD_HISTORY_POLICY_VIOLATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_SMS_ROLE_TRUST_RELATIONSHIP_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::INVALID_SMS_ROLE_TRUST_RELATIONSHIP), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == GROUP_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::GROUP_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::INVALID_PARAMETER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DUPLICATE_PROVIDER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::DUPLICATE_PROVIDER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_FAILED_ATTEMPTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::TOO_MANY_FAILED_ATTEMPTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::UNSUPPORTED_OPERATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == WEB_AUTHN_CHALLENGE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::WEB_AUTHN_CHALLENGE_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_PASSWORD_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::INVALID_PASSWORD), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_LAMBDA_RESPONSE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::INVALID_LAMBDA_RESPONSE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == WEB_AUTHN_ORIGIN_NOT_ALLOWED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::WEB_AUTHN_ORIGIN_NOT_ALLOWED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == WEB_AUTHN_CLIENT_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::WEB_AUTHN_CLIENT_MISMATCH), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == USER_LAMBDA_VALIDATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::USER_LAMBDA_VALIDATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CODE_DELIVERY_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::CODE_DELIVERY_FAILURE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == REFRESH_TOKEN_REUSE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::REFRESH_TOKEN_REUSE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == USERNAME_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::USERNAME_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == USER_IMPORT_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::USER_IMPORT_IN_PROGRESS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == USER_POOL_TAGGING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::USER_POOL_TAGGING), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NOT_AUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::NOT_AUTHORIZED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == WEB_AUTHN_RELYING_PARTY_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityProviderErrors::WEB_AUTHN_RELYING_PARTY_MISMATCH), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CognitoIdentityProviderErrorMapper
} // namespace CognitoIdentityProvider
} // namespace Aws
