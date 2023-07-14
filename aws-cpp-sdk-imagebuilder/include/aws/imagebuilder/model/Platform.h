/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{
  enum class Platform
  {
    NOT_SET,
    Windows,
    Linux
  };

namespace PlatformMapper
{
AWS_IMAGEBUILDER_API Platform GetPlatformForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForPlatform(Platform value);
} // namespace PlatformMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
