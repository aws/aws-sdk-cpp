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
  enum class ImageBuilderStateChangeReasonCode
  {
    NOT_SET,
    INTERNAL_ERROR,
    IMAGE_UNAVAILABLE
  };

namespace ImageBuilderStateChangeReasonCodeMapper
{
AWS_APPSTREAM_API ImageBuilderStateChangeReasonCode GetImageBuilderStateChangeReasonCodeForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForImageBuilderStateChangeReasonCode(ImageBuilderStateChangeReasonCode value);
} // namespace ImageBuilderStateChangeReasonCodeMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
