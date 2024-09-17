/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{
  enum class ThemeStyling
  {
    NOT_SET,
    LIGHT_BLUE,
    BLUE,
    PINK,
    RED
  };

namespace ThemeStylingMapper
{
AWS_APPSTREAM_API ThemeStyling GetThemeStylingForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForThemeStyling(ThemeStyling value);
} // namespace ThemeStylingMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
