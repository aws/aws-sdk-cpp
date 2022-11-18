/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ChimeSDKVoice;

namespace Aws
{
namespace ChimeSDKVoice
{
namespace ChimeSDKVoiceErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int SERVICE_FAILURE_HASH = HashingUtils::HashString("ServiceFailureException");
static const int FORBIDDEN_HASH = HashingUtils::HashString("ForbiddenException");
static const int RESOURCE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ResourceLimitExceededException");
static const int THROTTLED_CLIENT_HASH = HashingUtils::HashString("ThrottledClientException");
static const int UNAUTHORIZED_CLIENT_HASH = HashingUtils::HashString("UnauthorizedClientException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKVoiceErrors::CONFLICT), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKVoiceErrors::NOT_FOUND), false);
  }
  else if (hashCode == SERVICE_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKVoiceErrors::SERVICE_FAILURE), false);
  }
  else if (hashCode == FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKVoiceErrors::FORBIDDEN), false);
  }
  else if (hashCode == RESOURCE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKVoiceErrors::RESOURCE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == THROTTLED_CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKVoiceErrors::THROTTLED_CLIENT), false);
  }
  else if (hashCode == UNAUTHORIZED_CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKVoiceErrors::UNAUTHORIZED_CLIENT), false);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKVoiceErrors::BAD_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ChimeSDKVoiceErrorMapper
} // namespace ChimeSDKVoice
} // namespace Aws
