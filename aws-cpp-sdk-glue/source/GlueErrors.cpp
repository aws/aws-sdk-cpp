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
#include <aws/glue/GlueErrors.h>

using namespace Aws::Client;
using namespace Aws::Glue;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace GlueErrorMapper
{

static const int OPERATION_TIMEOUT_HASH = HashingUtils::HashString("OperationTimeoutException");
static const int VERSION_MISMATCH_HASH = HashingUtils::HashString("VersionMismatchException");
static const int CRAWLER_NOT_RUNNING_HASH = HashingUtils::HashString("CrawlerNotRunningException");
static const int SCHEDULER_NOT_RUNNING_HASH = HashingUtils::HashString("SchedulerNotRunningException");
static const int IDEMPOTENT_PARAMETER_MISMATCH_HASH = HashingUtils::HashString("IdempotentParameterMismatchException");
static const int SCHEDULER_RUNNING_HASH = HashingUtils::HashString("SchedulerRunningException");
static const int ALREADY_EXISTS_HASH = HashingUtils::HashString("AlreadyExistsException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int CRAWLER_RUNNING_HASH = HashingUtils::HashString("CrawlerRunningException");
static const int CONDITION_CHECK_FAILURE_HASH = HashingUtils::HashString("ConditionCheckFailureException");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInputException");
static const int INTERNAL_SERVICE_HASH = HashingUtils::HashString("InternalServiceException");
static const int ENTITY_NOT_FOUND_HASH = HashingUtils::HashString("EntityNotFoundException");
static const int SCHEDULER_TRANSITIONING_HASH = HashingUtils::HashString("SchedulerTransitioningException");
static const int GLUE_ENCRYPTION_HASH = HashingUtils::HashString("GlueEncryptionException");
static const int CRAWLER_STOPPING_HASH = HashingUtils::HashString("CrawlerStoppingException");
static const int NO_SCHEDULE_HASH = HashingUtils::HashString("NoScheduleException");
static const int CONCURRENT_RUNS_EXCEEDED_HASH = HashingUtils::HashString("ConcurrentRunsExceededException");
static const int RESOURCE_NUMBER_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ResourceNumberLimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == OPERATION_TIMEOUT_HASH)
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
  else if (hashCode == SCHEDULER_RUNNING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::SCHEDULER_RUNNING), false);
  }
  else if (hashCode == ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::ALREADY_EXISTS), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == CRAWLER_RUNNING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::CRAWLER_RUNNING), false);
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
  else if (hashCode == ENTITY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::ENTITY_NOT_FOUND), false);
  }
  else if (hashCode == SCHEDULER_TRANSITIONING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::SCHEDULER_TRANSITIONING), false);
  }
  else if (hashCode == GLUE_ENCRYPTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::GLUE_ENCRYPTION), false);
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
  else if (hashCode == RESOURCE_NUMBER_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlueErrors::RESOURCE_NUMBER_LIMIT_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace GlueErrorMapper
} // namespace Glue
} // namespace Aws
