/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/logs/CloudWatchLogsErrors.h>
#include <aws/logs/model/InvalidSequenceTokenException.h>
#include <aws/logs/model/DataAlreadyAcceptedException.h>
#include <aws/logs/model/MalformedQueryException.h>
#include <aws/logs/model/TooManyTagsException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CloudWatchLogs;
using namespace Aws::CloudWatchLogs::Model;

namespace Aws
{
namespace CloudWatchLogs
{
template<> AWS_CLOUDWATCHLOGS_API InvalidSequenceTokenException CloudWatchLogsError::GetModeledError()
{
  assert(this->GetErrorType() == CloudWatchLogsErrors::INVALID_SEQUENCE_TOKEN);
  return InvalidSequenceTokenException(this->GetJsonPayload().View());
}

template<> AWS_CLOUDWATCHLOGS_API DataAlreadyAcceptedException CloudWatchLogsError::GetModeledError()
{
  assert(this->GetErrorType() == CloudWatchLogsErrors::DATA_ALREADY_ACCEPTED);
  return DataAlreadyAcceptedException(this->GetJsonPayload().View());
}

template<> AWS_CLOUDWATCHLOGS_API MalformedQueryException CloudWatchLogsError::GetModeledError()
{
  assert(this->GetErrorType() == CloudWatchLogsErrors::MALFORMED_QUERY);
  return MalformedQueryException(this->GetJsonPayload().View());
}

template<> AWS_CLOUDWATCHLOGS_API TooManyTagsException CloudWatchLogsError::GetModeledError()
{
  assert(this->GetErrorType() == CloudWatchLogsErrors::TOO_MANY_TAGS);
  return TooManyTagsException(this->GetJsonPayload().View());
}

namespace CloudWatchLogsErrorMapper
{

static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidParameterException");
static constexpr uint32_t OPERATION_ABORTED_HASH = ConstExprHashingUtils::HashString("OperationAbortedException");
static constexpr uint32_t RESOURCE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ResourceAlreadyExistsException");
static constexpr uint32_t INVALID_SEQUENCE_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidSequenceTokenException");
static constexpr uint32_t DATA_ALREADY_ACCEPTED_HASH = ConstExprHashingUtils::HashString("DataAlreadyAcceptedException");
static constexpr uint32_t MALFORMED_QUERY_HASH = ConstExprHashingUtils::HashString("MalformedQueryException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTagsException");
static constexpr uint32_t INVALID_OPERATION_HASH = ConstExprHashingUtils::HashString("InvalidOperationException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchLogsErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchLogsErrors::TOO_MANY_TAGS), false);
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
