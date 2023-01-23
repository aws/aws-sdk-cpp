﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotevents/IoTEventsErrors.h>
#include <aws/iotevents/model/ResourceAlreadyExistsException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::IoTEvents;
using namespace Aws::IoTEvents::Model;

namespace Aws
{
namespace IoTEvents
{
template<> AWS_IOTEVENTS_API ResourceAlreadyExistsException IoTEventsError::GetModeledError()
{
  assert(this->GetErrorType() == IoTEventsErrors::RESOURCE_ALREADY_EXISTS);
  return ResourceAlreadyExistsException(this->GetJsonPayload().View());
}

namespace IoTEventsErrorMapper
{

static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("UnsupportedOperationException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTEventsErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTEventsErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTEventsErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTEventsErrors::UNSUPPORTED_OPERATION), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTEventsErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace IoTEventsErrorMapper
} // namespace IoTEvents
} // namespace Aws
