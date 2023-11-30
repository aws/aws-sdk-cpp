/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessagingErrors.h>
#include <aws/chime-sdk-messaging/model/ConflictException.h>
#include <aws/chime-sdk-messaging/model/ServiceUnavailableException.h>
#include <aws/chime-sdk-messaging/model/NotFoundException.h>
#include <aws/chime-sdk-messaging/model/ServiceFailureException.h>
#include <aws/chime-sdk-messaging/model/ForbiddenException.h>
#include <aws/chime-sdk-messaging/model/ResourceLimitExceededException.h>
#include <aws/chime-sdk-messaging/model/ThrottledClientException.h>
#include <aws/chime-sdk-messaging/model/BadRequestException.h>
#include <aws/chime-sdk-messaging/model/UnauthorizedClientException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ChimeSDKMessaging;
using namespace Aws::ChimeSDKMessaging::Model;

namespace Aws
{
namespace ChimeSDKMessaging
{
template<> AWS_CHIMESDKMESSAGING_API ConflictException ChimeSDKMessagingError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMessagingErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMESSAGING_API ServiceUnavailableException ChimeSDKMessagingError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMessagingErrors::SERVICE_UNAVAILABLE);
  return ServiceUnavailableException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMESSAGING_API NotFoundException ChimeSDKMessagingError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMessagingErrors::NOT_FOUND);
  return NotFoundException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMESSAGING_API ServiceFailureException ChimeSDKMessagingError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMessagingErrors::SERVICE_FAILURE);
  return ServiceFailureException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMESSAGING_API ForbiddenException ChimeSDKMessagingError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMessagingErrors::FORBIDDEN);
  return ForbiddenException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMESSAGING_API ResourceLimitExceededException ChimeSDKMessagingError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMessagingErrors::RESOURCE_LIMIT_EXCEEDED);
  return ResourceLimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMESSAGING_API ThrottledClientException ChimeSDKMessagingError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMessagingErrors::THROTTLED_CLIENT);
  return ThrottledClientException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMESSAGING_API BadRequestException ChimeSDKMessagingError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMessagingErrors::BAD_REQUEST);
  return BadRequestException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMESSAGING_API UnauthorizedClientException ChimeSDKMessagingError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMessagingErrors::UNAUTHORIZED_CLIENT);
  return UnauthorizedClientException(this->GetJsonPayload().View());
}

namespace ChimeSDKMessagingErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int SERVICE_FAILURE_HASH = HashingUtils::HashString("ServiceFailureException");
static const int FORBIDDEN_HASH = HashingUtils::HashString("ForbiddenException");
static const int RESOURCE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ResourceLimitExceededException");
static const int THROTTLED_CLIENT_HASH = HashingUtils::HashString("ThrottledClientException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");
static const int UNAUTHORIZED_CLIENT_HASH = HashingUtils::HashString("UnauthorizedClientException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMessagingErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMessagingErrors::NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMessagingErrors::SERVICE_FAILURE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMessagingErrors::FORBIDDEN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMessagingErrors::RESOURCE_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == THROTTLED_CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMessagingErrors::THROTTLED_CLIENT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMessagingErrors::BAD_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNAUTHORIZED_CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMessagingErrors::UNAUTHORIZED_CLIENT), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ChimeSDKMessagingErrorMapper
} // namespace ChimeSDKMessaging
} // namespace Aws
