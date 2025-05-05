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
  enum class LocalGatewayVirtualInterfaceGroupConfigurationState
  {
    NOT_SET,
    pending,
    incomplete,
    available,
    deleting,
    deleted
  };

namespace LocalGatewayVirtualInterfaceGroupConfigurationStateMapper
{
AWS_EC2_API LocalGatewayVirtualInterfaceGroupConfigurationState GetLocalGatewayVirtualInterfaceGroupConfigurationStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForLocalGatewayVirtualInterfaceGroupConfigurationState(LocalGatewayVirtualInterfaceGroupConfigurationState value);
} // namespace LocalGatewayVirtualInterfaceGroupConfigurationStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
