/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/alexaforbusiness/AlexaForBusinessErrors.h>
#include <aws/alexaforbusiness/model/ResourceInUseException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::AlexaForBusiness;
using namespace Aws::AlexaForBusiness::Model;

namespace Aws
{
namespace AlexaForBusiness
{
template<> AWS_ALEXAFORBUSINESS_API ResourceInUseException AlexaForBusinessError::GetModeledError()
{
  assert(this->GetErrorType() == AlexaForBusinessErrors::RESOURCE_IN_USE);
  return ResourceInUseException(this->GetJsonPayload().View());
}

namespace AlexaForBusinessErrorMapper
{

static const int INVALID_SECRETS_MANAGER_RESOURCE_HASH = HashingUtils::HashString("InvalidSecretsManagerResourceException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int NAME_IN_USE_HASH = HashingUtils::HashString("NameInUseException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int ALREADY_EXISTS_HASH = HashingUtils::HashString("AlreadyExistsException");
static const int SKILL_NOT_LINKED_HASH = HashingUtils::HashString("SkillNotLinkedException");
static const int INVALID_USER_STATUS_HASH = HashingUtils::HashString("InvalidUserStatusException");
static const int DEVICE_NOT_REGISTERED_HASH = HashingUtils::HashString("DeviceNotRegisteredException");
static const int INVALID_CERTIFICATE_AUTHORITY_HASH = HashingUtils::HashString("InvalidCertificateAuthorityException");
static const int INVALID_DEVICE_HASH = HashingUtils::HashString("InvalidDeviceException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int INVALID_SERVICE_LINKED_ROLE_STATE_HASH = HashingUtils::HashString("InvalidServiceLinkedRoleStateException");
static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UnauthorizedException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int RESOURCE_ASSOCIATED_HASH = HashingUtils::HashString("ResourceAssociatedException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_SECRETS_MANAGER_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AlexaForBusinessErrors::INVALID_SECRETS_MANAGER_RESOURCE), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AlexaForBusinessErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == NAME_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AlexaForBusinessErrors::NAME_IN_USE), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AlexaForBusinessErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AlexaForBusinessErrors::ALREADY_EXISTS), false);
  }
  else if (hashCode == SKILL_NOT_LINKED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AlexaForBusinessErrors::SKILL_NOT_LINKED), false);
  }
  else if (hashCode == INVALID_USER_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AlexaForBusinessErrors::INVALID_USER_STATUS), false);
  }
  else if (hashCode == DEVICE_NOT_REGISTERED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AlexaForBusinessErrors::DEVICE_NOT_REGISTERED), false);
  }
  else if (hashCode == INVALID_CERTIFICATE_AUTHORITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AlexaForBusinessErrors::INVALID_CERTIFICATE_AUTHORITY), false);
  }
  else if (hashCode == INVALID_DEVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AlexaForBusinessErrors::INVALID_DEVICE), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AlexaForBusinessErrors::NOT_FOUND), false);
  }
  else if (hashCode == INVALID_SERVICE_LINKED_ROLE_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AlexaForBusinessErrors::INVALID_SERVICE_LINKED_ROLE_STATE), false);
  }
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AlexaForBusinessErrors::UNAUTHORIZED), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AlexaForBusinessErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == RESOURCE_ASSOCIATED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AlexaForBusinessErrors::RESOURCE_ASSOCIATED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace AlexaForBusinessErrorMapper
} // namespace AlexaForBusiness
} // namespace Aws
