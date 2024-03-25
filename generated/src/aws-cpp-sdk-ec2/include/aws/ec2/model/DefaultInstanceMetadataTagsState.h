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
  enum class DefaultInstanceMetadataTagsState
  {
    NOT_SET,
    disabled,
    enabled,
    no_preference
  };

namespace DefaultInstanceMetadataTagsStateMapper
{
AWS_EC2_API DefaultInstanceMetadataTagsState GetDefaultInstanceMetadataTagsStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForDefaultInstanceMetadataTagsState(DefaultInstanceMetadataTagsState value);
} // namespace DefaultInstanceMetadataTagsStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
