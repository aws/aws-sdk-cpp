/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesis/KinesisErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Kinesis;

namespace Aws
{
namespace Kinesis
{
namespace KinesisErrorMapper
{

static constexpr uint32_t K_M_S_OPT_IN_REQUIRED_HASH = ConstExprHashingUtils::HashString("KMSOptInRequired");
static constexpr uint32_t K_M_S_DISABLED_HASH = ConstExprHashingUtils::HashString("KMSDisabledException");
static constexpr uint32_t K_M_S_ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("KMSAccessDeniedException");
static constexpr uint32_t K_M_S_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("KMSNotFoundException");
static constexpr uint32_t K_M_S_INVALID_STATE_HASH = ConstExprHashingUtils::HashString("KMSInvalidStateException");
static constexpr uint32_t EXPIRED_ITERATOR_HASH = ConstExprHashingUtils::HashString("ExpiredIteratorException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t K_M_S_THROTTLING_HASH = ConstExprHashingUtils::HashString("KMSThrottlingException");
static constexpr uint32_t RESOURCE_IN_USE_HASH = ConstExprHashingUtils::HashString("ResourceInUseException");
static constexpr uint32_t PROVISIONED_THROUGHPUT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ProvisionedThroughputExceededException");
static constexpr uint32_t INVALID_ARGUMENT_HASH = ConstExprHashingUtils::HashString("InvalidArgumentException");
static constexpr uint32_t EXPIRED_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("ExpiredNextTokenException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == K_M_S_OPT_IN_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisErrors::K_M_S_OPT_IN_REQUIRED), false);
  }
  else if (hashCode == K_M_S_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisErrors::K_M_S_DISABLED), false);
  }
  else if (hashCode == K_M_S_ACCESS_DENIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisErrors::K_M_S_ACCESS_DENIED), false);
  }
  else if (hashCode == K_M_S_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisErrors::K_M_S_NOT_FOUND), false);
  }
  else if (hashCode == K_M_S_INVALID_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisErrors::K_M_S_INVALID_STATE), false);
  }
  else if (hashCode == EXPIRED_ITERATOR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisErrors::EXPIRED_ITERATOR), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == K_M_S_THROTTLING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisErrors::K_M_S_THROTTLING), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == PROVISIONED_THROUGHPUT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisErrors::PROVISIONED_THROUGHPUT_EXCEEDED), true);
  }
  else if (hashCode == INVALID_ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisErrors::INVALID_ARGUMENT), false);
  }
  else if (hashCode == EXPIRED_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisErrors::EXPIRED_NEXT_TOKEN), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace KinesisErrorMapper
} // namespace Kinesis
} // namespace Aws
