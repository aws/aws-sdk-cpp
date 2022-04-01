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
  enum class InstanceEventWindowState
  {
    NOT_SET,
    creating,
    deleting,
    active,
    deleted
  };

namespace InstanceEventWindowStateMapper
{
AWS_EC2_API InstanceEventWindowState GetInstanceEventWindowStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForInstanceEventWindowState(InstanceEventWindowState value);
} // namespace InstanceEventWindowStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
