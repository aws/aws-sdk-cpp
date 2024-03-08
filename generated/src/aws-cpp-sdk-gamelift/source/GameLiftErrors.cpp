/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/gamelift/GameLiftErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::GameLift;

namespace Aws
{
namespace GameLift
{
namespace GameLiftErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INVALID_GAME_SESSION_STATUS_HASH = HashingUtils::HashString("InvalidGameSessionStatusException");
static const int IDEMPOTENT_PARAMETER_MISMATCH_HASH = HashingUtils::HashString("IdempotentParameterMismatchException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int FLEET_CAPACITY_EXCEEDED_HASH = HashingUtils::HashString("FleetCapacityExceededException");
static const int INTERNAL_SERVICE_HASH = HashingUtils::HashString("InternalServiceException");
static const int UNSUPPORTED_REGION_HASH = HashingUtils::HashString("UnsupportedRegionException");
static const int TAGGING_FAILED_HASH = HashingUtils::HashString("TaggingFailedException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int OUT_OF_CAPACITY_HASH = HashingUtils::HashString("OutOfCapacityException");
static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UnauthorizedException");
static const int INVALID_FLEET_STATUS_HASH = HashingUtils::HashString("InvalidFleetStatusException");
static const int GAME_SESSION_FULL_HASH = HashingUtils::HashString("GameSessionFullException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");
static const int TERMINAL_ROUTING_STRATEGY_HASH = HashingUtils::HashString("TerminalRoutingStrategyException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_GAME_SESSION_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::INVALID_GAME_SESSION_STATUS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == IDEMPOTENT_PARAMETER_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::IDEMPOTENT_PARAMETER_MISMATCH), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == FLEET_CAPACITY_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::FLEET_CAPACITY_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::INTERNAL_SERVICE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNSUPPORTED_REGION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::UNSUPPORTED_REGION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TAGGING_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::TAGGING_FAILED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == OUT_OF_CAPACITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::OUT_OF_CAPACITY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::UNAUTHORIZED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_FLEET_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::INVALID_FLEET_STATUS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == GAME_SESSION_FULL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::GAME_SESSION_FULL), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::INVALID_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TERMINAL_ROUTING_STRATEGY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::TERMINAL_ROUTING_STRATEGY), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace GameLiftErrorMapper
} // namespace GameLift
} // namespace Aws
