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
#include <aws/kinesisvideo/KinesisVideoErrors.h>

using namespace Aws::Client;
using namespace Aws::KinesisVideo;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideo
{
namespace KinesisVideoErrorMapper
{

static const int VERSION_MISMATCH_HASH = HashingUtils::HashString("VersionMismatchException");
static const int INVALID_DEVICE_HASH = HashingUtils::HashString("InvalidDeviceException");
static const int TAGS_PER_RESOURCE_EXCEEDED_LIMIT_HASH = HashingUtils::HashString("TagsPerResourceExceededLimitException");
static const int ACCOUNT_STREAM_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("AccountStreamLimitExceededException");
static const int INVALID_RESOURCE_FORMAT_HASH = HashingUtils::HashString("InvalidResourceFormatException");
static const int DEVICE_STREAM_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("DeviceStreamLimitExceededException");
static const int NOT_AUTHORIZED_HASH = HashingUtils::HashString("NotAuthorizedException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int INVALID_ARGUMENT_HASH = HashingUtils::HashString("InvalidArgumentException");
static const int CLIENT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ClientLimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == VERSION_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoErrors::VERSION_MISMATCH), false);
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
  else if (hashCode == INVALID_RESOURCE_FORMAT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoErrors::INVALID_RESOURCE_FORMAT), false);
  }
  else if (hashCode == DEVICE_STREAM_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoErrors::DEVICE_STREAM_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == NOT_AUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoErrors::NOT_AUTHORIZED), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoErrors::RESOURCE_IN_USE), false);
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
