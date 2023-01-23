/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class EventType
  {
    NOT_SET,
    instanceChange,
    fleetRequestChange,
    error,
    information
  };

namespace EventTypeMapper
{
AWS_EC2_API EventType GetEventTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForEventType(EventType value);
} // namespace EventTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
