﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/codepipeline/CodePipelineErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CodePipeline;

namespace Aws
{
namespace CodePipeline
{
namespace CodePipelineErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int DUPLICATED_STOP_REQUEST_HASH = HashingUtils::HashString("DuplicatedStopRequestException");
static const int INVALID_NONCE_HASH = HashingUtils::HashString("InvalidNonceException");
static const int INVALID_CLIENT_TOKEN_HASH = HashingUtils::HashString("InvalidClientTokenException");
static const int NOT_LATEST_PIPELINE_EXECUTION_HASH = HashingUtils::HashString("NotLatestPipelineExecutionException");
static const int INVALID_BLOCKER_DECLARATION_HASH = HashingUtils::HashString("InvalidBlockerDeclarationException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int INVALID_ACTION_DECLARATION_HASH = HashingUtils::HashString("InvalidActionDeclarationException");
static const int REQUEST_FAILED_HASH = HashingUtils::HashString("RequestFailedException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int PIPELINE_NAME_IN_USE_HASH = HashingUtils::HashString("PipelineNameInUseException");
static const int CONCURRENT_PIPELINE_EXECUTIONS_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ConcurrentPipelineExecutionsLimitExceededException");
static const int APPROVAL_ALREADY_COMPLETED_HASH = HashingUtils::HashString("ApprovalAlreadyCompletedException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int INVALID_STRUCTURE_HASH = HashingUtils::HashString("InvalidStructureException");
static const int PIPELINE_VERSION_NOT_FOUND_HASH = HashingUtils::HashString("PipelineVersionNotFoundException");
static const int CONDITION_NOT_OVERRIDABLE_HASH = HashingUtils::HashString("ConditionNotOverridableException");
static const int INVALID_WEBHOOK_FILTER_PATTERN_HASH = HashingUtils::HashString("InvalidWebhookFilterPatternException");
static const int PIPELINE_NOT_FOUND_HASH = HashingUtils::HashString("PipelineNotFoundException");
static const int OUTPUT_VARIABLES_SIZE_EXCEEDED_HASH = HashingUtils::HashString("OutputVariablesSizeExceededException");
static const int UNABLE_TO_ROLLBACK_STAGE_HASH = HashingUtils::HashString("UnableToRollbackStageException");
static const int ACTION_TYPE_NOT_FOUND_HASH = HashingUtils::HashString("ActionTypeNotFoundException");
static const int INVALID_TAGS_HASH = HashingUtils::HashString("InvalidTagsException");
static const int INVALID_APPROVAL_TOKEN_HASH = HashingUtils::HashString("InvalidApprovalTokenException");
static const int PIPELINE_EXECUTION_OUTDATED_HASH = HashingUtils::HashString("PipelineExecutionOutdatedException");
static const int ACTION_EXECUTION_NOT_FOUND_HASH = HashingUtils::HashString("ActionExecutionNotFoundException");
static const int JOB_NOT_FOUND_HASH = HashingUtils::HashString("JobNotFoundException");
static const int INVALID_JOB_HASH = HashingUtils::HashString("InvalidJobException");
static const int INVALID_ARN_HASH = HashingUtils::HashString("InvalidArnException");
static const int INVALID_JOB_STATE_HASH = HashingUtils::HashString("InvalidJobStateException");
static const int PIPELINE_EXECUTION_NOT_STOPPABLE_HASH = HashingUtils::HashString("PipelineExecutionNotStoppableException");
static const int PIPELINE_EXECUTION_NOT_FOUND_HASH = HashingUtils::HashString("PipelineExecutionNotFoundException");
static const int INVALID_WEBHOOK_AUTHENTICATION_PARAMETERS_HASH = HashingUtils::HashString("InvalidWebhookAuthenticationParametersException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int WEBHOOK_NOT_FOUND_HASH = HashingUtils::HashString("WebhookNotFoundException");
static const int INVALID_STAGE_DECLARATION_HASH = HashingUtils::HashString("InvalidStageDeclarationException");
static const int STAGE_NOT_FOUND_HASH = HashingUtils::HashString("StageNotFoundException");
static const int STAGE_NOT_RETRYABLE_HASH = HashingUtils::HashString("StageNotRetryableException");
static const int ACTION_NOT_FOUND_HASH = HashingUtils::HashString("ActionNotFoundException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DUPLICATED_STOP_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::DUPLICATED_STOP_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_NONCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_NONCE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_CLIENT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_CLIENT_TOKEN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NOT_LATEST_PIPELINE_EXECUTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::NOT_LATEST_PIPELINE_EXECUTION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_BLOCKER_DECLARATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_BLOCKER_DECLARATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == INVALID_ACTION_DECLARATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_ACTION_DECLARATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == REQUEST_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::REQUEST_FAILED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::CONCURRENT_MODIFICATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PIPELINE_NAME_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::PIPELINE_NAME_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CONCURRENT_PIPELINE_EXECUTIONS_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::CONCURRENT_PIPELINE_EXECUTIONS_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == APPROVAL_ALREADY_COMPLETED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::APPROVAL_ALREADY_COMPLETED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_NEXT_TOKEN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_STRUCTURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_STRUCTURE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PIPELINE_VERSION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::PIPELINE_VERSION_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CONDITION_NOT_OVERRIDABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::CONDITION_NOT_OVERRIDABLE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_WEBHOOK_FILTER_PATTERN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_WEBHOOK_FILTER_PATTERN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PIPELINE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::PIPELINE_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == OUTPUT_VARIABLES_SIZE_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::OUTPUT_VARIABLES_SIZE_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNABLE_TO_ROLLBACK_STAGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::UNABLE_TO_ROLLBACK_STAGE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ACTION_TYPE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::ACTION_TYPE_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_TAGS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_APPROVAL_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_APPROVAL_TOKEN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PIPELINE_EXECUTION_OUTDATED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::PIPELINE_EXECUTION_OUTDATED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ACTION_EXECUTION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::ACTION_EXECUTION_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == JOB_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::JOB_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_JOB_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_JOB), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_ARN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_JOB_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_JOB_STATE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PIPELINE_EXECUTION_NOT_STOPPABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::PIPELINE_EXECUTION_NOT_STOPPABLE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PIPELINE_EXECUTION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::PIPELINE_EXECUTION_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_WEBHOOK_AUTHENTICATION_PARAMETERS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_WEBHOOK_AUTHENTICATION_PARAMETERS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::TOO_MANY_TAGS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == WEBHOOK_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::WEBHOOK_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_STAGE_DECLARATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_STAGE_DECLARATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == STAGE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::STAGE_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == STAGE_NOT_RETRYABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::STAGE_NOT_RETRYABLE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ACTION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::ACTION_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CodePipelineErrorMapper
} // namespace CodePipeline
} // namespace Aws
