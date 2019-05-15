/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/codepipeline/CodePipelineErrors.h>

using namespace Aws::Client;
using namespace Aws::CodePipeline;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace CodePipelineErrorMapper
{

static const int INVALID_NONCE_HASH = HashingUtils::HashString("InvalidNonceException");
static const int INVALID_CLIENT_TOKEN_HASH = HashingUtils::HashString("InvalidClientTokenException");
static const int NOT_LATEST_PIPELINE_EXECUTION_HASH = HashingUtils::HashString("NotLatestPipelineExecutionException");
static const int INVALID_BLOCKER_DECLARATION_HASH = HashingUtils::HashString("InvalidBlockerDeclarationException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int INVALID_ACTION_DECLARATION_HASH = HashingUtils::HashString("InvalidActionDeclarationException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int PIPELINE_NAME_IN_USE_HASH = HashingUtils::HashString("PipelineNameInUseException");
static const int APPROVAL_ALREADY_COMPLETED_HASH = HashingUtils::HashString("ApprovalAlreadyCompletedException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int INVALID_STRUCTURE_HASH = HashingUtils::HashString("InvalidStructureException");
static const int PIPELINE_VERSION_NOT_FOUND_HASH = HashingUtils::HashString("PipelineVersionNotFoundException");
static const int INVALID_WEBHOOK_FILTER_PATTERN_HASH = HashingUtils::HashString("InvalidWebhookFilterPatternException");
static const int PIPELINE_NOT_FOUND_HASH = HashingUtils::HashString("PipelineNotFoundException");
static const int ACTION_TYPE_NOT_FOUND_HASH = HashingUtils::HashString("ActionTypeNotFoundException");
static const int INVALID_TAGS_HASH = HashingUtils::HashString("InvalidTagsException");
static const int INVALID_APPROVAL_TOKEN_HASH = HashingUtils::HashString("InvalidApprovalTokenException");
static const int JOB_NOT_FOUND_HASH = HashingUtils::HashString("JobNotFoundException");
static const int INVALID_JOB_HASH = HashingUtils::HashString("InvalidJobException");
static const int INVALID_ARN_HASH = HashingUtils::HashString("InvalidArnException");
static const int INVALID_JOB_STATE_HASH = HashingUtils::HashString("InvalidJobStateException");
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

  if (hashCode == INVALID_NONCE_HASH)
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
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_ACTION_DECLARATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_ACTION_DECLARATION), false);
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
