/**
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

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t DUPLICATED_STOP_REQUEST_HASH = ConstExprHashingUtils::HashString("DuplicatedStopRequestException");
static constexpr uint32_t INVALID_NONCE_HASH = ConstExprHashingUtils::HashString("InvalidNonceException");
static constexpr uint32_t INVALID_CLIENT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidClientTokenException");
static constexpr uint32_t NOT_LATEST_PIPELINE_EXECUTION_HASH = ConstExprHashingUtils::HashString("NotLatestPipelineExecutionException");
static constexpr uint32_t INVALID_BLOCKER_DECLARATION_HASH = ConstExprHashingUtils::HashString("InvalidBlockerDeclarationException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t INVALID_ACTION_DECLARATION_HASH = ConstExprHashingUtils::HashString("InvalidActionDeclarationException");
static constexpr uint32_t REQUEST_FAILED_HASH = ConstExprHashingUtils::HashString("RequestFailedException");
static constexpr uint32_t CONCURRENT_MODIFICATION_HASH = ConstExprHashingUtils::HashString("ConcurrentModificationException");
static constexpr uint32_t PIPELINE_NAME_IN_USE_HASH = ConstExprHashingUtils::HashString("PipelineNameInUseException");
static constexpr uint32_t APPROVAL_ALREADY_COMPLETED_HASH = ConstExprHashingUtils::HashString("ApprovalAlreadyCompletedException");
static constexpr uint32_t INVALID_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidNextTokenException");
static constexpr uint32_t INVALID_STRUCTURE_HASH = ConstExprHashingUtils::HashString("InvalidStructureException");
static constexpr uint32_t PIPELINE_VERSION_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("PipelineVersionNotFoundException");
static constexpr uint32_t INVALID_WEBHOOK_FILTER_PATTERN_HASH = ConstExprHashingUtils::HashString("InvalidWebhookFilterPatternException");
static constexpr uint32_t PIPELINE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("PipelineNotFoundException");
static constexpr uint32_t OUTPUT_VARIABLES_SIZE_EXCEEDED_HASH = ConstExprHashingUtils::HashString("OutputVariablesSizeExceededException");
static constexpr uint32_t ACTION_TYPE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ActionTypeNotFoundException");
static constexpr uint32_t INVALID_TAGS_HASH = ConstExprHashingUtils::HashString("InvalidTagsException");
static constexpr uint32_t INVALID_APPROVAL_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidApprovalTokenException");
static constexpr uint32_t JOB_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("JobNotFoundException");
static constexpr uint32_t INVALID_JOB_HASH = ConstExprHashingUtils::HashString("InvalidJobException");
static constexpr uint32_t INVALID_ARN_HASH = ConstExprHashingUtils::HashString("InvalidArnException");
static constexpr uint32_t INVALID_JOB_STATE_HASH = ConstExprHashingUtils::HashString("InvalidJobStateException");
static constexpr uint32_t PIPELINE_EXECUTION_NOT_STOPPABLE_HASH = ConstExprHashingUtils::HashString("PipelineExecutionNotStoppableException");
static constexpr uint32_t PIPELINE_EXECUTION_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("PipelineExecutionNotFoundException");
static constexpr uint32_t INVALID_WEBHOOK_AUTHENTICATION_PARAMETERS_HASH = ConstExprHashingUtils::HashString("InvalidWebhookAuthenticationParametersException");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTagsException");
static constexpr uint32_t WEBHOOK_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("WebhookNotFoundException");
static constexpr uint32_t INVALID_STAGE_DECLARATION_HASH = ConstExprHashingUtils::HashString("InvalidStageDeclarationException");
static constexpr uint32_t STAGE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("StageNotFoundException");
static constexpr uint32_t STAGE_NOT_RETRYABLE_HASH = ConstExprHashingUtils::HashString("StageNotRetryableException");
static constexpr uint32_t ACTION_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ActionNotFoundException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::CONFLICT), false);
  }
  else if (hashCode == DUPLICATED_STOP_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::DUPLICATED_STOP_REQUEST), false);
  }
  else if (hashCode == INVALID_NONCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_NONCE), false);
  }
  else if (hashCode == INVALID_CLIENT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_CLIENT_TOKEN), false);
  }
  else if (hashCode == NOT_LATEST_PIPELINE_EXECUTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::NOT_LATEST_PIPELINE_EXECUTION), false);
  }
  else if (hashCode == INVALID_BLOCKER_DECLARATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_BLOCKER_DECLARATION), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == INVALID_ACTION_DECLARATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_ACTION_DECLARATION), false);
  }
  else if (hashCode == REQUEST_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::REQUEST_FAILED), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == PIPELINE_NAME_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::PIPELINE_NAME_IN_USE), false);
  }
  else if (hashCode == APPROVAL_ALREADY_COMPLETED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::APPROVAL_ALREADY_COMPLETED), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == INVALID_STRUCTURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_STRUCTURE), false);
  }
  else if (hashCode == PIPELINE_VERSION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::PIPELINE_VERSION_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_WEBHOOK_FILTER_PATTERN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_WEBHOOK_FILTER_PATTERN), false);
  }
  else if (hashCode == PIPELINE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::PIPELINE_NOT_FOUND), false);
  }
  else if (hashCode == OUTPUT_VARIABLES_SIZE_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::OUTPUT_VARIABLES_SIZE_EXCEEDED), false);
  }
  else if (hashCode == ACTION_TYPE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::ACTION_TYPE_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_TAGS), false);
  }
  else if (hashCode == INVALID_APPROVAL_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_APPROVAL_TOKEN), false);
  }
  else if (hashCode == JOB_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::JOB_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_JOB_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_JOB), false);
  }
  else if (hashCode == INVALID_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_ARN), false);
  }
  else if (hashCode == INVALID_JOB_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_JOB_STATE), false);
  }
  else if (hashCode == PIPELINE_EXECUTION_NOT_STOPPABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::PIPELINE_EXECUTION_NOT_STOPPABLE), false);
  }
  else if (hashCode == PIPELINE_EXECUTION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::PIPELINE_EXECUTION_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_WEBHOOK_AUTHENTICATION_PARAMETERS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_WEBHOOK_AUTHENTICATION_PARAMETERS), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == WEBHOOK_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::WEBHOOK_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_STAGE_DECLARATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_STAGE_DECLARATION), false);
  }
  else if (hashCode == STAGE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::STAGE_NOT_FOUND), false);
  }
  else if (hashCode == STAGE_NOT_RETRYABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::STAGE_NOT_RETRYABLE), false);
  }
  else if (hashCode == ACTION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::ACTION_NOT_FOUND), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CodePipelineErrorMapper
} // namespace CodePipeline
} // namespace Aws
