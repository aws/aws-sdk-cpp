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
  enum class ImageStateChangeReasonCode
  {
    NOT_SET,
    INTERNAL_ERROR,
    IMAGE_BUILDER_NOT_AVAILABLE,
    IMAGE_COPY_FAILURE
  };

namespace ImageStateChangeReasonCodeMapper
{
AWS_APPSTREAM_API ImageStateChangeReasonCode GetImageStateChangeReasonCodeForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForImageStateChangeReasonCode(ImageStateChangeReasonCode value);
} // namespace ImageStateChangeReasonCodeMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
