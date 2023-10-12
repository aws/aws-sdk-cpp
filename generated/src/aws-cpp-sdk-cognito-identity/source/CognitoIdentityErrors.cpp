/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/cognito-identity/CognitoIdentityErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CognitoIdentity;

namespace Aws
{
namespace CognitoIdentity
{
namespace CognitoIdentityErrorMapper
{

static constexpr uint32_t INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("InternalErrorException");
static constexpr uint32_t EXTERNAL_SERVICE_HASH = ConstExprHashingUtils::HashString("ExternalServiceException");
static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidParameterException");
static constexpr uint32_t NOT_AUTHORIZED_HASH = ConstExprHashingUtils::HashString("NotAuthorizedException");
static constexpr uint32_t RESOURCE_CONFLICT_HASH = ConstExprHashingUtils::HashString("ResourceConflictException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t TOO_MANY_REQUESTS_HASH = ConstExprHashingUtils::HashString("TooManyRequestsException");
static constexpr uint32_t CONCURRENT_MODIFICATION_HASH = ConstExprHashingUtils::HashString("ConcurrentModificationException");
static constexpr uint32_t INVALID_IDENTITY_POOL_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("InvalidIdentityPoolConfigurationException");
static constexpr uint32_t DEVELOPER_USER_ALREADY_REGISTERED_HASH = ConstExprHashingUtils::HashString("DeveloperUserAlreadyRegisteredException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityErrors::INTERNAL_ERROR), false);
  }
  else if (hashCode == EXTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityErrors::EXTERNAL_SERVICE), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == NOT_AUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityErrors::NOT_AUTHORIZED), false);
  }
  else if (hashCode == RESOURCE_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityErrors::RESOURCE_CONFLICT), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityErrors::TOO_MANY_REQUESTS), true);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == INVALID_IDENTITY_POOL_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityErrors::INVALID_IDENTITY_POOL_CONFIGURATION), false);
  }
  else if (hashCode == DEVELOPER_USER_ALREADY_REGISTERED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoIdentityErrors::DEVELOPER_USER_ALREADY_REGISTERED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CognitoIdentityErrorMapper
} // namespace CognitoIdentity
} // namespace Aws
