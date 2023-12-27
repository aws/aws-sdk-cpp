/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kendra/KendraErrors.h>
#include <aws/kendra/model/FeaturedResultsConflictException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::kendra;
using namespace Aws::kendra::Model;

namespace Aws
{
namespace kendra
{
template<> AWS_KENDRA_API FeaturedResultsConflictException KendraError::GetModeledError()
{
  assert(this->GetErrorType() == KendraErrors::FEATURED_RESULTS_CONFLICT);
  return FeaturedResultsConflictException(this->GetJsonPayload().View());
}

namespace KendraErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int RESOURCE_ALREADY_EXIST_HASH = HashingUtils::HashString("ResourceAlreadyExistException");
static const int RESOURCE_UNAVAILABLE_HASH = HashingUtils::HashString("ResourceUnavailableException");
static const int FEATURED_RESULTS_CONFLICT_HASH = HashingUtils::HashString("FeaturedResultsConflictException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KendraErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KendraErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KendraErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KendraErrors::RESOURCE_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_ALREADY_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KendraErrors::RESOURCE_ALREADY_EXIST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KendraErrors::RESOURCE_UNAVAILABLE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == FEATURED_RESULTS_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KendraErrors::FEATURED_RESULTS_CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KendraErrors::INVALID_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace KendraErrorMapper
} // namespace kendra
} // namespace Aws
