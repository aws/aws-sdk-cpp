/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::KinesisVideoSignalingChannels;

namespace Aws
{
namespace KinesisVideoSignalingChannels
{
namespace KinesisVideoSignalingChannelsErrorMapper
{

static constexpr uint32_t SESSION_EXPIRED_HASH = ConstExprHashingUtils::HashString("SessionExpiredException");
static constexpr uint32_t NOT_AUTHORIZED_HASH = ConstExprHashingUtils::HashString("NotAuthorizedException");
static constexpr uint32_t INVALID_CLIENT_HASH = ConstExprHashingUtils::HashString("InvalidClientException");
static constexpr uint32_t CLIENT_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ClientLimitExceededException");
static constexpr uint32_t INVALID_ARGUMENT_HASH = ConstExprHashingUtils::HashString("InvalidArgumentException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == SESSION_EXPIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoSignalingChannelsErrors::SESSION_EXPIRED), false);
  }
  else if (hashCode == NOT_AUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoSignalingChannelsErrors::NOT_AUTHORIZED), false);
  }
  else if (hashCode == INVALID_CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoSignalingChannelsErrors::INVALID_CLIENT), false);
  }
  else if (hashCode == CLIENT_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoSignalingChannelsErrors::CLIENT_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoSignalingChannelsErrors::INVALID_ARGUMENT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace KinesisVideoSignalingChannelsErrorMapper
} // namespace KinesisVideoSignalingChannels
} // namespace Aws
