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
  enum class Ec2InstanceConnectEndpointState
  {
    NOT_SET,
    create_in_progress,
    create_complete,
    create_failed,
    delete_in_progress,
    delete_complete,
    delete_failed
  };

namespace Ec2InstanceConnectEndpointStateMapper
{
AWS_EC2_API Ec2InstanceConnectEndpointState GetEc2InstanceConnectEndpointStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForEc2InstanceConnectEndpointState(Ec2InstanceConnectEndpointState value);
} // namespace Ec2InstanceConnectEndpointStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
