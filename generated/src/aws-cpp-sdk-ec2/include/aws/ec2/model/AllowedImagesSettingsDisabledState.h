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
  enum class AllowedImagesSettingsDisabledState
  {
    NOT_SET,
    disabled
  };

namespace AllowedImagesSettingsDisabledStateMapper
{
AWS_EC2_API AllowedImagesSettingsDisabledState GetAllowedImagesSettingsDisabledStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForAllowedImagesSettingsDisabledState(AllowedImagesSettingsDisabledState value);
} // namespace AllowedImagesSettingsDisabledStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
