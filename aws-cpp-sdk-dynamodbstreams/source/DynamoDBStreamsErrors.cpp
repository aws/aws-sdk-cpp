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
#include <aws/dynamodbstreams/DynamoDBStreamsErrors.h>

using namespace Aws::Client;
using namespace Aws::DynamoDBStreams;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDBStreams
{
namespace DynamoDBStreamsErrorMapper
{

static const int TRIMMED_DATA_ACCESS_HASH = HashingUtils::HashString("TrimmedDataAccessException");
static const int EXPIRED_ITERATOR_HASH = HashingUtils::HashString("ExpiredIteratorException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

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
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBStreamsErrors::LIMIT_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DynamoDBStreamsErrorMapper
} // namespace DynamoDBStreams
} // namespace Aws
