/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/cloudcontrol/CloudControlApiErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CloudControlApi;

namespace Aws
{
namespace CloudControlApi
{
namespace CloudControlApiErrorMapper
{

static const int HANDLER_INTERNAL_FAILURE_HASH = HashingUtils::HashString("HandlerInternalFailureException");
static const int NETWORK_FAILURE_HASH = HashingUtils::HashString("NetworkFailureException");
static const int HANDLER_FAILURE_HASH = HashingUtils::HashString("HandlerFailureException");
static const int GENERAL_SERVICE_HASH = HashingUtils::HashString("GeneralServiceException");
static const int CONCURRENT_OPERATION_HASH = HashingUtils::HashString("ConcurrentOperationException");
static const int PRIVATE_TYPE_HASH = HashingUtils::HashString("PrivateTypeException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int ALREADY_EXISTS_HASH = HashingUtils::HashString("AlreadyExistsException");
static const int SERVICE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ServiceLimitExceededException");
static const int NOT_UPDATABLE_HASH = HashingUtils::HashString("NotUpdatableException");
static const int TYPE_NOT_FOUND_HASH = HashingUtils::HashString("TypeNotFoundException");
static const int UNSUPPORTED_ACTION_HASH = HashingUtils::HashString("UnsupportedActionException");
static const int NOT_STABILIZED_HASH = HashingUtils::HashString("NotStabilizedException");
static const int RESOURCE_CONFLICT_HASH = HashingUtils::HashString("ResourceConflictException");
static const int INVALID_CREDENTIALS_HASH = HashingUtils::HashString("InvalidCredentialsException");
static const int SERVICE_INTERNAL_ERROR_HASH = HashingUtils::HashString("ServiceInternalErrorException");
static const int CLIENT_TOKEN_CONFLICT_HASH = HashingUtils::HashString("ClientTokenConflictException");
static const int REQUEST_TOKEN_NOT_FOUND_HASH = HashingUtils::HashString("RequestTokenNotFoundException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == HANDLER_INTERNAL_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudControlApiErrors::HANDLER_INTERNAL_FAILURE), false);
  }
  else if (hashCode == NETWORK_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudControlApiErrors::NETWORK_FAILURE), false);
  }
  else if (hashCode == HANDLER_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudControlApiErrors::HANDLER_FAILURE), false);
  }
  else if (hashCode == GENERAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudControlApiErrors::GENERAL_SERVICE), false);
  }
  else if (hashCode == CONCURRENT_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudControlApiErrors::CONCURRENT_OPERATION), false);
  }
  else if (hashCode == PRIVATE_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudControlApiErrors::PRIVATE_TYPE), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudControlApiErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudControlApiErrors::ALREADY_EXISTS), false);
  }
  else if (hashCode == SERVICE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudControlApiErrors::SERVICE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == NOT_UPDATABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudControlApiErrors::NOT_UPDATABLE), false);
  }
  else if (hashCode == TYPE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudControlApiErrors::TYPE_NOT_FOUND), false);
  }
  else if (hashCode == UNSUPPORTED_ACTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudControlApiErrors::UNSUPPORTED_ACTION), false);
  }
  else if (hashCode == NOT_STABILIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudControlApiErrors::NOT_STABILIZED), false);
  }
  else if (hashCode == RESOURCE_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudControlApiErrors::RESOURCE_CONFLICT), false);
  }
  else if (hashCode == INVALID_CREDENTIALS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudControlApiErrors::INVALID_CREDENTIALS), false);
  }
  else if (hashCode == SERVICE_INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudControlApiErrors::SERVICE_INTERNAL_ERROR), false);
  }
  else if (hashCode == CLIENT_TOKEN_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudControlApiErrors::CLIENT_TOKEN_CONFLICT), false);
  }
  else if (hashCode == REQUEST_TOKEN_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudControlApiErrors::REQUEST_TOKEN_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudControlApiErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudControlApiErrorMapper
} // namespace CloudControlApi
} // namespace Aws
