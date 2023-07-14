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
  enum class TrafficMirrorFilterRuleField
  {
    NOT_SET,
    destination_port_range,
    source_port_range,
    protocol,
    description
  };

namespace TrafficMirrorFilterRuleFieldMapper
{
AWS_EC2_API TrafficMirrorFilterRuleField GetTrafficMirrorFilterRuleFieldForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTrafficMirrorFilterRuleField(TrafficMirrorFilterRuleField value);
} // namespace TrafficMirrorFilterRuleFieldMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
