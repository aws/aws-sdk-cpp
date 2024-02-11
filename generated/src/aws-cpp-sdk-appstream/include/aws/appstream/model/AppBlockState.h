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
  enum class AppBlockState
  {
    NOT_SET,
    INACTIVE,
    ACTIVE
  };

namespace AppBlockStateMapper
{
AWS_APPSTREAM_API AppBlockState GetAppBlockStateForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForAppBlockState(AppBlockState value);
} // namespace AppBlockStateMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
