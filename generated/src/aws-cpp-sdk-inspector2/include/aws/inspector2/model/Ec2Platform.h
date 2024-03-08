/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class Ec2Platform
  {
    NOT_SET,
    WINDOWS,
    LINUX,
    UNKNOWN,
    MACOS
  };

namespace Ec2PlatformMapper
{
AWS_INSPECTOR2_API Ec2Platform GetEc2PlatformForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForEc2Platform(Ec2Platform value);
} // namespace Ec2PlatformMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
