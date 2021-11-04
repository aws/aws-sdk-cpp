/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsErrors.h>
#include <aws/chime-sdk-meetings/model/ServiceUnavailableException.h>
#include <aws/chime-sdk-meetings/model/NotFoundException.h>
#include <aws/chime-sdk-meetings/model/UnauthorizedException.h>
#include <aws/chime-sdk-meetings/model/ForbiddenException.h>
#include <aws/chime-sdk-meetings/model/LimitExceededException.h>
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

template<> AWS_CHIMESDKMEETINGS_API NotFoundException ChimeSDKMeetingsError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMeetingsErrors::NOT_FOUND);
  return NotFoundException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMEETINGS_API UnauthorizedException ChimeSDKMeetingsError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMeetingsErrors::UNAUTHORIZED);
  return UnauthorizedException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMEETINGS_API ForbiddenException ChimeSDKMeetingsError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMeetingsErrors::FORBIDDEN);
  return ForbiddenException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMEETINGS_API LimitExceededException ChimeSDKMeetingsError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMeetingsErrors::LIMIT_EXCEEDED);
  return LimitExceededException(this->GetJsonPayload().View());
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

static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UnauthorizedException");
static const int FORBIDDEN_HASH = HashingUtils::HashString("ForbiddenException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int UNPROCESSABLE_ENTITY_HASH = HashingUtils::HashString("UnprocessableEntityException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMeetingsErrors::NOT_FOUND), false);
  }
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMeetingsErrors::UNAUTHORIZED), false);
  }
  else if (hashCode == FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMeetingsErrors::FORBIDDEN), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMeetingsErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == UNPROCESSABLE_ENTITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMeetingsErrors::UNPROCESSABLE_ENTITY), false);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMeetingsErrors::BAD_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ChimeSDKMeetingsErrorMapper
} // namespace ChimeSDKMeetings
} // namespace Aws
