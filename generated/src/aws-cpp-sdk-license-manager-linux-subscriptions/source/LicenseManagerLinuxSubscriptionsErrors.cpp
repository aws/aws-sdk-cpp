/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::LicenseManagerLinuxSubscriptions;

namespace Aws
{
namespace LicenseManagerLinuxSubscriptions
{
namespace LicenseManagerLinuxSubscriptionsErrorMapper
{

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LicenseManagerLinuxSubscriptionsErrors::INTERNAL_SERVER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace LicenseManagerLinuxSubscriptionsErrorMapper
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
