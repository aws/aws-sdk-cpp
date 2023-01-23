/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{
  enum class InstanceMetadataEndpointState
  {
    NOT_SET,
    disabled,
    enabled
  };

namespace InstanceMetadataEndpointStateMapper
{
AWS_AUTOSCALING_API InstanceMetadataEndpointState GetInstanceMetadataEndpointStateForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForInstanceMetadataEndpointState(InstanceMetadataEndpointState value);
} // namespace InstanceMetadataEndpointStateMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws
