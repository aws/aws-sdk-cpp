/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ds/DirectoryServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::DirectoryService;

namespace Aws {
namespace DirectoryService {
namespace DirectoryServiceErrorMapper {

static const int CLIENT_HASH = HashingUtils::HashString("ClientException");
static const int ENTITY_ALREADY_EXISTS_HASH = HashingUtils::HashString("EntityAlreadyExistsException");
static const int DISABLE_ALREADY_IN_PROGRESS_HASH = HashingUtils::HashString("DisableAlreadyInProgressException");
static const int UNSUPPORTED_SETTINGS_HASH = HashingUtils::HashString("UnsupportedSettingsException");
static const int DIRECTORY_ALREADY_SHARED_HASH = HashingUtils::HashString("DirectoryAlreadySharedException");
static const int DIRECTORY_ALREADY_IN_REGION_HASH = HashingUtils::HashString("DirectoryAlreadyInRegionException");
static const int INVALID_L_D_A_P_S_STATUS_HASH = HashingUtils::HashString("InvalidLDAPSStatusException");
static const int DIRECTORY_UNAVAILABLE_HASH = HashingUtils::HashString("DirectoryUnavailableException");
static const int USER_DOES_NOT_EXIST_HASH = HashingUtils::HashString("UserDoesNotExistException");
static const int ENTITY_DOES_NOT_EXIST_HASH = HashingUtils::HashString("EntityDoesNotExistException");
static const int AUTHENTICATION_FAILED_HASH = HashingUtils::HashString("AuthenticationFailedException");
static const int ENABLE_ALREADY_IN_PROGRESS_HASH = HashingUtils::HashString("EnableAlreadyInProgressException");
static const int INSUFFICIENT_PERMISSIONS_HASH = HashingUtils::HashString("InsufficientPermissionsException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int DIRECTORY_IN_DESIRED_STATE_HASH = HashingUtils::HashString("DirectoryInDesiredStateException");
static const int A_D_ASSESSMENT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ADAssessmentLimitExceededException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int TAG_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("TagLimitExceededException");
static const int INVALID_CERTIFICATE_HASH = HashingUtils::HashString("InvalidCertificateException");
static const int UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("UnsupportedOperationException");
static const int CERTIFICATE_DOES_NOT_EXIST_HASH = HashingUtils::HashString("CertificateDoesNotExistException");
static const int CERTIFICATE_ALREADY_EXISTS_HASH = HashingUtils::HashString("CertificateAlreadyExistsException");
static const int INVALID_PASSWORD_HASH = HashingUtils::HashString("InvalidPasswordException");
static const int INCOMPATIBLE_SETTINGS_HASH = HashingUtils::HashString("IncompatibleSettingsException");
static const int DIRECTORY_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("DirectoryLimitExceededException");
static const int DIRECTORY_NOT_SHARED_HASH = HashingUtils::HashString("DirectoryNotSharedException");
static const int CERTIFICATE_IN_USE_HASH = HashingUtils::HashString("CertificateInUseException");
static const int SHARE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ShareLimitExceededException");
static const int DIRECTORY_DOES_NOT_EXIST_HASH = HashingUtils::HashString("DirectoryDoesNotExistException");
static const int NO_AVAILABLE_CERTIFICATE_HASH = HashingUtils::HashString("NoAvailableCertificateException");
static const int INVALID_CLIENT_AUTH_STATUS_HASH = HashingUtils::HashString("InvalidClientAuthStatusException");
static const int ORGANIZATIONS_HASH = HashingUtils::HashString("OrganizationsException");
static const int INVALID_TARGET_HASH = HashingUtils::HashString("InvalidTargetException");
static const int DOMAIN_CONTROLLER_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("DomainControllerLimitExceededException");
static const int REGION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("RegionLimitExceededException");
static const int SERVICE_HASH = HashingUtils::HashString("ServiceException");
static const int IP_ROUTE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("IpRouteLimitExceededException");
static const int SNAPSHOT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("SnapshotLimitExceededException");
static const int CERTIFICATE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("CertificateLimitExceededException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CLIENT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::CLIENT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == ENTITY_ALREADY_EXISTS_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::ENTITY_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == DISABLE_ALREADY_IN_PROGRESS_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::DISABLE_ALREADY_IN_PROGRESS), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == UNSUPPORTED_SETTINGS_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::UNSUPPORTED_SETTINGS), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == DIRECTORY_ALREADY_SHARED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::DIRECTORY_ALREADY_SHARED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == DIRECTORY_ALREADY_IN_REGION_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::DIRECTORY_ALREADY_IN_REGION), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INVALID_L_D_A_P_S_STATUS_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::INVALID_L_D_A_P_S_STATUS), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == DIRECTORY_UNAVAILABLE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::DIRECTORY_UNAVAILABLE), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == USER_DOES_NOT_EXIST_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::USER_DOES_NOT_EXIST), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == ENTITY_DOES_NOT_EXIST_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::ENTITY_DOES_NOT_EXIST), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == AUTHENTICATION_FAILED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::AUTHENTICATION_FAILED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == ENABLE_ALREADY_IN_PROGRESS_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::ENABLE_ALREADY_IN_PROGRESS), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INSUFFICIENT_PERMISSIONS_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::INSUFFICIENT_PERMISSIONS), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INVALID_NEXT_TOKEN_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::INVALID_NEXT_TOKEN), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == DIRECTORY_IN_DESIRED_STATE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::DIRECTORY_IN_DESIRED_STATE), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == A_D_ASSESSMENT_LIMIT_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::A_D_ASSESSMENT_LIMIT_EXCEEDED),
                                RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INVALID_PARAMETER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::INVALID_PARAMETER), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == TAG_LIMIT_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::TAG_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INVALID_CERTIFICATE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::INVALID_CERTIFICATE), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == UNSUPPORTED_OPERATION_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::UNSUPPORTED_OPERATION), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == CERTIFICATE_DOES_NOT_EXIST_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::CERTIFICATE_DOES_NOT_EXIST), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == CERTIFICATE_ALREADY_EXISTS_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::CERTIFICATE_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INVALID_PASSWORD_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::INVALID_PASSWORD), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INCOMPATIBLE_SETTINGS_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::INCOMPATIBLE_SETTINGS), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == DIRECTORY_LIMIT_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::DIRECTORY_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == DIRECTORY_NOT_SHARED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::DIRECTORY_NOT_SHARED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == CERTIFICATE_IN_USE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::CERTIFICATE_IN_USE), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SHARE_LIMIT_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::SHARE_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == DIRECTORY_DOES_NOT_EXIST_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::DIRECTORY_DOES_NOT_EXIST), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == NO_AVAILABLE_CERTIFICATE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::NO_AVAILABLE_CERTIFICATE), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INVALID_CLIENT_AUTH_STATUS_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::INVALID_CLIENT_AUTH_STATUS), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == ORGANIZATIONS_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::ORGANIZATIONS), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INVALID_TARGET_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::INVALID_TARGET), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == DOMAIN_CONTROLLER_LIMIT_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::DOMAIN_CONTROLLER_LIMIT_EXCEEDED),
                                RetryableType::NOT_RETRYABLE);
  } else if (hashCode == REGION_LIMIT_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::REGION_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::SERVICE), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == IP_ROUTE_LIMIT_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::IP_ROUTE_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SNAPSHOT_LIMIT_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::SNAPSHOT_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == CERTIFICATE_LIMIT_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::CERTIFICATE_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace DirectoryServiceErrorMapper
}  // namespace DirectoryService
}  // namespace Aws
