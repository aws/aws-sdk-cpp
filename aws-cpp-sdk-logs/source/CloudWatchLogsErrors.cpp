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
#include <aws/logs/CloudWatchLogsErrors.h>

using namespace Aws::Client;
using namespace Aws::CloudWatchLogs;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace CloudWatchLogsErrorMapper
{

static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int OPERATION_ABORTED_HASH = HashingUtils::HashString("OperationAbortedException");
static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int INVALID_SEQUENCE_TOKEN_HASH = HashingUtils::HashString("InvalidSequenceTokenException");
static const int DATA_ALREADY_ACCEPTED_HASH = HashingUtils::HashString("DataAlreadyAcceptedException");
static const int MALFORMED_QUERY_HASH = HashingUtils::HashString("MalformedQueryException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int INVALID_OPERATION_HASH = HashingUtils::HashString("InvalidOperationException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchLogsErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == OPERATION_ABORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchLogsErrors::OPERATION_ABORTED), false);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchLogsErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_SEQUENCE_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchLogsErrors::INVALID_SEQUENCE_TOKEN), false);
  }
  else if (hashCode == DATA_ALREADY_ACCEPTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchLogsErrors::DATA_ALREADY_ACCEPTED), false);
  }
  else if (hashCode == MALFORMED_QUERY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchLogsErrors::MALFORMED_QUERY), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchLogsErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchLogsErrors::INVALID_OPERATION), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudWatchLogsErrorMapper
} // namespace CloudWatchLogs
} // namespace Aws
