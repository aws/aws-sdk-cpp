/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/DataZoneErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::DataZone;

namespace Aws
{
namespace DataZone
{
namespace DataZoneErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UnauthorizedException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DataZoneErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DataZoneErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DataZoneErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DataZoneErrors::UNAUTHORIZED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DataZoneErrorMapper
} // namespace DataZone
} // namespace Aws
