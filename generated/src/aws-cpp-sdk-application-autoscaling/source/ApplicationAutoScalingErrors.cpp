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

static constexpr uint32_t FAILED_RESOURCE_ACCESS_HASH = ConstExprHashingUtils::HashString("FailedResourceAccessException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t CONCURRENT_UPDATE_HASH = ConstExprHashingUtils::HashString("ConcurrentUpdateException");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTagsException");
static constexpr uint32_t OBJECT_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ObjectNotFoundException");
static constexpr uint32_t INTERNAL_SERVICE_HASH = ConstExprHashingUtils::HashString("InternalServiceException");
static constexpr uint32_t INVALID_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidNextTokenException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == FAILED_RESOURCE_ACCESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationAutoScalingErrors::FAILED_RESOURCE_ACCESS), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationAutoScalingErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == CONCURRENT_UPDATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationAutoScalingErrors::CONCURRENT_UPDATE), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationAutoScalingErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == OBJECT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationAutoScalingErrors::OBJECT_NOT_FOUND), false);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationAutoScalingErrors::INTERNAL_SERVICE), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationAutoScalingErrors::INVALID_NEXT_TOKEN), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ApplicationAutoScalingErrorMapper
} // namespace ApplicationAutoScaling
} // namespace Aws
