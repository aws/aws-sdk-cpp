/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iot1click-devices/IoT1ClickDevicesServiceErrors.h>
#include <aws/iot1click-devices/model/ResourceNotFoundException.h>
#include <aws/iot1click-devices/model/ForbiddenException.h>
#include <aws/iot1click-devices/model/PreconditionFailedException.h>
#include <aws/iot1click-devices/model/ResourceConflictException.h>
#include <aws/iot1click-devices/model/RangeNotSatisfiableException.h>
#include <aws/iot1click-devices/model/InvalidRequestException.h>
#include <aws/iot1click-devices/model/InternalFailureException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::IoT1ClickDevicesService;
using namespace Aws::IoT1ClickDevicesService::Model;

namespace Aws
{
namespace IoT1ClickDevicesService
{
template<> AWS_IOT1CLICKDEVICESSERVICE_API ResourceNotFoundException IoT1ClickDevicesServiceError::GetModeledError()
{
  assert(this->GetErrorType() == IoT1ClickDevicesServiceErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_IOT1CLICKDEVICESSERVICE_API ForbiddenException IoT1ClickDevicesServiceError::GetModeledError()
{
  assert(this->GetErrorType() == IoT1ClickDevicesServiceErrors::FORBIDDEN);
  return ForbiddenException(this->GetJsonPayload().View());
}

template<> AWS_IOT1CLICKDEVICESSERVICE_API PreconditionFailedException IoT1ClickDevicesServiceError::GetModeledError()
{
  assert(this->GetErrorType() == IoT1ClickDevicesServiceErrors::PRECONDITION_FAILED);
  return PreconditionFailedException(this->GetJsonPayload().View());
}

template<> AWS_IOT1CLICKDEVICESSERVICE_API ResourceConflictException IoT1ClickDevicesServiceError::GetModeledError()
{
  assert(this->GetErrorType() == IoT1ClickDevicesServiceErrors::RESOURCE_CONFLICT);
  return ResourceConflictException(this->GetJsonPayload().View());
}

template<> AWS_IOT1CLICKDEVICESSERVICE_API RangeNotSatisfiableException IoT1ClickDevicesServiceError::GetModeledError()
{
  assert(this->GetErrorType() == IoT1ClickDevicesServiceErrors::RANGE_NOT_SATISFIABLE);
  return RangeNotSatisfiableException(this->GetJsonPayload().View());
}

template<> AWS_IOT1CLICKDEVICESSERVICE_API InvalidRequestException IoT1ClickDevicesServiceError::GetModeledError()
{
  assert(this->GetErrorType() == IoT1ClickDevicesServiceErrors::INVALID_REQUEST);
  return InvalidRequestException(this->GetJsonPayload().View());
}

template<> AWS_IOT1CLICKDEVICESSERVICE_API InternalFailureException IoT1ClickDevicesServiceError::GetModeledError()
{
  assert(this->GetErrorType() == IoT1ClickDevicesServiceErrors::INTERNAL_FAILURE);
  return InternalFailureException(this->GetJsonPayload().View());
}

namespace IoT1ClickDevicesServiceErrorMapper
{

static constexpr uint32_t FORBIDDEN_HASH = ConstExprHashingUtils::HashString("ForbiddenException");
static constexpr uint32_t PRECONDITION_FAILED_HASH = ConstExprHashingUtils::HashString("PreconditionFailedException");
static constexpr uint32_t RESOURCE_CONFLICT_HASH = ConstExprHashingUtils::HashString("ResourceConflictException");
static constexpr uint32_t RANGE_NOT_SATISFIABLE_HASH = ConstExprHashingUtils::HashString("RangeNotSatisfiableException");
static constexpr uint32_t INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
