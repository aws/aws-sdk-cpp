/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datapipeline/DataPipelineErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::DataPipeline;

namespace Aws
{
namespace DataPipeline
{
namespace DataPipelineErrorMapper
{

static constexpr uint32_t INTERNAL_SERVICE_HASH = ConstExprHashingUtils::HashString("InternalServiceError");
static constexpr uint32_t TASK_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("TaskNotFoundException");
static constexpr uint32_t PIPELINE_DELETED_HASH = ConstExprHashingUtils::HashString("PipelineDeletedException");
static constexpr uint32_t PIPELINE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("PipelineNotFoundException");
static constexpr uint32_t INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
