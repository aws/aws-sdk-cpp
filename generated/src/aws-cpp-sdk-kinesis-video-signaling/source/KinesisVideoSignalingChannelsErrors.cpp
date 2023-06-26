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

static const int SESSION_EXPIRED_HASH = HashingUtils::HashString("SessionExpiredException");
static const int NOT_AUTHORIZED_HASH = HashingUtils::HashString("NotAuthorizedException");
static const int INVALID_CLIENT_HASH = HashingUtils::HashString("InvalidClientException");
static const int CLIENT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ClientLimitExceededException");
static const int INVALID_ARGUMENT_HASH = HashingUtils::HashString("InvalidArgumentException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

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
