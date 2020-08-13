/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/braket/BraketErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Braket;

namespace Aws
{
namespace Braket
{
namespace BraketErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int DEVICE_OFFLINE_HASH = HashingUtils::HashString("DeviceOfflineException");
static const int INTERNAL_SERVICE_HASH = HashingUtils::HashString("InternalServiceException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BraketErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BraketErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == DEVICE_OFFLINE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BraketErrors::DEVICE_OFFLINE), false);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BraketErrors::INTERNAL_SERVICE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace BraketErrorMapper
} // namespace Braket
} // namespace Aws
