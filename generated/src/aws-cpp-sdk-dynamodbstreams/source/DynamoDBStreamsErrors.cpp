/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/dynamodbstreams/DynamoDBStreamsErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::DynamoDBStreams;

namespace Aws
{
namespace DynamoDBStreams
{
namespace DynamoDBStreamsErrorMapper
{

static constexpr uint32_t TRIMMED_DATA_ACCESS_HASH = ConstExprHashingUtils::HashString("TrimmedDataAccessException");
static constexpr uint32_t EXPIRED_ITERATOR_HASH = ConstExprHashingUtils::HashString("ExpiredIteratorException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == TRIMMED_DATA_ACCESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBStreamsErrors::TRIMMED_DATA_ACCESS), false);
  }
  else if (hashCode == EXPIRED_ITERATOR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBStreamsErrors::EXPIRED_ITERATOR), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBStreamsErrors::LIMIT_EXCEEDED), true);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DynamoDBStreamsErrorMapper
} // namespace DynamoDBStreams
} // namespace Aws
