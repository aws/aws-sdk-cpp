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
  enum class TrafficMirrorTargetType
  {
    NOT_SET,
    network_interface,
    network_load_balancer
  };

namespace TrafficMirrorTargetTypeMapper
{
AWS_EC2_API TrafficMirrorTargetType GetTrafficMirrorTargetTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTrafficMirrorTargetType(TrafficMirrorTargetType value);
} // namespace TrafficMirrorTargetTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
