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
  enum class ImageState
  {
    NOT_SET,
    PENDING,
    AVAILABLE,
    FAILED,
    COPYING,
    DELETING
  };

namespace ImageStateMapper
{
AWS_APPSTREAM_API ImageState GetImageStateForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForImageState(ImageState value);
} // namespace ImageStateMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
