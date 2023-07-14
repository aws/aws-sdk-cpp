/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/health/HealthErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Health;

namespace Aws
{
namespace Health
{
namespace HealthErrorMapper
{

static const int INVALID_PAGINATION_TOKEN_HASH = HashingUtils::HashString("InvalidPaginationToken");
static const int UNSUPPORTED_LOCALE_HASH = HashingUtils::HashString("UnsupportedLocale");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");


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
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(HealthErrors::CONCURRENT_MODIFICATION), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace HealthErrorMapper
} // namespace Health
} // namespace Aws
