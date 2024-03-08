/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentityErrors.h>
#include <aws/chime-sdk-identity/model/ConflictException.h>
#include <aws/chime-sdk-identity/model/ServiceUnavailableException.h>
#include <aws/chime-sdk-identity/model/NotFoundException.h>
#include <aws/chime-sdk-identity/model/ServiceFailureException.h>
#include <aws/chime-sdk-identity/model/ForbiddenException.h>
#include <aws/chime-sdk-identity/model/ResourceLimitExceededException.h>
#include <aws/chime-sdk-identity/model/ThrottledClientException.h>
#include <aws/chime-sdk-identity/model/BadRequestException.h>
#include <aws/chime-sdk-identity/model/UnauthorizedClientException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ChimeSDKIdentity;
using namespace Aws::ChimeSDKIdentity::Model;

namespace Aws
{
namespace ChimeSDKIdentity
{
template<> AWS_CHIMESDKIDENTITY_API ConflictException ChimeSDKIdentityError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKIdentityErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKIDENTITY_API ServiceUnavailableException ChimeSDKIdentityError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKIdentityErrors::SERVICE_UNAVAILABLE);
  return ServiceUnavailableException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKIDENTITY_API NotFoundException ChimeSDKIdentityError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKIdentityErrors::NOT_FOUND);
  return NotFoundException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKIDENTITY_API ServiceFailureException ChimeSDKIdentityError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKIdentityErrors::SERVICE_FAILURE);
  return ServiceFailureException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKIDENTITY_API ForbiddenException ChimeSDKIdentityError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKIdentityErrors::FORBIDDEN);
  return ForbiddenException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKIDENTITY_API ResourceLimitExceededException ChimeSDKIdentityError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKIdentityErrors::RESOURCE_LIMIT_EXCEEDED);
  return ResourceLimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKIDENTITY_API ThrottledClientException ChimeSDKIdentityError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKIdentityErrors::THROTTLED_CLIENT);
  return ThrottledClientException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKIDENTITY_API BadRequestException ChimeSDKIdentityError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKIdentityErrors::BAD_REQUEST);
  return BadRequestException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKIDENTITY_API UnauthorizedClientException ChimeSDKIdentityError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKIdentityErrors::UNAUTHORIZED_CLIENT);
  return UnauthorizedClientException(this->GetJsonPayload().View());
}

namespace ChimeSDKIdentityErrorMapper
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
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKIdentityErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKIdentityErrors::NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKIdentityErrors::SERVICE_FAILURE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKIdentityErrors::FORBIDDEN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKIdentityErrors::RESOURCE_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == THROTTLED_CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKIdentityErrors::THROTTLED_CLIENT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKIdentityErrors::BAD_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNAUTHORIZED_CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKIdentityErrors::UNAUTHORIZED_CLIENT), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ChimeSDKIdentityErrorMapper
} // namespace ChimeSDKIdentity
} // namespace Aws
