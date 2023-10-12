/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ds/DirectoryServiceErrors.h>
#include <aws/ds/model/ClientException.h>
#include <aws/ds/model/EntityAlreadyExistsException.h>
#include <aws/ds/model/UnsupportedSettingsException.h>
#include <aws/ds/model/DirectoryAlreadySharedException.h>
#include <aws/ds/model/DirectoryAlreadyInRegionException.h>
#include <aws/ds/model/InvalidLDAPSStatusException.h>
#include <aws/ds/model/DirectoryUnavailableException.h>
#include <aws/ds/model/UserDoesNotExistException.h>
#include <aws/ds/model/EntityDoesNotExistException.h>
#include <aws/ds/model/AuthenticationFailedException.h>
#include <aws/ds/model/InsufficientPermissionsException.h>
#include <aws/ds/model/InvalidNextTokenException.h>
#include <aws/ds/model/DirectoryInDesiredStateException.h>
#include <aws/ds/model/InvalidParameterException.h>
#include <aws/ds/model/TagLimitExceededException.h>
#include <aws/ds/model/InvalidCertificateException.h>
#include <aws/ds/model/AccessDeniedException.h>
#include <aws/ds/model/UnsupportedOperationException.h>
#include <aws/ds/model/CertificateDoesNotExistException.h>
#include <aws/ds/model/CertificateAlreadyExistsException.h>
#include <aws/ds/model/InvalidPasswordException.h>
#include <aws/ds/model/IncompatibleSettingsException.h>
#include <aws/ds/model/DirectoryLimitExceededException.h>
#include <aws/ds/model/DirectoryNotSharedException.h>
#include <aws/ds/model/CertificateInUseException.h>
#include <aws/ds/model/ShareLimitExceededException.h>
#include <aws/ds/model/DirectoryDoesNotExistException.h>
#include <aws/ds/model/NoAvailableCertificateException.h>
#include <aws/ds/model/InvalidClientAuthStatusException.h>
#include <aws/ds/model/OrganizationsException.h>
#include <aws/ds/model/InvalidTargetException.h>
#include <aws/ds/model/DomainControllerLimitExceededException.h>
#include <aws/ds/model/RegionLimitExceededException.h>
#include <aws/ds/model/ServiceException.h>
#include <aws/ds/model/IpRouteLimitExceededException.h>
#include <aws/ds/model/SnapshotLimitExceededException.h>
#include <aws/ds/model/CertificateLimitExceededException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::DirectoryService;
using namespace Aws::DirectoryService::Model;

namespace Aws
{
namespace DirectoryService
{
template<> AWS_DIRECTORYSERVICE_API ClientException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::CLIENT);
  return ClientException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API EntityAlreadyExistsException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::ENTITY_ALREADY_EXISTS);
  return EntityAlreadyExistsException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API UnsupportedSettingsException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::UNSUPPORTED_SETTINGS);
  return UnsupportedSettingsException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API DirectoryAlreadySharedException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::DIRECTORY_ALREADY_SHARED);
  return DirectoryAlreadySharedException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API DirectoryAlreadyInRegionException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::DIRECTORY_ALREADY_IN_REGION);
  return DirectoryAlreadyInRegionException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API InvalidLDAPSStatusException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::INVALID_L_D_A_P_S_STATUS);
  return InvalidLDAPSStatusException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API DirectoryUnavailableException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::DIRECTORY_UNAVAILABLE);
  return DirectoryUnavailableException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API UserDoesNotExistException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::USER_DOES_NOT_EXIST);
  return UserDoesNotExistException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API EntityDoesNotExistException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::ENTITY_DOES_NOT_EXIST);
  return EntityDoesNotExistException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API AuthenticationFailedException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::AUTHENTICATION_FAILED);
  return AuthenticationFailedException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API InsufficientPermissionsException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::INSUFFICIENT_PERMISSIONS);
  return InsufficientPermissionsException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API InvalidNextTokenException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::INVALID_NEXT_TOKEN);
  return InvalidNextTokenException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API DirectoryInDesiredStateException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::DIRECTORY_IN_DESIRED_STATE);
  return DirectoryInDesiredStateException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API InvalidParameterException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::INVALID_PARAMETER);
  return InvalidParameterException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API TagLimitExceededException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::TAG_LIMIT_EXCEEDED);
  return TagLimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API InvalidCertificateException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::INVALID_CERTIFICATE);
  return InvalidCertificateException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API AccessDeniedException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API UnsupportedOperationException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::UNSUPPORTED_OPERATION);
  return UnsupportedOperationException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API CertificateDoesNotExistException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::CERTIFICATE_DOES_NOT_EXIST);
  return CertificateDoesNotExistException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API CertificateAlreadyExistsException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::CERTIFICATE_ALREADY_EXISTS);
  return CertificateAlreadyExistsException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API InvalidPasswordException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::INVALID_PASSWORD);
  return InvalidPasswordException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API IncompatibleSettingsException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::INCOMPATIBLE_SETTINGS);
  return IncompatibleSettingsException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API DirectoryLimitExceededException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::DIRECTORY_LIMIT_EXCEEDED);
  return DirectoryLimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API DirectoryNotSharedException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::DIRECTORY_NOT_SHARED);
  return DirectoryNotSharedException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API CertificateInUseException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::CERTIFICATE_IN_USE);
  return CertificateInUseException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API ShareLimitExceededException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::SHARE_LIMIT_EXCEEDED);
  return ShareLimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API DirectoryDoesNotExistException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::DIRECTORY_DOES_NOT_EXIST);
  return DirectoryDoesNotExistException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API NoAvailableCertificateException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::NO_AVAILABLE_CERTIFICATE);
  return NoAvailableCertificateException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API InvalidClientAuthStatusException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::INVALID_CLIENT_AUTH_STATUS);
  return InvalidClientAuthStatusException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API OrganizationsException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::ORGANIZATIONS);
  return OrganizationsException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API InvalidTargetException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::INVALID_TARGET);
  return InvalidTargetException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API DomainControllerLimitExceededException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::DOMAIN_CONTROLLER_LIMIT_EXCEEDED);
  return DomainControllerLimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API RegionLimitExceededException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::REGION_LIMIT_EXCEEDED);
  return RegionLimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API ServiceException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::SERVICE);
  return ServiceException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API IpRouteLimitExceededException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::IP_ROUTE_LIMIT_EXCEEDED);
  return IpRouteLimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API SnapshotLimitExceededException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::SNAPSHOT_LIMIT_EXCEEDED);
  return SnapshotLimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICE_API CertificateLimitExceededException DirectoryServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceErrors::CERTIFICATE_LIMIT_EXCEEDED);
  return CertificateLimitExceededException(this->GetJsonPayload().View());
}

