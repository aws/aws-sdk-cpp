/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/cognito-sync/CognitoSyncErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CognitoSync;

namespace Aws
{
namespace CognitoSync
{
namespace CognitoSyncErrorMapper
{

static constexpr uint32_t INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("InternalErrorException");
static constexpr uint32_t DUPLICATE_REQUEST_HASH = ConstExprHashingUtils::HashString("DuplicateRequestException");
static constexpr uint32_t ALREADY_STREAMED_HASH = ConstExprHashingUtils::HashString("AlreadyStreamedException");
static constexpr uint32_t INVALID_LAMBDA_FUNCTION_OUTPUT_HASH = ConstExprHashingUtils::HashString("InvalidLambdaFunctionOutputException");
static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidParameterException");
static constexpr uint32_t INVALID_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("InvalidConfigurationException");
static constexpr uint32_t NOT_AUTHORIZED_HASH = ConstExprHashingUtils::HashString("NotAuthorizedException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t RESOURCE_CONFLICT_HASH = ConstExprHashingUtils::HashString("ResourceConflictException");
static constexpr uint32_t CONCURRENT_MODIFICATION_HASH = ConstExprHashingUtils::HashString("ConcurrentModificationException");
static constexpr uint32_t TOO_MANY_REQUESTS_HASH = ConstExprHashingUtils::HashString("TooManyRequestsException");
static constexpr uint32_t LAMBDA_THROTTLED_HASH = ConstExprHashingUtils::HashString("LambdaThrottledException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoSyncErrors::INTERNAL_ERROR), false);
  }
  else if (hashCode == DUPLICATE_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoSyncErrors::DUPLICATE_REQUEST), false);
  }
  else if (hashCode == ALREADY_STREAMED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoSyncErrors::ALREADY_STREAMED), false);
  }
  else if (hashCode == INVALID_LAMBDA_FUNCTION_OUTPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoSyncErrors::INVALID_LAMBDA_FUNCTION_OUTPUT), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoSyncErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == INVALID_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoSyncErrors::INVALID_CONFIGURATION), false);
  }
  else if (hashCode == NOT_AUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoSyncErrors::NOT_AUTHORIZED), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoSyncErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == RESOURCE_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoSyncErrors::RESOURCE_CONFLICT), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoSyncErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoSyncErrors::TOO_MANY_REQUESTS), true);
  }
  else if (hashCode == LAMBDA_THROTTLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoSyncErrors::LAMBDA_THROTTLED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CognitoSyncErrorMapper
} // namespace CognitoSync
} // namespace Aws
