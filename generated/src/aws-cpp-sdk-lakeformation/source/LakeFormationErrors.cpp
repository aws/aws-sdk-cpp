/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lakeformation/LakeFormationErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::LakeFormation;

namespace Aws
{
namespace LakeFormation
{
namespace LakeFormationErrorMapper
{

static const int OPERATION_TIMEOUT_HASH = HashingUtils::HashString("OperationTimeoutException");
static const int RESOURCE_NOT_READY_HASH = HashingUtils::HashString("ResourceNotReadyException");
static const int TRANSACTION_CANCELED_HASH = HashingUtils::HashString("TransactionCanceledException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int ALREADY_EXISTS_HASH = HashingUtils::HashString("AlreadyExistsException");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInputException");
static const int INTERNAL_SERVICE_HASH = HashingUtils::HashString("InternalServiceException");
static const int TRANSACTION_COMMIT_IN_PROGRESS_HASH = HashingUtils::HashString("TransactionCommitInProgressException");
static const int ENTITY_NOT_FOUND_HASH = HashingUtils::HashString("EntityNotFoundException");
static const int GLUE_ENCRYPTION_HASH = HashingUtils::HashString("GlueEncryptionException");
static const int PERMISSION_TYPE_MISMATCH_HASH = HashingUtils::HashString("PermissionTypeMismatchException");
static const int RESOURCE_NUMBER_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ResourceNumberLimitExceededException");
static const int STATISTICS_NOT_READY_YET_HASH = HashingUtils::HashString("StatisticsNotReadyYetException");
static const int EXPIRED_HASH = HashingUtils::HashString("ExpiredException");
static const int WORK_UNITS_NOT_READY_YET_HASH = HashingUtils::HashString("WorkUnitsNotReadyYetException");
static const int TRANSACTION_COMMITTED_HASH = HashingUtils::HashString("TransactionCommittedException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == OPERATION_TIMEOUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LakeFormationErrors::OPERATION_TIMEOUT), false);
  }
  else if (hashCode == RESOURCE_NOT_READY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LakeFormationErrors::RESOURCE_NOT_READY), false);
  }
  else if (hashCode == TRANSACTION_CANCELED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LakeFormationErrors::TRANSACTION_CANCELED), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LakeFormationErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LakeFormationErrors::ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LakeFormationErrors::INVALID_INPUT), false);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LakeFormationErrors::INTERNAL_SERVICE), false);
  }
  else if (hashCode == TRANSACTION_COMMIT_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LakeFormationErrors::TRANSACTION_COMMIT_IN_PROGRESS), false);
  }
  else if (hashCode == ENTITY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LakeFormationErrors::ENTITY_NOT_FOUND), false);
  }
  else if (hashCode == GLUE_ENCRYPTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LakeFormationErrors::GLUE_ENCRYPTION), false);
  }
  else if (hashCode == PERMISSION_TYPE_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LakeFormationErrors::PERMISSION_TYPE_MISMATCH), false);
  }
  else if (hashCode == RESOURCE_NUMBER_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LakeFormationErrors::RESOURCE_NUMBER_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == STATISTICS_NOT_READY_YET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LakeFormationErrors::STATISTICS_NOT_READY_YET), false);
  }
  else if (hashCode == EXPIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LakeFormationErrors::EXPIRED), false);
  }
  else if (hashCode == WORK_UNITS_NOT_READY_YET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LakeFormationErrors::WORK_UNITS_NOT_READY_YET), false);
  }
  else if (hashCode == TRANSACTION_COMMITTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LakeFormationErrors::TRANSACTION_COMMITTED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace LakeFormationErrorMapper
} // namespace LakeFormation
} // namespace Aws
