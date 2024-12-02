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
  enum class AllowedImagesSettingsEnabledState
  {
    NOT_SET,
    enabled,
    audit_mode
  };

namespace AllowedImagesSettingsEnabledStateMapper
{
AWS_EC2_API AllowedImagesSettingsEnabledState GetAllowedImagesSettingsEnabledStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForAllowedImagesSettingsEnabledState(AllowedImagesSettingsEnabledState value);
} // namespace AllowedImagesSettingsEnabledStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
