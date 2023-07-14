/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{
  enum class LaunchProfilePlatform
  {
    NOT_SET,
    LINUX,
    WINDOWS
  };

namespace LaunchProfilePlatformMapper
{
AWS_NIMBLESTUDIO_API LaunchProfilePlatform GetLaunchProfilePlatformForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForLaunchProfilePlatform(LaunchProfilePlatform value);
} // namespace LaunchProfilePlatformMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