namespace DirectoryServiceErrorMapper
{

static constexpr uint32_t CLIENT_HASH = ConstExprHashingUtils::HashString("ClientException");
static constexpr uint32_t ENTITY_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("EntityAlreadyExistsException");
static constexpr uint32_t UNSUPPORTED_SETTINGS_HASH = ConstExprHashingUtils::HashString("UnsupportedSettingsException");
static constexpr uint32_t DIRECTORY_ALREADY_SHARED_HASH = ConstExprHashingUtils::HashString("DirectoryAlreadySharedException");
static constexpr uint32_t DIRECTORY_ALREADY_IN_REGION_HASH = ConstExprHashingUtils::HashString("DirectoryAlreadyInRegionException");
static constexpr uint32_t INVALID_L_D_A_P_S_STATUS_HASH = ConstExprHashingUtils::HashString("InvalidLDAPSStatusException");
static constexpr uint32_t DIRECTORY_UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("DirectoryUnavailableException");
static constexpr uint32_t USER_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("UserDoesNotExistException");
static constexpr uint32_t ENTITY_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("EntityDoesNotExistException");
static constexpr uint32_t AUTHENTICATION_FAILED_HASH = ConstExprHashingUtils::HashString("AuthenticationFailedException");
static constexpr uint32_t INSUFFICIENT_PERMISSIONS_HASH = ConstExprHashingUtils::HashString("InsufficientPermissionsException");
static constexpr uint32_t INVALID_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidNextTokenException");
static constexpr uint32_t DIRECTORY_IN_DESIRED_STATE_HASH = ConstExprHashingUtils::HashString("DirectoryInDesiredStateException");
static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidParameterException");
static constexpr uint32_t TAG_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("TagLimitExceededException");
static constexpr uint32_t INVALID_CERTIFICATE_HASH = ConstExprHashingUtils::HashString("InvalidCertificateException");
static constexpr uint32_t UNSUPPORTED_OPERATION_HASH = ConstExprHashingUtils::HashString("UnsupportedOperationException");
static constexpr uint32_t CERTIFICATE_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("CertificateDoesNotExistException");
static constexpr uint32_t CERTIFICATE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("CertificateAlreadyExistsException");
static constexpr uint32_t INVALID_PASSWORD_HASH = ConstExprHashingUtils::HashString("InvalidPasswordException");
static constexpr uint32_t INCOMPATIBLE_SETTINGS_HASH = ConstExprHashingUtils::HashString("IncompatibleSettingsException");
static constexpr uint32_t DIRECTORY_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("DirectoryLimitExceededException");
static constexpr uint32_t DIRECTORY_NOT_SHARED_HASH = ConstExprHashingUtils::HashString("DirectoryNotSharedException");
static constexpr uint32_t CERTIFICATE_IN_USE_HASH = ConstExprHashingUtils::HashString("CertificateInUseException");
static constexpr uint32_t SHARE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ShareLimitExceededException");
static constexpr uint32_t DIRECTORY_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("DirectoryDoesNotExistException");
static constexpr uint32_t NO_AVAILABLE_CERTIFICATE_HASH = ConstExprHashingUtils::HashString("NoAvailableCertificateException");
static constexpr uint32_t INVALID_CLIENT_AUTH_STATUS_HASH = ConstExprHashingUtils::HashString("InvalidClientAuthStatusException");
static constexpr uint32_t ORGANIZATIONS_HASH = ConstExprHashingUtils::HashString("OrganizationsException");
static constexpr uint32_t INVALID_TARGET_HASH = ConstExprHashingUtils::HashString("InvalidTargetException");
static constexpr uint32_t DOMAIN_CONTROLLER_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("DomainControllerLimitExceededException");
static constexpr uint32_t REGION_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("RegionLimitExceededException");
static constexpr uint32_t SERVICE_HASH = ConstExprHashingUtils::HashString("ServiceException");
static constexpr uint32_t IP_ROUTE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("IpRouteLimitExceededException");
static constexpr uint32_t SNAPSHOT_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("SnapshotLimitExceededException");
static constexpr uint32_t CERTIFICATE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("CertificateLimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::CLIENT), false);
  }
  else if (hashCode == ENTITY_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::ENTITY_ALREADY_EXISTS), false);
  }
  else if (hashCode == UNSUPPORTED_SETTINGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::UNSUPPORTED_SETTINGS), false);
  }
  else if (hashCode == DIRECTORY_ALREADY_SHARED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::DIRECTORY_ALREADY_SHARED), false);
  }
  else if (hashCode == DIRECTORY_ALREADY_IN_REGION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::DIRECTORY_ALREADY_IN_REGION), false);
  }
  else if (hashCode == INVALID_L_D_A_P_S_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::INVALID_L_D_A_P_S_STATUS), false);
  }
  else if (hashCode == DIRECTORY_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::DIRECTORY_UNAVAILABLE), false);
  }
  else if (hashCode == USER_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::USER_DOES_NOT_EXIST), false);
  }
  else if (hashCode == ENTITY_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::ENTITY_DOES_NOT_EXIST), false);
  }
  else if (hashCode == AUTHENTICATION_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::AUTHENTICATION_FAILED), false);
  }
  else if (hashCode == INSUFFICIENT_PERMISSIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::INSUFFICIENT_PERMISSIONS), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == DIRECTORY_IN_DESIRED_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::DIRECTORY_IN_DESIRED_STATE), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == TAG_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::TAG_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_CERTIFICATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::INVALID_CERTIFICATE), false);
  }
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::UNSUPPORTED_OPERATION), false);
  }
  else if (hashCode == CERTIFICATE_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::CERTIFICATE_DOES_NOT_EXIST), false);
  }
  else if (hashCode == CERTIFICATE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::CERTIFICATE_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_PASSWORD_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::INVALID_PASSWORD), false);
  }
  else if (hashCode == INCOMPATIBLE_SETTINGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::INCOMPATIBLE_SETTINGS), false);
  }
  else if (hashCode == DIRECTORY_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::DIRECTORY_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == DIRECTORY_NOT_SHARED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::DIRECTORY_NOT_SHARED), false);
  }
  else if (hashCode == CERTIFICATE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::CERTIFICATE_IN_USE), false);
  }
  else if (hashCode == SHARE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::SHARE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == DIRECTORY_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::DIRECTORY_DOES_NOT_EXIST), false);
  }
  else if (hashCode == NO_AVAILABLE_CERTIFICATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::NO_AVAILABLE_CERTIFICATE), false);
  }
  else if (hashCode == INVALID_CLIENT_AUTH_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::INVALID_CLIENT_AUTH_STATUS), false);
  }
  else if (hashCode == ORGANIZATIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::ORGANIZATIONS), false);
  }
  else if (hashCode == INVALID_TARGET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::INVALID_TARGET), false);
  }
  else if (hashCode == DOMAIN_CONTROLLER_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::DOMAIN_CONTROLLER_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == REGION_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::REGION_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::SERVICE), false);
  }
  else if (hashCode == IP_ROUTE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::IP_ROUTE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == SNAPSHOT_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::SNAPSHOT_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == CERTIFICATE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceErrors::CERTIFICATE_LIMIT_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DirectoryServiceErrorMapper
} // namespace DirectoryService
} // namespace Aws
