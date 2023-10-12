/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesisvideo/KinesisVideoErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::KinesisVideo;

namespace Aws
{
namespace KinesisVideo
{
namespace KinesisVideoErrorMapper
{

static constexpr uint32_t VERSION_MISMATCH_HASH = ConstExprHashingUtils::HashString("VersionMismatchException");
static constexpr uint32_t INVALID_RESOURCE_FORMAT_HASH = ConstExprHashingUtils::HashString("InvalidResourceFormatException");
static constexpr uint32_t ACCOUNT_CHANNEL_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("AccountChannelLimitExceededException");
static constexpr uint32_t DEVICE_STREAM_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("DeviceStreamLimitExceededException");
static constexpr uint32_t INVALID_DEVICE_HASH = ConstExprHashingUtils::HashString("InvalidDeviceException");
static constexpr uint32_t TAGS_PER_RESOURCE_EXCEEDED_LIMIT_HASH = ConstExprHashingUtils::HashString("TagsPerResourceExceededLimitException");
static constexpr uint32_t ACCOUNT_STREAM_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("AccountStreamLimitExceededException");
static constexpr uint32_t NO_DATA_RETENTION_HASH = ConstExprHashingUtils::HashString("NoDataRetentionException");
static constexpr uint32_t NOT_AUTHORIZED_HASH = ConstExprHashingUtils::HashString("NotAuthorizedException");
static constexpr uint32_t RESOURCE_IN_USE_HASH = ConstExprHashingUtils::HashString("ResourceInUseException");
static constexpr uint32_t STREAM_EDGE_CONFIGURATION_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("StreamEdgeConfigurationNotFoundException");
static constexpr uint32_t INVALID_ARGUMENT_HASH = ConstExprHashingUtils::HashString("InvalidArgumentException");
static constexpr uint32_t CLIENT_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ClientLimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == VERSION_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoErrors::VERSION_MISMATCH), false);
  }
  else if (hashCode == INVALID_RESOURCE_FORMAT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoErrors::INVALID_RESOURCE_FORMAT), false);
  }
  else if (hashCode == ACCOUNT_CHANNEL_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoErrors::ACCOUNT_CHANNEL_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == DEVICE_STREAM_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoErrors::DEVICE_STREAM_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_DEVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoErrors::INVALID_DEVICE), false);
  }
  else if (hashCode == TAGS_PER_RESOURCE_EXCEEDED_LIMIT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoErrors::TAGS_PER_RESOURCE_EXCEEDED_LIMIT), false);
  }
  else if (hashCode == ACCOUNT_STREAM_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoErrors::ACCOUNT_STREAM_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == NO_DATA_RETENTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoErrors::NO_DATA_RETENTION), false);
  }
  else if (hashCode == NOT_AUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoErrors::NOT_AUTHORIZED), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == STREAM_EDGE_CONFIGURATION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoErrors::STREAM_EDGE_CONFIGURATION_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoErrors::INVALID_ARGUMENT), false);
  }
  else if (hashCode == CLIENT_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoErrors::CLIENT_LIMIT_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace KinesisVideoErrorMapper
} // namespace KinesisVideo
} // namespace Aws
