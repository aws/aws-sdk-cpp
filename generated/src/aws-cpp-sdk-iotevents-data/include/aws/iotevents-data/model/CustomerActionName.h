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
  enum class CustomerActionName
  {
    NOT_SET,
    SNOOZE,
    ENABLE,
    DISABLE,
    ACKNOWLEDGE,
    RESET
  };

namespace CustomerActionNameMapper
{
AWS_IOTEVENTSDATA_API CustomerActionName GetCustomerActionNameForName(const Aws::String& name);

AWS_IOTEVENTSDATA_API Aws::String GetNameForCustomerActionName(CustomerActionName value);
} // namespace CustomerActionNameMapper
} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
