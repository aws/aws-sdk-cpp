/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsErrors.h>
#include <aws/chime-sdk-meetings/model/ServiceUnavailableException.h>
#include <aws/chime-sdk-meetings/model/ConflictException.h>
#include <aws/chime-sdk-meetings/model/ThrottlingException.h>
#include <aws/chime-sdk-meetings/model/NotFoundException.h>
#include <aws/chime-sdk-meetings/model/ServiceFailureException.h>
#include <aws/chime-sdk-meetings/model/ResourceNotFoundException.h>
#include <aws/chime-sdk-meetings/model/ForbiddenException.h>
#include <aws/chime-sdk-meetings/model/UnauthorizedException.h>
#include <aws/chime-sdk-meetings/model/LimitExceededException.h>
#include <aws/chime-sdk-meetings/model/TooManyTagsException.h>
#include <aws/chime-sdk-meetings/model/UnprocessableEntityException.h>
#include <aws/chime-sdk-meetings/model/BadRequestException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ChimeSDKMeetings;
using namespace Aws::ChimeSDKMeetings::Model;

namespace Aws
{
namespace ChimeSDKMeetings
{
template<> AWS_CHIMESDKMEETINGS_API ServiceUnavailableException ChimeSDKMeetingsError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMeetingsErrors::SERVICE_UNAVAILABLE);
  return ServiceUnavailableException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMEETINGS_API ConflictException ChimeSDKMeetingsError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMeetingsErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMEETINGS_API ThrottlingException ChimeSDKMeetingsError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMeetingsErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMEETINGS_API NotFoundException ChimeSDKMeetingsError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMeetingsErrors::NOT_FOUND);
  return NotFoundException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMEETINGS_API ServiceFailureException ChimeSDKMeetingsError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMeetingsErrors::SERVICE_FAILURE);
  return ServiceFailureException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMEETINGS_API ResourceNotFoundException ChimeSDKMeetingsError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMeetingsErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMEETINGS_API ForbiddenException ChimeSDKMeetingsError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMeetingsErrors::FORBIDDEN);
  return ForbiddenException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMEETINGS_API UnauthorizedException ChimeSDKMeetingsError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMeetingsErrors::UNAUTHORIZED);
  return UnauthorizedException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMEETINGS_API LimitExceededException ChimeSDKMeetingsError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMeetingsErrors::LIMIT_EXCEEDED);
  return LimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMEETINGS_API TooManyTagsException ChimeSDKMeetingsError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMeetingsErrors::TOO_MANY_TAGS);
  return TooManyTagsException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMEETINGS_API UnprocessableEntityException ChimeSDKMeetingsError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMeetingsErrors::UNPROCESSABLE_ENTITY);
  return UnprocessableEntityException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMEETINGS_API BadRequestException ChimeSDKMeetingsError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMeetingsErrors::BAD_REQUEST);
  return BadRequestException(this->GetJsonPayload().View());
}

namespace ChimeSDKMeetingsErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int SERVICE_FAILURE_HASH = HashingUtils::HashString("ServiceFailureException");
static const int FORBIDDEN_HASH = HashingUtils::HashString("ForbiddenException");
static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UnauthorizedException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int UNPROCESSABLE_ENTITY_HASH = HashingUtils::HashString("UnprocessableEntityException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMeetingsErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMeetingsErrors::NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMeetingsErrors::SERVICE_FAILURE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMeetingsErrors::FORBIDDEN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMeetingsErrors::UNAUTHORIZED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMeetingsErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMeetingsErrors::TOO_MANY_TAGS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNPROCESSABLE_ENTITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMeetingsErrors::UNPROCESSABLE_ENTITY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMeetingsErrors::BAD_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ChimeSDKMeetingsErrorMapper
} // namespace ChimeSDKMeetings
} // namespace Aws
