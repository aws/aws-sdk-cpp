/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/dynamodb/DynamoDBErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::DynamoDB;

namespace Aws
{
namespace DynamoDB
{
namespace DynamoDBErrorMapper
{

static const int CONDITIONAL_CHECK_FAILED_HASH = HashingUtils::HashString("ConditionalCheckFailedException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int REQUEST_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("RequestLimitExceeded");
static const int PROVISIONED_THROUGHPUT_EXCEEDED_HASH = HashingUtils::HashString("ProvisionedThroughputExceededException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONDITIONAL_CHECK_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::CONDITIONAL_CHECK_FAILED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == REQUEST_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::REQUEST_LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == PROVISIONED_THROUGHPUT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::PROVISIONED_THROUGHPUT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::RESOURCE_IN_USE), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DynamoDBErrorMapper
} // namespace DynamoDB
} // namespace Aws
