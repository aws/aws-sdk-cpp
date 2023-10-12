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

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t RESOURCE_IN_USE_HASH = ConstExprHashingUtils::HashString("ResourceInUseException");
static constexpr uint32_t RESOURCE_ALREADY_EXIST_HASH = ConstExprHashingUtils::HashString("ResourceAlreadyExistException");
static constexpr uint32_t RESOURCE_UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("ResourceUnavailableException");
static constexpr uint32_t FEATURED_RESULTS_CONFLICT_HASH = ConstExprHashingUtils::HashString("FeaturedResultsConflictException");
static constexpr uint32_t INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KendraErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KendraErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KendraErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KendraErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == RESOURCE_ALREADY_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KendraErrors::RESOURCE_ALREADY_EXIST), false);
  }
  else if (hashCode == RESOURCE_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KendraErrors::RESOURCE_UNAVAILABLE), false);
  }
  else if (hashCode == FEATURED_RESULTS_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KendraErrors::FEATURED_RESULTS_CONFLICT), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KendraErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace KendraErrorMapper
} // namespace kendra
} // namespace Aws
