/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/chime/ChimeErrors.h>
#include <aws/chime/model/ServiceUnavailableException.h>
#include <aws/chime/model/ConflictException.h>
#include <aws/chime/model/NotFoundException.h>
#include <aws/chime/model/ServiceFailureException.h>
#include <aws/chime/model/ForbiddenException.h>
#include <aws/chime/model/ResourceLimitExceededException.h>
#include <aws/chime/model/AccessDeniedException.h>
#include <aws/chime/model/ThrottledClientException.h>
#include <aws/chime/model/UnprocessableEntityException.h>
#include <aws/chime/model/UnauthorizedClientException.h>
#include <aws/chime/model/BadRequestException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Chime;
using namespace Aws::Chime::Model;

namespace Aws
{
namespace Chime
{
template<> AWS_CHIME_API ServiceUnavailableException ChimeError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeErrors::SERVICE_UNAVAILABLE);
  return ServiceUnavailableException(this->GetJsonPayload().View());
}

template<> AWS_CHIME_API ConflictException ChimeError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_CHIME_API NotFoundException ChimeError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeErrors::NOT_FOUND);
  return NotFoundException(this->GetJsonPayload().View());
}

template<> AWS_CHIME_API ServiceFailureException ChimeError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeErrors::SERVICE_FAILURE);
  return ServiceFailureException(this->GetJsonPayload().View());
}

template<> AWS_CHIME_API ForbiddenException ChimeError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeErrors::FORBIDDEN);
  return ForbiddenException(this->GetJsonPayload().View());
}

template<> AWS_CHIME_API ResourceLimitExceededException ChimeError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeErrors::RESOURCE_LIMIT_EXCEEDED);
  return ResourceLimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_CHIME_API AccessDeniedException ChimeError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

template<> AWS_CHIME_API ThrottledClientException ChimeError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeErrors::THROTTLED_CLIENT);
  return ThrottledClientException(this->GetJsonPayload().View());
}

template<> AWS_CHIME_API UnprocessableEntityException ChimeError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeErrors::UNPROCESSABLE_ENTITY);
  return UnprocessableEntityException(this->GetJsonPayload().View());
}

template<> AWS_CHIME_API UnauthorizedClientException ChimeError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeErrors::UNAUTHORIZED_CLIENT);
  return UnauthorizedClientException(this->GetJsonPayload().View());
}

template<> AWS_CHIME_API BadRequestException ChimeError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeErrors::BAD_REQUEST);
  return BadRequestException(this->GetJsonPayload().View());
}

namespace ChimeErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int SERVICE_FAILURE_HASH = HashingUtils::HashString("ServiceFailureException");
static const int FORBIDDEN_HASH = HashingUtils::HashString("ForbiddenException");
static const int RESOURCE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ResourceLimitExceededException");
static const int THROTTLED_CLIENT_HASH = HashingUtils::HashString("ThrottledClientException");
static const int UNPROCESSABLE_ENTITY_HASH = HashingUtils::HashString("UnprocessableEntityException");
static const int UNAUTHORIZED_CLIENT_HASH = HashingUtils::HashString("UnauthorizedClientException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeErrors::CONFLICT), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeErrors::NOT_FOUND), false);
  }
  else if (hashCode == SERVICE_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeErrors::SERVICE_FAILURE), false);
  }
  else if (hashCode == FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeErrors::FORBIDDEN), false);
  }
  else if (hashCode == RESOURCE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeErrors::RESOURCE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == THROTTLED_CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeErrors::THROTTLED_CLIENT), false);
  }
  else if (hashCode == UNPROCESSABLE_ENTITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeErrors::UNPROCESSABLE_ENTITY), false);
  }
  else if (hashCode == UNAUTHORIZED_CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeErrors::UNAUTHORIZED_CLIENT), false);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeErrors::BAD_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ChimeErrorMapper
} // namespace Chime
} // namespace Aws
