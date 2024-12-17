/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/backupsearch/BackupSearchErrors.h>
#include <aws/backupsearch/model/ConflictException.h>
#include <aws/backupsearch/model/ThrottlingException.h>
#include <aws/backupsearch/model/ServiceQuotaExceededException.h>
#include <aws/backupsearch/model/ResourceNotFoundException.h>
#include <aws/backupsearch/model/InternalServerException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::BackupSearch;
using namespace Aws::BackupSearch::Model;

namespace Aws
{
namespace BackupSearch
{
template<> AWS_BACKUPSEARCH_API ConflictException BackupSearchError::GetModeledError()
{
  assert(this->GetErrorType() == BackupSearchErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_BACKUPSEARCH_API ThrottlingException BackupSearchError::GetModeledError()
{
  assert(this->GetErrorType() == BackupSearchErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_BACKUPSEARCH_API ServiceQuotaExceededException BackupSearchError::GetModeledError()
{
  assert(this->GetErrorType() == BackupSearchErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_BACKUPSEARCH_API ResourceNotFoundException BackupSearchError::GetModeledError()
{
  assert(this->GetErrorType() == BackupSearchErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_BACKUPSEARCH_API InternalServerException BackupSearchError::GetModeledError()
{
  assert(this->GetErrorType() == BackupSearchErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

namespace BackupSearchErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BackupSearchErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BackupSearchErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BackupSearchErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace BackupSearchErrorMapper
} // namespace BackupSearch
} // namespace Aws
