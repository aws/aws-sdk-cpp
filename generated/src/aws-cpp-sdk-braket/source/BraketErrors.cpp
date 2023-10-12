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

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t DEVICE_RETIRED_HASH = ConstExprHashingUtils::HashString("DeviceRetiredException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t DEVICE_OFFLINE_HASH = ConstExprHashingUtils::HashString("DeviceOfflineException");
static constexpr uint32_t INTERNAL_SERVICE_HASH = ConstExprHashingUtils::HashString("InternalServiceException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BraketErrors::CONFLICT), false);
  }
  else if (hashCode == DEVICE_RETIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BraketErrors::DEVICE_RETIRED), false);
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
