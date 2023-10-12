/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorageErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::KinesisVideoWebRTCStorage;

namespace Aws
{
namespace KinesisVideoWebRTCStorage
{
namespace KinesisVideoWebRTCStorageErrorMapper
{

static constexpr uint32_t CLIENT_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ClientLimitExceededException");
static constexpr uint32_t INVALID_ARGUMENT_HASH = ConstExprHashingUtils::HashString("InvalidArgumentException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CLIENT_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoWebRTCStorageErrors::CLIENT_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoWebRTCStorageErrors::INVALID_ARGUMENT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace KinesisVideoWebRTCStorageErrorMapper
} // namespace KinesisVideoWebRTCStorage
} // namespace Aws
