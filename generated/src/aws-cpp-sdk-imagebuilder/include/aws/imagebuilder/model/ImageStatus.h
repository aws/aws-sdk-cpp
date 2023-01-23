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
  enum class ImageStatus
  {
    NOT_SET,
    PENDING,
    CREATING,
    BUILDING,
    TESTING,
    DISTRIBUTING,
    INTEGRATING,
    AVAILABLE,
    CANCELLED,
    FAILED,
    DEPRECATED,
    DELETED
  };

namespace ImageStatusMapper
{
AWS_IMAGEBUILDER_API ImageStatus GetImageStatusForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForImageStatus(ImageStatus value);
} // namespace ImageStatusMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
