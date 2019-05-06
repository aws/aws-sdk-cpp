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
#include <aws/license-manager/LicenseManagerErrors.h>

using namespace Aws::Client;
using namespace Aws::LicenseManager;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManager
{
namespace LicenseManagerErrorMapper
{

static const int SERVER_INTERNAL_HASH = HashingUtils::HashString("ServerInternalException");
static const int AUTHORIZATION_HASH = HashingUtils::HashString("AuthorizationException");
static const int FAILED_DEPENDENCY_HASH = HashingUtils::HashString("FailedDependencyException");
static const int LICENSE_USAGE_HASH = HashingUtils::HashString("LicenseUsageException");
static const int RESOURCE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ResourceLimitExceededException");
static const int RATE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("RateLimitExceededException");
static const int INVALID_RESOURCE_STATE_HASH = HashingUtils::HashString("InvalidResourceStateException");
static const int FILTER_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("FilterLimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == SERVER_INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LicenseManagerErrors::SERVER_INTERNAL), false);
  }
  else if (hashCode == AUTHORIZATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LicenseManagerErrors::AUTHORIZATION), false);
  }
  else if (hashCode == FAILED_DEPENDENCY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LicenseManagerErrors::FAILED_DEPENDENCY), false);
  }
  else if (hashCode == LICENSE_USAGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LicenseManagerErrors::LICENSE_USAGE), false);
  }
  else if (hashCode == RESOURCE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LicenseManagerErrors::RESOURCE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == RATE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LicenseManagerErrors::RATE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_RESOURCE_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LicenseManagerErrors::INVALID_RESOURCE_STATE), false);
  }
  else if (hashCode == FILTER_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LicenseManagerErrors::FILTER_LIMIT_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace LicenseManagerErrorMapper
} // namespace LicenseManager
} // namespace Aws
