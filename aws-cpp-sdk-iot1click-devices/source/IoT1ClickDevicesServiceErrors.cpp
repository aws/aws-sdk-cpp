/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iot1click-devices/IoT1ClickDevicesServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::IoT1ClickDevicesService;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT1ClickDevicesService
{
namespace IoT1ClickDevicesServiceErrorMapper
{

static const int FORBIDDEN_HASH = HashingUtils::HashString("ForbiddenException");
static const int PRECONDITION_FAILED_HASH = HashingUtils::HashString("PreconditionFailedException");
static const int RESOURCE_CONFLICT_HASH = HashingUtils::HashString("ResourceConflictException");
static const int RANGE_NOT_SATISFIABLE_HASH = HashingUtils::HashString("RangeNotSatisfiableException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoT1ClickDevicesServiceErrors::FORBIDDEN), false);
  }
  else if (hashCode == PRECONDITION_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoT1ClickDevicesServiceErrors::PRECONDITION_FAILED), false);
  }
  else if (hashCode == RESOURCE_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoT1ClickDevicesServiceErrors::RESOURCE_CONFLICT), false);
  }
  else if (hashCode == RANGE_NOT_SATISFIABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoT1ClickDevicesServiceErrors::RANGE_NOT_SATISFIABLE), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoT1ClickDevicesServiceErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace IoT1ClickDevicesServiceErrorMapper
} // namespace IoT1ClickDevicesService
} // namespace Aws
