﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
