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
  enum class InstanceMetadataProtocolState
  {
    NOT_SET,
    disabled,
    enabled
  };

namespace InstanceMetadataProtocolStateMapper
{
AWS_EC2_API InstanceMetadataProtocolState GetInstanceMetadataProtocolStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForInstanceMetadataProtocolState(InstanceMetadataProtocolState value);
} // namespace InstanceMetadataProtocolStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
