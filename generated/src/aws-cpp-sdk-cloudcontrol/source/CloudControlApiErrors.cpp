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

static constexpr uint32_t HANDLER_INTERNAL_FAILURE_HASH = ConstExprHashingUtils::HashString("HandlerInternalFailureException");
static constexpr uint32_t NETWORK_FAILURE_HASH = ConstExprHashingUtils::HashString("NetworkFailureException");
static constexpr uint32_t HANDLER_FAILURE_HASH = ConstExprHashingUtils::HashString("HandlerFailureException");
static constexpr uint32_t GENERAL_SERVICE_HASH = ConstExprHashingUtils::HashString("GeneralServiceException");
static constexpr uint32_t CONCURRENT_OPERATION_HASH = ConstExprHashingUtils::HashString("ConcurrentOperationException");
static constexpr uint32_t PRIVATE_TYPE_HASH = ConstExprHashingUtils::HashString("PrivateTypeException");
static constexpr uint32_t CONCURRENT_MODIFICATION_HASH = ConstExprHashingUtils::HashString("ConcurrentModificationException");
static constexpr uint32_t ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("AlreadyExistsException");
static constexpr uint32_t SERVICE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceLimitExceededException");
static constexpr uint32_t NOT_UPDATABLE_HASH = ConstExprHashingUtils::HashString("NotUpdatableException");
static constexpr uint32_t TYPE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("TypeNotFoundException");
static constexpr uint32_t UNSUPPORTED_ACTION_HASH = ConstExprHashingUtils::HashString("UnsupportedActionException");
static constexpr uint32_t NOT_STABILIZED_HASH = ConstExprHashingUtils::HashString("NotStabilizedException");
static constexpr uint32_t RESOURCE_CONFLICT_HASH = ConstExprHashingUtils::HashString("ResourceConflictException");
static constexpr uint32_t INVALID_CREDENTIALS_HASH = ConstExprHashingUtils::HashString("InvalidCredentialsException");
static constexpr uint32_t SERVICE_INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("ServiceInternalErrorException");
static constexpr uint32_t CLIENT_TOKEN_CONFLICT_HASH = ConstExprHashingUtils::HashString("ClientTokenConflictException");
static constexpr uint32_t REQUEST_TOKEN_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("RequestTokenNotFoundException");
static constexpr uint32_t INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
