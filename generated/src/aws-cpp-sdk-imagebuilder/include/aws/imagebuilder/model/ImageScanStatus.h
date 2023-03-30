/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{
  enum class ImageScanStatus
  {
    NOT_SET,
    PENDING,
    SCANNING,
    COLLECTING,
    COMPLETED,
    ABANDONED,
    FAILED,
    TIMED_OUT
  };

namespace ImageScanStatusMapper
{
AWS_IMAGEBUILDER_API ImageScanStatus GetImageScanStatusForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForImageScanStatus(ImageScanStatus value);
} // namespace ImageScanStatusMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
