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

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t INVALID_GAME_SESSION_STATUS_HASH = ConstExprHashingUtils::HashString("InvalidGameSessionStatusException");
static constexpr uint32_t IDEMPOTENT_PARAMETER_MISMATCH_HASH = ConstExprHashingUtils::HashString("IdempotentParameterMismatchException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t FLEET_CAPACITY_EXCEEDED_HASH = ConstExprHashingUtils::HashString("FleetCapacityExceededException");
static constexpr uint32_t INTERNAL_SERVICE_HASH = ConstExprHashingUtils::HashString("InternalServiceException");
static constexpr uint32_t UNSUPPORTED_REGION_HASH = ConstExprHashingUtils::HashString("UnsupportedRegionException");
static constexpr uint32_t TAGGING_FAILED_HASH = ConstExprHashingUtils::HashString("TaggingFailedException");
static constexpr uint32_t NOT_FOUND_HASH = ConstExprHashingUtils::HashString("NotFoundException");
static constexpr uint32_t OUT_OF_CAPACITY_HASH = ConstExprHashingUtils::HashString("OutOfCapacityException");
static constexpr uint32_t UNAUTHORIZED_HASH = ConstExprHashingUtils::HashString("UnauthorizedException");
static constexpr uint32_t INVALID_FLEET_STATUS_HASH = ConstExprHashingUtils::HashString("InvalidFleetStatusException");
static constexpr uint32_t GAME_SESSION_FULL_HASH = ConstExprHashingUtils::HashString("GameSessionFullException");
static constexpr uint32_t INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");
static constexpr uint32_t TERMINAL_ROUTING_STRATEGY_HASH = ConstExprHashingUtils::HashString("TerminalRoutingStrategyException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::CONFLICT), false);
  }
  else if (hashCode == INVALID_GAME_SESSION_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::INVALID_GAME_SESSION_STATUS), false);
  }
  else if (hashCode == IDEMPOTENT_PARAMETER_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::IDEMPOTENT_PARAMETER_MISMATCH), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == FLEET_CAPACITY_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::FLEET_CAPACITY_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::INTERNAL_SERVICE), false);
  }
  else if (hashCode == UNSUPPORTED_REGION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::UNSUPPORTED_REGION), false);
  }
  else if (hashCode == TAGGING_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::TAGGING_FAILED), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::NOT_FOUND), false);
  }
  else if (hashCode == OUT_OF_CAPACITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::OUT_OF_CAPACITY), false);
  }
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::UNAUTHORIZED), false);
  }
  else if (hashCode == INVALID_FLEET_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::INVALID_FLEET_STATUS), false);
  }
  else if (hashCode == GAME_SESSION_FULL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::GAME_SESSION_FULL), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::INVALID_REQUEST), false);
  }
  else if (hashCode == TERMINAL_ROUTING_STRATEGY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GameLiftErrors::TERMINAL_ROUTING_STRATEGY), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace GameLiftErrorMapper
} // namespace GameLift
} // namespace Aws
