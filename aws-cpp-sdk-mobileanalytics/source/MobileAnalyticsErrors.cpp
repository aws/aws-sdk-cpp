/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mobileanalytics/MobileAnalyticsErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::MobileAnalytics;

namespace Aws
{
namespace MobileAnalytics
{
namespace MobileAnalyticsErrorMapper
{

static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MobileAnalyticsErrors::BAD_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MobileAnalyticsErrorMapper
} // namespace MobileAnalytics
} // namespace Aws
