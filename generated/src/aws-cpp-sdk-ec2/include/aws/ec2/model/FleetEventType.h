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
  enum class FleetEventType
  {
    NOT_SET,
    instance_change,
    fleet_change,
    service_error
  };

namespace FleetEventTypeMapper
{
AWS_EC2_API FleetEventType GetFleetEventTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForFleetEventType(FleetEventType value);
} // namespace FleetEventTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
