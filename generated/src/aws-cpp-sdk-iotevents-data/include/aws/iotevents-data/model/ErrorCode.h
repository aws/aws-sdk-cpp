/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTEventsData
{
namespace Model
{
  enum class ErrorCode
  {
    NOT_SET,
    ResourceNotFoundException,
    InvalidRequestException,
    InternalFailureException,
    ServiceUnavailableException,
    ThrottlingException
  };

namespace ErrorCodeMapper
{
AWS_IOTEVENTSDATA_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_IOTEVENTSDATA_API Aws::String GetNameForErrorCode(ErrorCode value);
} // namespace ErrorCodeMapper
} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
