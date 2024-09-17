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
  enum class ThemeState
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace ThemeStateMapper
{
AWS_APPSTREAM_API ThemeState GetThemeStateForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForThemeState(ThemeState value);
} // namespace ThemeStateMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
