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
  enum class EventType
  {
    NOT_SET,
    THING,
    THING_GROUP,
    THING_TYPE,
    THING_GROUP_MEMBERSHIP,
    THING_GROUP_HIERARCHY,
    THING_TYPE_ASSOCIATION,
    JOB,
    JOB_EXECUTION,
    POLICY,
    CERTIFICATE,
    CA_CERTIFICATE
  };

namespace EventTypeMapper
{
AWS_IOT_API EventType GetEventTypeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForEventType(EventType value);
} // namespace EventTypeMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
