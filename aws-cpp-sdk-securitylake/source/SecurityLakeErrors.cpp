/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securitylake/SecurityLakeErrors.h>
#include <aws/securitylake/model/ConflictException.h>
#include <aws/securitylake/model/InternalServerException.h>
#include <aws/securitylake/model/ResourceNotFoundException.h>
#include <aws/securitylake/model/ValidationException.h>
#include <aws/securitylake/model/ServiceQuotaExceededException.h>
#include <aws/securitylake/model/ThrottlingException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SecurityLake;
using namespace Aws::SecurityLake::Model;

namespace Aws
{
namespace SecurityLake
{
template<> AWS_SECURITYLAKE_API ConflictException SecurityLakeError::GetModeledError()
{
  assert(this->GetErrorType() == SecurityLakeErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_SECURITYLAKE_API InternalServerException SecurityLakeError::GetModeledError()
{
  assert(this->GetErrorType() == SecurityLakeErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_SECURITYLAKE_API ResourceNotFoundException SecurityLakeError::GetModeledError()
{
  assert(this->GetErrorType() == SecurityLakeErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_SECURITYLAKE_API ValidationException SecurityLakeError::GetModeledError()
{
  assert(this->GetErrorType() == SecurityLakeErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_SECURITYLAKE_API ServiceQuotaExceededException SecurityLakeError::GetModeledError()
{
  assert(this->GetErrorType() == SecurityLakeErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_SECURITYLAKE_API ThrottlingException SecurityLakeError::GetModeledError()
{
  assert(this->GetErrorType() == SecurityLakeErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

namespace SecurityLakeErrorMapper
{

static const int ACCOUNT_NOT_FOUND_HASH = HashingUtils::HashString("AccountNotFoundException");
static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int S3_HASH = HashingUtils::HashString("S3Exception");
static const int CONFLICT_SOURCE_NAMES_HASH = HashingUtils::HashString("ConflictSourceNamesException");
static const int EVENT_BRIDGE_HASH = HashingUtils::HashString("EventBridgeException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInputException");
static const int CONFLICT_SUBSCRIPTION_HASH = HashingUtils::HashString("ConflictSubscriptionException");
static const int BUCKET_NOT_FOUND_HASH = HashingUtils::HashString("BucketNotFoundException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == ACCOUNT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityLakeErrors::ACCOUNT_NOT_FOUND), false);
  }
  else if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityLakeErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityLakeErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityLakeErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == S3_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityLakeErrors::S3), false);
  }
  else if (hashCode == CONFLICT_SOURCE_NAMES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityLakeErrors::CONFLICT_SOURCE_NAMES), false);
  }
  else if (hashCode == EVENT_BRIDGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityLakeErrors::EVENT_BRIDGE), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityLakeErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityLakeErrors::INVALID_INPUT), false);
  }
  else if (hashCode == CONFLICT_SUBSCRIPTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityLakeErrors::CONFLICT_SUBSCRIPTION), false);
  }
  else if (hashCode == BUCKET_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityLakeErrors::BUCKET_NOT_FOUND), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SecurityLakeErrorMapper
} // namespace SecurityLake
} // namespace Aws
