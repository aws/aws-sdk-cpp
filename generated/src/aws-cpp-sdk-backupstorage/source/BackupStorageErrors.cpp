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

static constexpr uint32_t NOT_READABLE_INPUT_STREAM_HASH = ConstExprHashingUtils::HashString("NotReadableInputStreamException");
static constexpr uint32_t ILLEGAL_ARGUMENT_HASH = ConstExprHashingUtils::HashString("IllegalArgumentException");
static constexpr uint32_t RETRYABLE_HASH = ConstExprHashingUtils::HashString("RetryableException");
static constexpr uint32_t DATA_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("DataAlreadyExistsException");
static constexpr uint32_t SERVICE_INTERNAL_HASH = ConstExprHashingUtils::HashString("ServiceInternalException");
static constexpr uint32_t K_M_S_INVALID_KEY_USAGE_HASH = ConstExprHashingUtils::HashString("KMSInvalidKeyUsageException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == NOT_READABLE_INPUT_STREAM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BackupStorageErrors::NOT_READABLE_INPUT_STREAM), false);
  }
  else if (hashCode == ILLEGAL_ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BackupStorageErrors::ILLEGAL_ARGUMENT), false);
  }
  else if (hashCode == RETRYABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BackupStorageErrors::RETRYABLE), false);
  }
  else if (hashCode == DATA_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BackupStorageErrors::DATA_ALREADY_EXISTS), false);
  }
  else if (hashCode == SERVICE_INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BackupStorageErrors::SERVICE_INTERNAL), false);
  }
  else if (hashCode == K_M_S_INVALID_KEY_USAGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BackupStorageErrors::K_M_S_INVALID_KEY_USAGE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace BackupStorageErrorMapper
} // namespace BackupStorage
} // namespace Aws
