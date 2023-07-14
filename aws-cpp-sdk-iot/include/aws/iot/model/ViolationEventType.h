/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class ViolationEventType
  {
    NOT_SET,
    in_alarm,
    alarm_cleared,
    alarm_invalidated
  };

namespace ViolationEventTypeMapper
{
AWS_IOT_API ViolationEventType GetViolationEventTypeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForViolationEventType(ViolationEventType value);
} // namespace ViolationEventTypeMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
