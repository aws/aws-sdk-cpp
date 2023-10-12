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

static constexpr uint32_t INVALID_ENDPOINT_HASH = ConstExprHashingUtils::HashString("InvalidEndpointException");
static constexpr uint32_t CONNECTION_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ConnectionLimitExceededException");
static constexpr uint32_t NOT_AUTHORIZED_HASH = ConstExprHashingUtils::HashString("NotAuthorizedException");
static constexpr uint32_t CLIENT_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ClientLimitExceededException");
static constexpr uint32_t INVALID_ARGUMENT_HASH = ConstExprHashingUtils::HashString("InvalidArgumentException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
