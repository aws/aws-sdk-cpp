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
#include <aws/honeycode/HoneycodeErrors.h>

using namespace Aws::Client;
using namespace Aws::Honeycode;
using namespace Aws::Utils;

namespace Aws
{
namespace Honeycode
{
namespace HoneycodeErrorMapper
{

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int AUTOMATION_EXECUTION_TIMEOUT_HASH = HashingUtils::HashString("AutomationExecutionTimeoutException");
static const int AUTOMATION_EXECUTION_HASH = HashingUtils::HashString("AutomationExecutionException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(HoneycodeErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == AUTOMATION_EXECUTION_TIMEOUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(HoneycodeErrors::AUTOMATION_EXECUTION_TIMEOUT), false);
  }
  else if (hashCode == AUTOMATION_EXECUTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(HoneycodeErrors::AUTOMATION_EXECUTION), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace HoneycodeErrorMapper
} // namespace Honeycode
} // namespace Aws
