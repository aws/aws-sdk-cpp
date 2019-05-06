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
#include <aws/states/SFNErrors.h>

using namespace Aws::Client;
using namespace Aws::SFN;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace SFNErrorMapper
{

static const int INVALID_ARN_HASH = HashingUtils::HashString("InvalidArn");
static const int TASK_DOES_NOT_EXIST_HASH = HashingUtils::HashString("TaskDoesNotExist");
static const int EXECUTION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ExecutionLimitExceeded");
static const int ACTIVITY_DOES_NOT_EXIST_HASH = HashingUtils::HashString("ActivityDoesNotExist");
static const int INVALID_TOKEN_HASH = HashingUtils::HashString("InvalidToken");
static const int ACTIVITY_WORKER_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ActivityWorkerLimitExceeded");
static const int INVALID_NAME_HASH = HashingUtils::HashString("InvalidName");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTags");
static const int TASK_TIMED_OUT_HASH = HashingUtils::HashString("TaskTimedOut");
static const int STATE_MACHINE_DELETING_HASH = HashingUtils::HashString("StateMachineDeleting");
static const int INVALID_EXECUTION_INPUT_HASH = HashingUtils::HashString("InvalidExecutionInput");
static const int EXECUTION_DOES_NOT_EXIST_HASH = HashingUtils::HashString("ExecutionDoesNotExist");
static const int STATE_MACHINE_DOES_NOT_EXIST_HASH = HashingUtils::HashString("StateMachineDoesNotExist");
static const int INVALID_DEFINITION_HASH = HashingUtils::HashString("InvalidDefinition");
static const int EXECUTION_ALREADY_EXISTS_HASH = HashingUtils::HashString("ExecutionAlreadyExists");
static const int ACTIVITY_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ActivityLimitExceeded");
static const int STATE_MACHINE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("StateMachineLimitExceeded");
static const int INVALID_OUTPUT_HASH = HashingUtils::HashString("InvalidOutput");
static const int MISSING_REQUIRED_PARAMETER_HASH = HashingUtils::HashString("MissingRequiredParameter");
static const int STATE_MACHINE_ALREADY_EXISTS_HASH = HashingUtils::HashString("StateMachineAlreadyExists");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::INVALID_ARN), false);
  }
  else if (hashCode == TASK_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::TASK_DOES_NOT_EXIST), false);
  }
  else if (hashCode == EXECUTION_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::EXECUTION_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == ACTIVITY_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::ACTIVITY_DOES_NOT_EXIST), false);
  }
  else if (hashCode == INVALID_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::INVALID_TOKEN), false);
  }
  else if (hashCode == ACTIVITY_WORKER_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::ACTIVITY_WORKER_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::INVALID_NAME), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == TASK_TIMED_OUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::TASK_TIMED_OUT), false);
  }
  else if (hashCode == STATE_MACHINE_DELETING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::STATE_MACHINE_DELETING), false);
  }
  else if (hashCode == INVALID_EXECUTION_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::INVALID_EXECUTION_INPUT), false);
  }
  else if (hashCode == EXECUTION_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::EXECUTION_DOES_NOT_EXIST), false);
  }
  else if (hashCode == STATE_MACHINE_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::STATE_MACHINE_DOES_NOT_EXIST), false);
  }
  else if (hashCode == INVALID_DEFINITION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::INVALID_DEFINITION), false);
  }
  else if (hashCode == EXECUTION_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::EXECUTION_ALREADY_EXISTS), false);
  }
  else if (hashCode == ACTIVITY_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::ACTIVITY_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == STATE_MACHINE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::STATE_MACHINE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_OUTPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::INVALID_OUTPUT), false);
  }
  else if (hashCode == MISSING_REQUIRED_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::MISSING_REQUIRED_PARAMETER), false);
  }
  else if (hashCode == STATE_MACHINE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::STATE_MACHINE_ALREADY_EXISTS), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SFNErrorMapper
} // namespace SFN
} // namespace Aws
