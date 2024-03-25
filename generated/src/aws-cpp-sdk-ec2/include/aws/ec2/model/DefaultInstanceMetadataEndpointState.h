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
  enum class DefaultInstanceMetadataEndpointState
  {
    NOT_SET,
    disabled,
    enabled,
    no_preference
  };

namespace DefaultInstanceMetadataEndpointStateMapper
{
AWS_EC2_API DefaultInstanceMetadataEndpointState GetDefaultInstanceMetadataEndpointStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForDefaultInstanceMetadataEndpointState(DefaultInstanceMetadataEndpointState value);
} // namespace DefaultInstanceMetadataEndpointStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
