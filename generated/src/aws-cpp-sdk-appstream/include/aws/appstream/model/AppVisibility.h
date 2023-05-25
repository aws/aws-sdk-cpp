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
  enum class AppVisibility
  {
    NOT_SET,
    ALL,
    ASSOCIATED
  };

namespace AppVisibilityMapper
{
AWS_APPSTREAM_API AppVisibility GetAppVisibilityForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForAppVisibility(AppVisibility value);
} // namespace AppVisibilityMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
