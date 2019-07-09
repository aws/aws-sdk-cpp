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
#include <aws/monitoring/CloudWatchErrors.h>

using namespace Aws::Client;
using namespace Aws::CloudWatch;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatch
{
namespace CloudWatchErrorMapper
{

static const int LIMIT_EXCEEDED_FAULT_HASH = HashingUtils::HashString("LimitExceeded");
static const int MISSING_REQUIRED_PARAMETER_HASH = HashingUtils::HashString("MissingParameter");
static const int DASHBOARD_INVALID_INPUT_HASH = HashingUtils::HashString("InvalidParameterInput");
static const int DASHBOARD_NOT_FOUND_HASH = HashingUtils::HashString("ResourceNotFound");
static const int INVALID_FORMAT_FAULT_HASH = HashingUtils::HashString("InvalidFormat");
static const int INTERNAL_SERVICE_FAULT_HASH = HashingUtils::HashString("InternalServiceError");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextToken");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == LIMIT_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchErrors::LIMIT_EXCEEDED_FAULT), false);
  }
  else if (hashCode == MISSING_REQUIRED_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchErrors::MISSING_REQUIRED_PARAMETER), false);
  }
  else if (hashCode == DASHBOARD_INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchErrors::DASHBOARD_INVALID_INPUT), false);
  }
  else if (hashCode == DASHBOARD_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchErrors::DASHBOARD_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_FORMAT_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchErrors::INVALID_FORMAT_FAULT), false);
  }
  else if (hashCode == INTERNAL_SERVICE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchErrors::INTERNAL_SERVICE_FAULT), true);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchErrors::INVALID_NEXT_TOKEN), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudWatchErrorMapper
} // namespace CloudWatch
} // namespace Aws
