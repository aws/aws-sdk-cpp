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

static constexpr uint32_t INVALID_PAGINATION_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidPaginationToken");
static constexpr uint32_t UNSUPPORTED_LOCALE_HASH = ConstExprHashingUtils::HashString("UnsupportedLocale");
static constexpr uint32_t CONCURRENT_MODIFICATION_HASH = ConstExprHashingUtils::HashString("ConcurrentModificationException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
