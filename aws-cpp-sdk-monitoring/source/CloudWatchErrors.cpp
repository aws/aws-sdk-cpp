/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/monitoring/CloudWatchErrors.h>

using namespace Aws::Client;
using namespace Aws::CloudWatch;
using namespace Aws::Utils;

static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextToken");
static const int INTERNAL_SERVICE_HASH = HashingUtils::HashString("InternalServiceError");
static const int INVALID_FORMAT_HASH = HashingUtils::HashString("InvalidFormat");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceeded");

namespace Aws
{
namespace CloudWatch
{
namespace CloudWatchErrorMapper
{

AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchErrors::INTERNAL_SERVICE), true);
  }
  else if (hashCode == INVALID_FORMAT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchErrors::INVALID_FORMAT), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchErrors::LIMIT_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudWatchErrorMapper
} // namespace CloudWatch
} // namespace Aws
