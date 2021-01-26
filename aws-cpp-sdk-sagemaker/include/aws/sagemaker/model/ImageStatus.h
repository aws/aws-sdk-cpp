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
  enum class ImageStatus
  {
    NOT_SET,
    CREATING,
    CREATED,
    CREATE_FAILED,
    UPDATING,
    UPDATE_FAILED,
    DELETING,
    DELETE_FAILED
  };

namespace ImageStatusMapper
{
AWS_SAGEMAKER_API ImageStatus GetImageStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForImageStatus(ImageStatus value);
} // namespace ImageStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
