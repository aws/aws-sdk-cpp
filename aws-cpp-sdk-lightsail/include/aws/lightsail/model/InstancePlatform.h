﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class InstancePlatform
  {
    NOT_SET,
    LINUX_UNIX,
    WINDOWS
  };

namespace InstancePlatformMapper
{
AWS_LIGHTSAIL_API InstancePlatform GetInstancePlatformForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForInstancePlatform(InstancePlatform value);
} // namespace InstancePlatformMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
