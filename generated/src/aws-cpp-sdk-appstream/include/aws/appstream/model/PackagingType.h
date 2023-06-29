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
  enum class PackagingType
  {
    NOT_SET,
    CUSTOM,
    APPSTREAM2
  };

namespace PackagingTypeMapper
{
AWS_APPSTREAM_API PackagingType GetPackagingTypeForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForPackagingType(PackagingType value);
} // namespace PackagingTypeMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
