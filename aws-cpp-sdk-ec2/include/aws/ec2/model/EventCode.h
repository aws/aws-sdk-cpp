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
  enum class EventCode
  {
    NOT_SET,
    instance_reboot,
    system_reboot,
    system_maintenance,
    instance_retirement,
    instance_stop
  };

namespace EventCodeMapper
{
AWS_EC2_API EventCode GetEventCodeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForEventCode(EventCode value);
} // namespace EventCodeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
