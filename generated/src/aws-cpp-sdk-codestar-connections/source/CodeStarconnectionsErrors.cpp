/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/codestar-connections/CodeStarconnectionsErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CodeStarconnections;

namespace Aws
{
namespace CodeStarconnections
{
namespace CodeStarconnectionsErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int SYNC_CONFIGURATION_STILL_EXISTS_HASH = HashingUtils::HashString("SyncConfigurationStillExistsException");
static const int CONDITIONAL_CHECK_FAILED_HASH = HashingUtils::HashString("ConditionalCheckFailedException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int UNSUPPORTED_PROVIDER_TYPE_HASH = HashingUtils::HashString("UnsupportedProviderTypeException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInputException");
static const int UPDATE_OUT_OF_SYNC_HASH = HashingUtils::HashString("UpdateOutOfSyncException");
static const int SYNC_BLOCKER_DOES_NOT_EXIST_HASH = HashingUtils::HashString("SyncBlockerDoesNotExistException");
static const int UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("UnsupportedOperationException");
static const int RESOURCE_UNAVAILABLE_HASH = HashingUtils::HashString("ResourceUnavailableException");
static const int RETRY_LATEST_COMMIT_FAILED_HASH = HashingUtils::HashString("RetryLatestCommitFailedException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarconnectionsErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarconnectionsErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarconnectionsErrors::RESOURCE_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SYNC_CONFIGURATION_STILL_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarconnectionsErrors::SYNC_CONFIGURATION_STILL_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CONDITIONAL_CHECK_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarconnectionsErrors::CONDITIONAL_CHECK_FAILED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarconnectionsErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == UNSUPPORTED_PROVIDER_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarconnectionsErrors::UNSUPPORTED_PROVIDER_TYPE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarconnectionsErrors::CONCURRENT_MODIFICATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarconnectionsErrors::INVALID_INPUT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UPDATE_OUT_OF_SYNC_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarconnectionsErrors::UPDATE_OUT_OF_SYNC), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SYNC_BLOCKER_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarconnectionsErrors::SYNC_BLOCKER_DOES_NOT_EXIST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarconnectionsErrors::UNSUPPORTED_OPERATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarconnectionsErrors::RESOURCE_UNAVAILABLE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RETRY_LATEST_COMMIT_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarconnectionsErrors::RETRY_LATEST_COMMIT_FAILED), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CodeStarconnectionsErrorMapper
} // namespace CodeStarconnections
} // namespace Aws
