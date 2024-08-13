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
  enum class ThemeAttribute
  {
    NOT_SET,
    FOOTER_LINKS
  };

namespace ThemeAttributeMapper
{
AWS_APPSTREAM_API ThemeAttribute GetThemeAttributeForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForThemeAttribute(ThemeAttribute value);
} // namespace ThemeAttributeMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
