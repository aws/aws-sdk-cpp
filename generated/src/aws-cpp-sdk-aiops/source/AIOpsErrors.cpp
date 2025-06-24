/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/aiops/AIOpsErrors.h>
#include <aws/aiops/model/ServiceQuotaExceededException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::AIOps;
using namespace Aws::AIOps::Model;

namespace Aws
{
namespace AIOps
{
template<> AWS_AIOPS_API ServiceQuotaExceededException AIOpsError::GetModeledError()
{
  assert(this->GetErrorType() == AIOpsErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

namespace AIOpsErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int FORBIDDEN_HASH = HashingUtils::HashString("ForbiddenException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AIOpsErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AIOpsErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AIOpsErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  else if (hashCode == FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AIOpsErrors::FORBIDDEN), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace AIOpsErrorMapper
} // namespace AIOps
} // namespace Aws
