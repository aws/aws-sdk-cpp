/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/GlueErrors.h>
#include <aws/glue/model/InvalidInputException.h>
#include <aws/glue/model/FederatedResourceAlreadyExistsException.h>
#include <aws/glue/model/EntityNotFoundException.h>
#include <aws/glue/model/FederationSourceException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Glue;
using namespace Aws::Glue::Model;

namespace Aws
{
namespace Glue
{
template<> AWS_GLUE_API InvalidInputException GlueError::GetModeledError()
{
  assert(this->GetErrorType() == GlueErrors::INVALID_INPUT);
  return InvalidInputException(this->GetJsonPayload().View());
}

template<> AWS_GLUE_API FederatedResourceAlreadyExistsException GlueError::GetModeledError()
{
  assert(this->GetErrorType() == GlueErrors::FEDERATED_RESOURCE_ALREADY_EXISTS);
  return FederatedResourceAlreadyExistsException(this->GetJsonPayload().View());
}

template<> AWS_GLUE_API EntityNotFoundException GlueError::GetModeledError()
{
  assert(this->GetErrorType() == GlueErrors::ENTITY_NOT_FOUND);
  return EntityNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_GLUE_API FederationSourceException GlueError::GetModeledError()
{
  assert(this->GetErrorType() == GlueErrors::FEDERATION_SOURCE);
  return FederationSourceException(this->GetJsonPayload().View());
}

namespace GlueErrorMapper
{

static constexpr uint32_t RESOURCE_NOT_READY_HASH = ConstExprHashingUtils::HashString("ResourceNotReadyException");
static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t FEDERATION_SOURCE_RETRYABLE_HASH = ConstExprHashingUtils::HashString("FederationSourceRetryableException");
static constexpr uint32_t ILLEGAL_BLUEPRINT_STATE_HASH = ConstExprHashingUtils::HashString("IllegalBlueprintStateException");
static constexpr uint32_t SCHEDULER_RUNNING_HASH = ConstExprHashingUtils::HashString("SchedulerRunningException");
static constexpr uint32_t CONCURRENT_MODIFICATION_HASH = ConstExprHashingUtils::HashString("ConcurrentModificationException");
static constexpr uint32_t CRAWLER_RUNNING_HASH = ConstExprHashingUtils::HashString("CrawlerRunningException");
static constexpr uint32_t GLUE_ENCRYPTION_HASH = ConstExprHashingUtils::HashString("GlueEncryptionException");
static constexpr uint32_t M_L_TRANSFORM_NOT_READY_HASH = ConstExprHashingUtils::HashString("MLTransformNotReadyException");
static constexpr uint32_t PERMISSION_TYPE_MISMATCH_HASH = ConstExprHashingUtils::HashString("PermissionTypeMismatchException");
static constexpr uint32_t RESOURCE_NUMBER_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ResourceNumberLimitExceededException");
static constexpr uint32_t OPERATION_TIMEOUT_HASH = ConstExprHashingUtils::HashString("OperationTimeoutException");
static constexpr uint32_t VERSION_MISMATCH_HASH = ConstExprHashingUtils::HashString("VersionMismatchException");
static constexpr uint32_t CRAWLER_NOT_RUNNING_HASH = ConstExprHashingUtils::HashString("CrawlerNotRunningException");
static constexpr uint32_t SCHEDULER_NOT_RUNNING_HASH = ConstExprHashingUtils::HashString("SchedulerNotRunningException");
static constexpr uint32_t IDEMPOTENT_PARAMETER_MISMATCH_HASH = ConstExprHashingUtils::HashString("IdempotentParameterMismatchException");
static constexpr uint32_t ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("AlreadyExistsException");
static constexpr uint32_t CONDITION_CHECK_FAILURE_HASH = ConstExprHashingUtils::HashString("ConditionCheckFailureException");
static constexpr uint32_t INVALID_INPUT_HASH = ConstExprHashingUtils::HashString("InvalidInputException");
static constexpr uint32_t INTERNAL_SERVICE_HASH = ConstExprHashingUtils::HashString("InternalServiceException");
static constexpr uint32_t FEDERATED_RESOURCE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("FederatedResourceAlreadyExistsException");
static constexpr uint32_t ILLEGAL_WORKFLOW_STATE_HASH = ConstExprHashingUtils::HashString("IllegalWorkflowStateException");
static constexpr uint32_t ENTITY_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("EntityNotFoundException");
static constexpr uint32_t INVALID_STATE_HASH = ConstExprHashingUtils::HashString("InvalidStateException");
static constexpr uint32_t SCHEDULER_TRANSITIONING_HASH = ConstExprHashingUtils::HashString("SchedulerTransitioningException");
static constexpr uint32_t CRAWLER_STOPPING_HASH = ConstExprHashingUtils::HashString("CrawlerStoppingException");
static constexpr uint32_t NO_SCHEDULE_HASH = ConstExprHashingUtils::HashString("NoScheduleException");
static constexpr uint32_t CONCURRENT_RUNS_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ConcurrentRunsExceededException");
static constexpr uint32_t ILLEGAL_SESSION_STATE_HASH = ConstExprHashingUtils::HashString("IllegalSessionStateException");
static constexpr uint32_t FEDERATION_SOURCE_HASH = ConstExprHashingUtils::HashString("FederationSourceException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_NOT_READY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::RESOURCE_NOT_READY), false);
  }
  else if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::CONFLICT), false);
  }
  else if (hashCode == FEDERATION_SOURCE_RETRYABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::FEDERATION_SOURCE_RETRYABLE), false);
  }
  else if (hashCode == ILLEGAL_BLUEPRINT_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::ILLEGAL_BLUEPRINT_STATE), false);
  }
  else if (hashCode == SCHEDULER_RUNNING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::SCHEDULER_RUNNING), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == CRAWLER_RUNNING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::CRAWLER_RUNNING), false);
  }
  else if (hashCode == GLUE_ENCRYPTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::GLUE_ENCRYPTION), false);
  }
  else if (hashCode == M_L_TRANSFORM_NOT_READY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::M_L_TRANSFORM_NOT_READY), false);
  }
  else if (hashCode == PERMISSION_TYPE_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::PERMISSION_TYPE_MISMATCH), false);
  }
  else if (hashCode == RESOURCE_NUMBER_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::RESOURCE_NUMBER_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == OPERATION_TIMEOUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::OPERATION_TIMEOUT), false);
  }
  else if (hashCode == VERSION_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::VERSION_MISMATCH), false);
  }
  else if (hashCode == CRAWLER_NOT_RUNNING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::CRAWLER_NOT_RUNNING), false);
  }
  else if (hashCode == SCHEDULER_NOT_RUNNING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::SCHEDULER_NOT_RUNNING), false);
  }
  else if (hashCode == IDEMPOTENT_PARAMETER_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::IDEMPOTENT_PARAMETER_MISMATCH), false);
  }
  else if (hashCode == ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::ALREADY_EXISTS), false);
  }
  else if (hashCode == CONDITION_CHECK_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::CONDITION_CHECK_FAILURE), false);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::INVALID_INPUT), false);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::INTERNAL_SERVICE), false);
  }
  else if (hashCode == FEDERATED_RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::FEDERATED_RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == ILLEGAL_WORKFLOW_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::ILLEGAL_WORKFLOW_STATE), false);
  }
  else if (hashCode == ENTITY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::ENTITY_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::INVALID_STATE), false);
  }
  else if (hashCode == SCHEDULER_TRANSITIONING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::SCHEDULER_TRANSITIONING), false);
  }
  else if (hashCode == CRAWLER_STOPPING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::CRAWLER_STOPPING), false);
  }
  else if (hashCode == NO_SCHEDULE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::NO_SCHEDULE), false);
  }
  else if (hashCode == CONCURRENT_RUNS_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::CONCURRENT_RUNS_EXCEEDED), false);
  }
  else if (hashCode == ILLEGAL_SESSION_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::ILLEGAL_SESSION_STATE), false);
  }
  else if (hashCode == FEDERATION_SOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::FEDERATION_SOURCE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace GlueErrorMapper
} // namespace Glue
} // namespace Aws
