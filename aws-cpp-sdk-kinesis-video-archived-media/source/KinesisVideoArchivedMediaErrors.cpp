/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaErrors.h>

using namespace Aws::Client;
using namespace Aws::KinesisVideoArchivedMedia;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideoArchivedMedia
{
namespace KinesisVideoArchivedMediaErrorMapper
{

static const int INVALID_CODEC_PRIVATE_DATA_HASH = HashingUtils::HashString("InvalidCodecPrivateDataException");
static const int NO_DATA_RETENTION_HASH = HashingUtils::HashString("NoDataRetentionException");
static const int MISSING_CODEC_PRIVATE_DATA_HASH = HashingUtils::HashString("MissingCodecPrivateDataException");
static const int NOT_AUTHORIZED_HASH = HashingUtils::HashString("NotAuthorizedException");
static const int UNSUPPORTED_STREAM_MEDIA_TYPE_HASH = HashingUtils::HashString("UnsupportedStreamMediaTypeException");
static const int INVALID_ARGUMENT_HASH = HashingUtils::HashString("InvalidArgumentException");
static const int CLIENT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ClientLimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

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
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace KinesisVideoArchivedMediaErrorMapper
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
