/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/discovery/ApplicationDiscoveryServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ApplicationDiscoveryService;

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace ApplicationDiscoveryServiceErrorMapper
{

static constexpr uint32_t OPERATION_NOT_PERMITTED_HASH = ConstExprHashingUtils::HashString("OperationNotPermittedException");
static constexpr uint32_t CONFLICT_ERROR_HASH = ConstExprHashingUtils::HashString("ConflictErrorException");
static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidParameterException");
static constexpr uint32_t RESOURCE_IN_USE_HASH = ConstExprHashingUtils::HashString("ResourceInUseException");
static constexpr uint32_t AUTHORIZATION_ERROR_HASH = ConstExprHashingUtils::HashString("AuthorizationErrorException");
static constexpr uint32_t HOME_REGION_NOT_SET_HASH = ConstExprHashingUtils::HashString("HomeRegionNotSetException");
static constexpr uint32_t SERVER_INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("ServerInternalErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == OPERATION_NOT_PERMITTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationDiscoveryServiceErrors::OPERATION_NOT_PERMITTED), false);
  }
  else if (hashCode == CONFLICT_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationDiscoveryServiceErrors::CONFLICT_ERROR), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationDiscoveryServiceErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationDiscoveryServiceErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == AUTHORIZATION_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationDiscoveryServiceErrors::AUTHORIZATION_ERROR), false);
  }
  else if (hashCode == HOME_REGION_NOT_SET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationDiscoveryServiceErrors::HOME_REGION_NOT_SET), false);
  }
  else if (hashCode == SERVER_INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationDiscoveryServiceErrors::SERVER_INTERNAL_ERROR), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ApplicationDiscoveryServiceErrorMapper
} // namespace ApplicationDiscoveryService
} // namespace Aws
