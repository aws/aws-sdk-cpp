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
  enum class ImageType
  {
    NOT_SET,
    AMI,
    DOCKER
  };

namespace ImageTypeMapper
{
AWS_IMAGEBUILDER_API ImageType GetImageTypeForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForImageType(ImageType value);
} // namespace ImageTypeMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
