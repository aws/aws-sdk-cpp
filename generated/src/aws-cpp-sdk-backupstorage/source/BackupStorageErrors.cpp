/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/backupstorage/BackupStorageErrors.h>
#include <aws/backupstorage/model/DataAlreadyExistsException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::BackupStorage;
using namespace Aws::BackupStorage::Model;

namespace Aws
{
namespace BackupStorage
{
template<> AWS_BACKUPSTORAGE_API DataAlreadyExistsException BackupStorageError::GetModeledError()
{
  assert(this->GetErrorType() == BackupStorageErrors::DATA_ALREADY_EXISTS);
  return DataAlreadyExistsException(this->GetJsonPayload().View());
}

namespace BackupStorageErrorMapper
{

static const int NOT_READABLE_INPUT_STREAM_HASH = HashingUtils::HashString("NotReadableInputStreamException");
static const int ILLEGAL_ARGUMENT_HASH = HashingUtils::HashString("IllegalArgumentException");
static const int RETRYABLE_HASH = HashingUtils::HashString("RetryableException");
static const int DATA_ALREADY_EXISTS_HASH = HashingUtils::HashString("DataAlreadyExistsException");
static const int SERVICE_INTERNAL_HASH = HashingUtils::HashString("ServiceInternalException");
static const int K_M_S_INVALID_KEY_USAGE_HASH = HashingUtils::HashString("KMSInvalidKeyUsageException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == NOT_READABLE_INPUT_STREAM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BackupStorageErrors::NOT_READABLE_INPUT_STREAM), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ILLEGAL_ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BackupStorageErrors::ILLEGAL_ARGUMENT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RETRYABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BackupStorageErrors::RETRYABLE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DATA_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BackupStorageErrors::DATA_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BackupStorageErrors::SERVICE_INTERNAL), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == K_M_S_INVALID_KEY_USAGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BackupStorageErrors::K_M_S_INVALID_KEY_USAGE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace BackupStorageErrorMapper
} // namespace BackupStorage
} // namespace Aws
