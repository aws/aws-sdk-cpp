/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/b2bi/B2BIErrors.h>
#include <aws/b2bi/model/ThrottlingException.h>
#include <aws/b2bi/model/ServiceQuotaExceededException.h>
#include <aws/b2bi/model/InternalServerException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::B2BI;
using namespace Aws::B2BI::Model;

namespace Aws
{
namespace B2BI
{
template<> AWS_B2BI_API ThrottlingException B2BIError::GetModeledError()
{
  assert(this->GetErrorType() == B2BIErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_B2BI_API ServiceQuotaExceededException B2BIError::GetModeledError()
{
  assert(this->GetErrorType() == B2BIErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_B2BI_API InternalServerException B2BIError::GetModeledError()
{
  assert(this->GetErrorType() == B2BIErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

namespace B2BIErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(B2BIErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(B2BIErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(B2BIErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace B2BIErrorMapper
} // namespace B2BI
} // namespace Aws
