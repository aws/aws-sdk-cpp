/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::KinesisVideoArchivedMedia;

namespace Aws
{
namespace KinesisVideoArchivedMedia
{
namespace KinesisVideoArchivedMediaErrorMapper
{

static constexpr uint32_t INVALID_CODEC_PRIVATE_DATA_HASH = ConstExprHashingUtils::HashString("InvalidCodecPrivateDataException");
static constexpr uint32_t NO_DATA_RETENTION_HASH = ConstExprHashingUtils::HashString("NoDataRetentionException");
static constexpr uint32_t MISSING_CODEC_PRIVATE_DATA_HASH = ConstExprHashingUtils::HashString("MissingCodecPrivateDataException");
static constexpr uint32_t NOT_AUTHORIZED_HASH = ConstExprHashingUtils::HashString("NotAuthorizedException");
static constexpr uint32_t UNSUPPORTED_STREAM_MEDIA_TYPE_HASH = ConstExprHashingUtils::HashString("UnsupportedStreamMediaTypeException");
static constexpr uint32_t INVALID_ARGUMENT_HASH = ConstExprHashingUtils::HashString("InvalidArgumentException");
static constexpr uint32_t CLIENT_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ClientLimitExceededException");
static constexpr uint32_t INVALID_MEDIA_FRAME_HASH = ConstExprHashingUtils::HashString("InvalidMediaFrameException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_CODEC_PRIVATE_DATA_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoArchivedMediaErrors::INVALID_CODEC_PRIVATE_DATA), false);
  }
  else if (hashCode == NO_DATA_RETENTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoArchivedMediaErrors::NO_DATA_RETENTION), false);
  }
  else if (hashCode == MISSING_CODEC_PRIVATE_DATA_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoArchivedMediaErrors::MISSING_CODEC_PRIVATE_DATA), false);
  }
  else if (hashCode == NOT_AUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoArchivedMediaErrors::NOT_AUTHORIZED), false);
  }
  else if (hashCode == UNSUPPORTED_STREAM_MEDIA_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoArchivedMediaErrors::UNSUPPORTED_STREAM_MEDIA_TYPE), false);
  }
  else if (hashCode == INVALID_ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoArchivedMediaErrors::INVALID_ARGUMENT), false);
  }
  else if (hashCode == CLIENT_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoArchivedMediaErrors::CLIENT_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_MEDIA_FRAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoArchivedMediaErrors::INVALID_MEDIA_FRAME), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace KinesisVideoArchivedMediaErrorMapper
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
