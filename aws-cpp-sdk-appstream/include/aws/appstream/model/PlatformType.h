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
  enum class PlatformType
  {
    NOT_SET,
    WINDOWS,
    WINDOWS_SERVER_2016,
    WINDOWS_SERVER_2019
  };

namespace PlatformTypeMapper
{
AWS_APPSTREAM_API PlatformType GetPlatformTypeForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForPlatformType(PlatformType value);
} // namespace PlatformTypeMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
