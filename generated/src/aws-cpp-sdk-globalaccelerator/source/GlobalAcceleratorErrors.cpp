/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/globalaccelerator/GlobalAcceleratorErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::GlobalAccelerator;

namespace Aws
{
namespace GlobalAccelerator
{
namespace GlobalAcceleratorErrorMapper
{

static constexpr uint32_t ENDPOINT_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("EndpointAlreadyExistsException");
static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t ACCELERATOR_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("AcceleratorNotFoundException");
static constexpr uint32_t INCORRECT_CIDR_STATE_HASH = ConstExprHashingUtils::HashString("IncorrectCidrStateException");
static constexpr uint32_t INVALID_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidNextTokenException");
static constexpr uint32_t TRANSACTION_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("TransactionInProgressException");
static constexpr uint32_t BYOIP_CIDR_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ByoipCidrNotFoundException");
static constexpr uint32_t LISTENER_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ListenerNotFoundException");
static constexpr uint32_t ASSOCIATED_LISTENER_FOUND_HASH = ConstExprHashingUtils::HashString("AssociatedListenerFoundException");
static constexpr uint32_t ENDPOINT_GROUP_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("EndpointGroupNotFoundException");
static constexpr uint32_t INVALID_PORT_RANGE_HASH = ConstExprHashingUtils::HashString("InvalidPortRangeException");
static constexpr uint32_t ENDPOINT_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("EndpointNotFoundException");
static constexpr uint32_t INTERNAL_SERVICE_ERROR_HASH = ConstExprHashingUtils::HashString("InternalServiceErrorException");
static constexpr uint32_t ENDPOINT_GROUP_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("EndpointGroupAlreadyExistsException");
static constexpr uint32_t INVALID_ARGUMENT_HASH = ConstExprHashingUtils::HashString("InvalidArgumentException");
static constexpr uint32_t ASSOCIATED_ENDPOINT_GROUP_FOUND_HASH = ConstExprHashingUtils::HashString("AssociatedEndpointGroupFoundException");
static constexpr uint32_t ACCELERATOR_NOT_DISABLED_HASH = ConstExprHashingUtils::HashString("AcceleratorNotDisabledException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == ENDPOINT_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::ENDPOINT_ALREADY_EXISTS), false);
  }
  else if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::CONFLICT), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == ACCELERATOR_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::ACCELERATOR_NOT_FOUND), false);
  }
  else if (hashCode == INCORRECT_CIDR_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::INCORRECT_CIDR_STATE), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == TRANSACTION_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::TRANSACTION_IN_PROGRESS), true);
  }
  else if (hashCode == BYOIP_CIDR_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::BYOIP_CIDR_NOT_FOUND), false);
  }
  else if (hashCode == LISTENER_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::LISTENER_NOT_FOUND), false);
  }
  else if (hashCode == ASSOCIATED_LISTENER_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::ASSOCIATED_LISTENER_FOUND), false);
  }
  else if (hashCode == ENDPOINT_GROUP_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::ENDPOINT_GROUP_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_PORT_RANGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::INVALID_PORT_RANGE), false);
  }
  else if (hashCode == ENDPOINT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::ENDPOINT_NOT_FOUND), false);
  }
  else if (hashCode == INTERNAL_SERVICE_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::INTERNAL_SERVICE_ERROR), false);
  }
  else if (hashCode == ENDPOINT_GROUP_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::ENDPOINT_GROUP_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::INVALID_ARGUMENT), false);
  }
  else if (hashCode == ASSOCIATED_ENDPOINT_GROUP_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::ASSOCIATED_ENDPOINT_GROUP_FOUND), false);
  }
  else if (hashCode == ACCELERATOR_NOT_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::ACCELERATOR_NOT_DISABLED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace GlobalAcceleratorErrorMapper
} // namespace GlobalAccelerator
} // namespace Aws
