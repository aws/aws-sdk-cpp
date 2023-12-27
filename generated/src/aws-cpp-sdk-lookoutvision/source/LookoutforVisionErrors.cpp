/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lookoutvision/LookoutforVisionErrors.h>
#include <aws/lookoutvision/model/ConflictException.h>
#include <aws/lookoutvision/model/ThrottlingException.h>
#include <aws/lookoutvision/model/ServiceQuotaExceededException.h>
#include <aws/lookoutvision/model/InternalServerException.h>
#include <aws/lookoutvision/model/ResourceNotFoundException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::LookoutforVision;
using namespace Aws::LookoutforVision::Model;

namespace Aws
{
namespace LookoutforVision
{
template<> AWS_LOOKOUTFORVISION_API ConflictException LookoutforVisionError::GetModeledError()
{
  assert(this->GetErrorType() == LookoutforVisionErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_LOOKOUTFORVISION_API ThrottlingException LookoutforVisionError::GetModeledError()
{
  assert(this->GetErrorType() == LookoutforVisionErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_LOOKOUTFORVISION_API ServiceQuotaExceededException LookoutforVisionError::GetModeledError()
{
  assert(this->GetErrorType() == LookoutforVisionErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_LOOKOUTFORVISION_API InternalServerException LookoutforVisionError::GetModeledError()
{
  assert(this->GetErrorType() == LookoutforVisionErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_LOOKOUTFORVISION_API ResourceNotFoundException LookoutforVisionError::GetModeledError()
{
  assert(this->GetErrorType() == LookoutforVisionErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

namespace LookoutforVisionErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LookoutforVisionErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LookoutforVisionErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LookoutforVisionErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace LookoutforVisionErrorMapper
} // namespace LookoutforVision
} // namespace Aws
