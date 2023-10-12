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

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t NOT_FOUND_HASH = ConstExprHashingUtils::HashString("NotFoundException");
static constexpr uint32_t SERVICE_FAILURE_HASH = ConstExprHashingUtils::HashString("ServiceFailureException");
static constexpr uint32_t FORBIDDEN_HASH = ConstExprHashingUtils::HashString("ForbiddenException");
static constexpr uint32_t RESOURCE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ResourceLimitExceededException");
static constexpr uint32_t GONE_HASH = ConstExprHashingUtils::HashString("GoneException");
static constexpr uint32_t THROTTLED_CLIENT_HASH = ConstExprHashingUtils::HashString("ThrottledClientException");
static constexpr uint32_t UNPROCESSABLE_ENTITY_HASH = ConstExprHashingUtils::HashString("UnprocessableEntityException");
static constexpr uint32_t UNAUTHORIZED_CLIENT_HASH = ConstExprHashingUtils::HashString("UnauthorizedClientException");
static constexpr uint32_t BAD_REQUEST_HASH = ConstExprHashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
  else if (hashCode == GONE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKVoiceErrors::GONE), false);
  }
  else if (hashCode == THROTTLED_CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKVoiceErrors::THROTTLED_CLIENT), false);
  }
  else if (hashCode == UNPROCESSABLE_ENTITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKVoiceErrors::UNPROCESSABLE_ENTITY), false);
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
