/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesErrors.h>
#include <aws/chime-sdk-media-pipelines/model/ServiceUnavailableException.h>
#include <aws/chime-sdk-media-pipelines/model/ConflictException.h>
#include <aws/chime-sdk-media-pipelines/model/NotFoundException.h>
#include <aws/chime-sdk-media-pipelines/model/ServiceFailureException.h>
#include <aws/chime-sdk-media-pipelines/model/ForbiddenException.h>
#include <aws/chime-sdk-media-pipelines/model/ResourceLimitExceededException.h>
#include <aws/chime-sdk-media-pipelines/model/ThrottledClientException.h>
#include <aws/chime-sdk-media-pipelines/model/BadRequestException.h>
#include <aws/chime-sdk-media-pipelines/model/UnauthorizedClientException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ChimeSDKMediaPipelines;
using namespace Aws::ChimeSDKMediaPipelines::Model;

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
template<> AWS_CHIMESDKMEDIAPIPELINES_API ServiceUnavailableException ChimeSDKMediaPipelinesError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMediaPipelinesErrors::SERVICE_UNAVAILABLE);
  return ServiceUnavailableException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMEDIAPIPELINES_API ConflictException ChimeSDKMediaPipelinesError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMediaPipelinesErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMEDIAPIPELINES_API NotFoundException ChimeSDKMediaPipelinesError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMediaPipelinesErrors::NOT_FOUND);
  return NotFoundException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMEDIAPIPELINES_API ServiceFailureException ChimeSDKMediaPipelinesError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMediaPipelinesErrors::SERVICE_FAILURE);
  return ServiceFailureException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMEDIAPIPELINES_API ForbiddenException ChimeSDKMediaPipelinesError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMediaPipelinesErrors::FORBIDDEN);
  return ForbiddenException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMEDIAPIPELINES_API ResourceLimitExceededException ChimeSDKMediaPipelinesError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMediaPipelinesErrors::RESOURCE_LIMIT_EXCEEDED);
  return ResourceLimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMEDIAPIPELINES_API ThrottledClientException ChimeSDKMediaPipelinesError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMediaPipelinesErrors::THROTTLED_CLIENT);
  return ThrottledClientException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMEDIAPIPELINES_API BadRequestException ChimeSDKMediaPipelinesError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMediaPipelinesErrors::BAD_REQUEST);
  return BadRequestException(this->GetJsonPayload().View());
}

template<> AWS_CHIMESDKMEDIAPIPELINES_API UnauthorizedClientException ChimeSDKMediaPipelinesError::GetModeledError()
{
  assert(this->GetErrorType() == ChimeSDKMediaPipelinesErrors::UNAUTHORIZED_CLIENT);
  return UnauthorizedClientException(this->GetJsonPayload().View());
}

namespace ChimeSDKMediaPipelinesErrorMapper
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
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMediaPipelinesErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMediaPipelinesErrors::NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMediaPipelinesErrors::SERVICE_FAILURE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMediaPipelinesErrors::FORBIDDEN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMediaPipelinesErrors::RESOURCE_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == THROTTLED_CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMediaPipelinesErrors::THROTTLED_CLIENT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMediaPipelinesErrors::BAD_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNAUTHORIZED_CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChimeSDKMediaPipelinesErrors::UNAUTHORIZED_CLIENT), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ChimeSDKMediaPipelinesErrorMapper
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
