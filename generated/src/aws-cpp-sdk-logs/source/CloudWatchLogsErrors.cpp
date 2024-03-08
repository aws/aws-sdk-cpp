/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/logs/CloudWatchLogsErrors.h>
#include <aws/logs/model/DataAlreadyAcceptedException.h>
#include <aws/logs/model/MalformedQueryException.h>
#include <aws/logs/model/InvalidSequenceTokenException.h>
#include <aws/logs/model/TooManyTagsException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CloudWatchLogs;
using namespace Aws::CloudWatchLogs::Model;

namespace Aws
{
namespace CloudWatchLogs
{
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

template<> AWS_CLOUDWATCHLOGS_API InvalidSequenceTokenException CloudWatchLogsError::GetModeledError()
{
  assert(this->GetErrorType() == CloudWatchLogsErrors::INVALID_SEQUENCE_TOKEN);
  return InvalidSequenceTokenException(this->GetJsonPayload().View());
}

template<> AWS_CLOUDWATCHLOGS_API TooManyTagsException CloudWatchLogsError::GetModeledError()
{
  assert(this->GetErrorType() == CloudWatchLogsErrors::TOO_MANY_TAGS);
  return TooManyTagsException(this->GetJsonPayload().View());
}

namespace CloudWatchLogsErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int OPERATION_ABORTED_HASH = HashingUtils::HashString("OperationAbortedException");
static const int INVALID_SEQUENCE_TOKEN_HASH = HashingUtils::HashString("InvalidSequenceTokenException");
static const int DATA_ALREADY_ACCEPTED_HASH = HashingUtils::HashString("DataAlreadyAcceptedException");
static const int MALFORMED_QUERY_HASH = HashingUtils::HashString("MalformedQueryException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int INVALID_OPERATION_HASH = HashingUtils::HashString("InvalidOperationException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchLogsErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchLogsErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchLogsErrors::RESOURCE_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchLogsErrors::INVALID_PARAMETER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == OPERATION_ABORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchLogsErrors::OPERATION_ABORTED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_SEQUENCE_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchLogsErrors::INVALID_SEQUENCE_TOKEN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DATA_ALREADY_ACCEPTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchLogsErrors::DATA_ALREADY_ACCEPTED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == MALFORMED_QUERY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchLogsErrors::MALFORMED_QUERY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchLogsErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchLogsErrors::TOO_MANY_TAGS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchLogsErrors::INVALID_OPERATION), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudWatchLogsErrorMapper
} // namespace CloudWatchLogs
} // namespace Aws
