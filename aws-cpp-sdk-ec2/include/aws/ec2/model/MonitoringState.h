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
  enum class MonitoringState
  {
    NOT_SET,
    disabled,
    disabling,
    enabled,
    pending
  };

namespace MonitoringStateMapper
{
AWS_EC2_API MonitoringState GetMonitoringStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForMonitoringState(MonitoringState value);
} // namespace MonitoringStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
