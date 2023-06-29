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
  enum class AppBlockBuilderPlatformType
  {
    NOT_SET,
    WINDOWS_SERVER_2019
  };

namespace AppBlockBuilderPlatformTypeMapper
{
AWS_APPSTREAM_API AppBlockBuilderPlatformType GetAppBlockBuilderPlatformTypeForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForAppBlockBuilderPlatformType(AppBlockBuilderPlatformType value);
} // namespace AppBlockBuilderPlatformTypeMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
