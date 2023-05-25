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
  enum class InstanceMetadataHttpTokensState
  {
    NOT_SET,
    optional,
    required
  };

namespace InstanceMetadataHttpTokensStateMapper
{
AWS_AUTOSCALING_API InstanceMetadataHttpTokensState GetInstanceMetadataHttpTokensStateForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForInstanceMetadataHttpTokensState(InstanceMetadataHttpTokensState value);
} // namespace InstanceMetadataHttpTokensStateMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws
