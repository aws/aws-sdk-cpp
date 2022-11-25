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
  enum class TrafficMirrorSessionField
  {
    NOT_SET,
    packet_length,
    description,
    virtual_network_id
  };

namespace TrafficMirrorSessionFieldMapper
{
AWS_EC2_API TrafficMirrorSessionField GetTrafficMirrorSessionFieldForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTrafficMirrorSessionField(TrafficMirrorSessionField value);
} // namespace TrafficMirrorSessionFieldMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
