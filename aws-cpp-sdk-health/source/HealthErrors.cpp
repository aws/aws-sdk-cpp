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
#include <aws/health/HealthErrors.h>

using namespace Aws::Client;
using namespace Aws::Health;
using namespace Aws::Utils;

namespace Aws
{
namespace Health
{
namespace HealthErrorMapper
{

static const int INVALID_PAGINATION_TOKEN_HASH = HashingUtils::HashString("InvalidPaginationToken");
static const int UNSUPPORTED_LOCALE_HASH = HashingUtils::HashString("UnsupportedLocale");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_PAGINATION_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(HealthErrors::INVALID_PAGINATION_TOKEN), false);
  }
  else if (hashCode == UNSUPPORTED_LOCALE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(HealthErrors::UNSUPPORTED_LOCALE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace HealthErrorMapper
} // namespace Health
} // namespace Aws
