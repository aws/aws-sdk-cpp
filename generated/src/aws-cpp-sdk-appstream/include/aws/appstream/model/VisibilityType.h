﻿/**
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
  enum class VisibilityType
  {
    NOT_SET,
    PUBLIC_,
    PRIVATE_,
    SHARED
  };

namespace VisibilityTypeMapper
{
AWS_APPSTREAM_API VisibilityType GetVisibilityTypeForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForVisibilityType(VisibilityType value);
} // namespace VisibilityTypeMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
