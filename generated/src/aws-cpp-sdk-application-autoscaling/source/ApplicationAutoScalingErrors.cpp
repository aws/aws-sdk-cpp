/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/application-autoscaling/ApplicationAutoScalingErrors.h>
#include <aws/application-autoscaling/model/ResourceNotFoundException.h>
#include <aws/application-autoscaling/model/TooManyTagsException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ApplicationAutoScaling;
using namespace Aws::ApplicationAutoScaling::Model;

namespace Aws
{
namespace ApplicationAutoScaling
{
template<> AWS_APPLICATIONAUTOSCALING_API ResourceNotFoundException ApplicationAutoScalingError::GetModeledError()
{
  assert(this->GetErrorType() == ApplicationAutoScalingErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_APPLICATIONAUTOSCALING_API TooManyTagsException ApplicationAutoScalingError::GetModeledError()
{
  assert(this->GetErrorType() == ApplicationAutoScalingErrors::TOO_MANY_TAGS);
  return TooManyTagsException(this->GetJsonPayload().View());
}

namespace ApplicationAutoScalingErrorMapper
{

static const int FAILED_RESOURCE_ACCESS_HASH = HashingUtils::HashString("FailedResourceAccessException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int CONCURRENT_UPDATE_HASH = HashingUtils::HashString("ConcurrentUpdateException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int OBJECT_NOT_FOUND_HASH = HashingUtils::HashString("ObjectNotFoundException");
static const int INTERNAL_SERVICE_HASH = HashingUtils::HashString("InternalServiceException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == FAILED_RESOURCE_ACCESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationAutoScalingErrors::FAILED_RESOURCE_ACCESS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationAutoScalingErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == CONCURRENT_UPDATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationAutoScalingErrors::CONCURRENT_UPDATE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationAutoScalingErrors::TOO_MANY_TAGS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == OBJECT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationAutoScalingErrors::OBJECT_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationAutoScalingErrors::INTERNAL_SERVICE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationAutoScalingErrors::INVALID_NEXT_TOKEN), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ApplicationAutoScalingErrorMapper
} // namespace ApplicationAutoScaling
} // namespace Aws
