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
#include <aws/glacier/GlacierErrors.h>

using namespace Aws::Client;
using namespace Aws::Glacier;
using namespace Aws::Utils;

namespace Aws
{
namespace Glacier
{
namespace GlacierErrorMapper
{

static const int MISSING_PARAMETER_VALUE_HASH = HashingUtils::HashString("MissingParameterValueException");
static const int REQUEST_TIMEOUT_HASH = HashingUtils::HashString("RequestTimeoutException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int POLICY_ENFORCED_HASH = HashingUtils::HashString("PolicyEnforcedException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == MISSING_PARAMETER_VALUE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlacierErrors::MISSING_PARAMETER_VALUE), false);
  }
  else if (hashCode == REQUEST_TIMEOUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlacierErrors::REQUEST_TIMEOUT), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlacierErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == POLICY_ENFORCED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlacierErrors::POLICY_ENFORCED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace GlacierErrorMapper
} // namespace Glacier
} // namespace Aws
