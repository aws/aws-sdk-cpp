/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GroundStation
{
namespace Model
{
  enum class ConfigCapabilityType
  {
    NOT_SET,
    antenna_downlink,
    antenna_downlink_demod_decode,
    antenna_uplink,
    dataflow_endpoint,
    tracking,
    uplink_echo
  };

namespace ConfigCapabilityTypeMapper
{
AWS_GROUNDSTATION_API ConfigCapabilityType GetConfigCapabilityTypeForName(const Aws::String& name);

AWS_GROUNDSTATION_API Aws::String GetNameForConfigCapabilityType(ConfigCapabilityType value);
} // namespace ConfigCapabilityTypeMapper
} // namespace Model
} // namespace GroundStation
} // namespace Aws
