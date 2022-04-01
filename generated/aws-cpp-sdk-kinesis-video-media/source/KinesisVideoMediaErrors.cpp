/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesis-video-media/KinesisVideoMediaErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::KinesisVideoMedia;

namespace Aws
{
namespace KinesisVideoMedia
{
namespace KinesisVideoMediaErrorMapper
{

static const int INVALID_ENDPOINT_HASH = HashingUtils::HashString("InvalidEndpointException");
static const int CONNECTION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ConnectionLimitExceededException");
static const int NOT_AUTHORIZED_HASH = HashingUtils::HashString("NotAuthorizedException");
static const int CLIENT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ClientLimitExceededException");
static const int INVALID_ARGUMENT_HASH = HashingUtils::HashString("InvalidArgumentException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_ENDPOINT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoMediaErrors::INVALID_ENDPOINT), false);
  }
  else if (hashCode == CONNECTION_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoMediaErrors::CONNECTION_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == NOT_AUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoMediaErrors::NOT_AUTHORIZED), false);
  }
  else if (hashCode == CLIENT_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoMediaErrors::CLIENT_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisVideoMediaErrors::INVALID_ARGUMENT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace KinesisVideoMediaErrorMapper
} // namespace KinesisVideoMedia
} // namespace Aws
