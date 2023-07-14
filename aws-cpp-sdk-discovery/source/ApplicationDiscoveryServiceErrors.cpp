﻿/**
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

static const int OPERATION_NOT_PERMITTED_HASH = HashingUtils::HashString("OperationNotPermittedException");
static const int CONFLICT_ERROR_HASH = HashingUtils::HashString("ConflictErrorException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int AUTHORIZATION_ERROR_HASH = HashingUtils::HashString("AuthorizationErrorException");
static const int HOME_REGION_NOT_SET_HASH = HashingUtils::HashString("HomeRegionNotSetException");
static const int SERVER_INTERNAL_ERROR_HASH = HashingUtils::HashString("ServerInternalErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

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
