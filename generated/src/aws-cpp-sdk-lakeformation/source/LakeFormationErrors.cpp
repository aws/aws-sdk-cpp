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

static constexpr uint32_t OPERATION_TIMEOUT_HASH = ConstExprHashingUtils::HashString("OperationTimeoutException");
static constexpr uint32_t RESOURCE_NOT_READY_HASH = ConstExprHashingUtils::HashString("ResourceNotReadyException");
static constexpr uint32_t TRANSACTION_CANCELED_HASH = ConstExprHashingUtils::HashString("TransactionCanceledException");
static constexpr uint32_t CONCURRENT_MODIFICATION_HASH = ConstExprHashingUtils::HashString("ConcurrentModificationException");
static constexpr uint32_t ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("AlreadyExistsException");
static constexpr uint32_t INVALID_INPUT_HASH = ConstExprHashingUtils::HashString("InvalidInputException");
static constexpr uint32_t INTERNAL_SERVICE_HASH = ConstExprHashingUtils::HashString("InternalServiceException");
static constexpr uint32_t TRANSACTION_COMMIT_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("TransactionCommitInProgressException");
static constexpr uint32_t ENTITY_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("EntityNotFoundException");
static constexpr uint32_t GLUE_ENCRYPTION_HASH = ConstExprHashingUtils::HashString("GlueEncryptionException");
static constexpr uint32_t PERMISSION_TYPE_MISMATCH_HASH = ConstExprHashingUtils::HashString("PermissionTypeMismatchException");
static constexpr uint32_t RESOURCE_NUMBER_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ResourceNumberLimitExceededException");
static constexpr uint32_t STATISTICS_NOT_READY_YET_HASH = ConstExprHashingUtils::HashString("StatisticsNotReadyYetException");
static constexpr uint32_t EXPIRED_HASH = ConstExprHashingUtils::HashString("ExpiredException");
static constexpr uint32_t WORK_UNITS_NOT_READY_YET_HASH = ConstExprHashingUtils::HashString("WorkUnitsNotReadyYetException");
static constexpr uint32_t TRANSACTION_COMMITTED_HASH = ConstExprHashingUtils::HashString("TransactionCommittedException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
