/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class ImageSortBy
  {
    NOT_SET,
    CREATION_TIME,
    LAST_MODIFIED_TIME,
    IMAGE_NAME
  };

namespace ImageSortByMapper
{
AWS_SAGEMAKER_API ImageSortBy GetImageSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForImageSortBy(ImageSortBy value);
} // namespace ImageSortByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
