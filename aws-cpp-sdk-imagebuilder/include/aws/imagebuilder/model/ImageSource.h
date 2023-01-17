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
  enum class ImageSource
  {
    NOT_SET,
    AMAZON_MANAGED,
    AWS_MARKETPLACE,
    IMPORTED,
    CUSTOM
  };

namespace ImageSourceMapper
{
AWS_IMAGEBUILDER_API ImageSource GetImageSourceForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForImageSource(ImageSource value);
} // namespace ImageSourceMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
