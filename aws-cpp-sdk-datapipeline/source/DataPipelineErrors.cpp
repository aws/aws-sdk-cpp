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
#include <aws/datapipeline/DataPipelineErrors.h>

using namespace Aws::Client;
using namespace Aws::DataPipeline;
using namespace Aws::Utils;

namespace Aws
{
namespace DataPipeline
{
namespace DataPipelineErrorMapper
{

static const int INTERNAL_SERVICE_HASH = HashingUtils::HashString("InternalServiceError");
static const int TASK_NOT_FOUND_HASH = HashingUtils::HashString("TaskNotFoundException");
static const int PIPELINE_DELETED_HASH = HashingUtils::HashString("PipelineDeletedException");
static const int PIPELINE_NOT_FOUND_HASH = HashingUtils::HashString("PipelineNotFoundException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DataPipelineErrors::INTERNAL_SERVICE), false);
  }
  else if (hashCode == TASK_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DataPipelineErrors::TASK_NOT_FOUND), false);
  }
  else if (hashCode == PIPELINE_DELETED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DataPipelineErrors::PIPELINE_DELETED), false);
  }
  else if (hashCode == PIPELINE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DataPipelineErrors::PIPELINE_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DataPipelineErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DataPipelineErrorMapper
} // namespace DataPipeline
} // namespace Aws
