﻿/**
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

static const int RESOURCE_NOT_READY_HASH = HashingUtils::HashString("ResourceNotReadyException");
static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int FEDERATION_SOURCE_RETRYABLE_HASH = HashingUtils::HashString("FederationSourceRetryableException");
static const int ILLEGAL_BLUEPRINT_STATE_HASH = HashingUtils::HashString("IllegalBlueprintStateException");
static const int SCHEDULER_RUNNING_HASH = HashingUtils::HashString("SchedulerRunningException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int CRAWLER_RUNNING_HASH = HashingUtils::HashString("CrawlerRunningException");
static const int GLUE_ENCRYPTION_HASH = HashingUtils::HashString("GlueEncryptionException");
static const int M_L_TRANSFORM_NOT_READY_HASH = HashingUtils::HashString("MLTransformNotReadyException");
static const int PERMISSION_TYPE_MISMATCH_HASH = HashingUtils::HashString("PermissionTypeMismatchException");
static const int RESOURCE_NUMBER_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ResourceNumberLimitExceededException");
static const int OPERATION_TIMEOUT_HASH = HashingUtils::HashString("OperationTimeoutException");
static const int VERSION_MISMATCH_HASH = HashingUtils::HashString("VersionMismatchException");
static const int CRAWLER_NOT_RUNNING_HASH = HashingUtils::HashString("CrawlerNotRunningException");
static const int SCHEDULER_NOT_RUNNING_HASH = HashingUtils::HashString("SchedulerNotRunningException");
static const int IDEMPOTENT_PARAMETER_MISMATCH_HASH = HashingUtils::HashString("IdempotentParameterMismatchException");
static const int ALREADY_EXISTS_HASH = HashingUtils::HashString("AlreadyExistsException");
static const int CONDITION_CHECK_FAILURE_HASH = HashingUtils::HashString("ConditionCheckFailureException");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInputException");
static const int INTERNAL_SERVICE_HASH = HashingUtils::HashString("InternalServiceException");
static const int FEDERATED_RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("FederatedResourceAlreadyExistsException");
static const int ILLEGAL_WORKFLOW_STATE_HASH = HashingUtils::HashString("IllegalWorkflowStateException");
static const int ENTITY_NOT_FOUND_HASH = HashingUtils::HashString("EntityNotFoundException");
static const int INVALID_STATE_HASH = HashingUtils::HashString("InvalidStateException");
static const int SCHEDULER_TRANSITIONING_HASH = HashingUtils::HashString("SchedulerTransitioningException");
static const int CRAWLER_STOPPING_HASH = HashingUtils::HashString("CrawlerStoppingException");
static const int NO_SCHEDULE_HASH = HashingUtils::HashString("NoScheduleException");
static const int CONCURRENT_RUNS_EXCEEDED_HASH = HashingUtils::HashString("ConcurrentRunsExceededException");
static const int ILLEGAL_SESSION_STATE_HASH = HashingUtils::HashString("IllegalSessionStateException");
static const int FEDERATION_SOURCE_HASH = HashingUtils::HashString("FederationSourceException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

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
