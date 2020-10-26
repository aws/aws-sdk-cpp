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
  enum class Framework
  {
    NOT_SET,
    TENSORFLOW,
    KERAS,
    MXNET,
    ONNX,
    PYTORCH,
    XGBOOST,
    TFLITE,
    DARKNET
  };

namespace FrameworkMapper
{
AWS_SAGEMAKER_API Framework GetFrameworkForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForFramework(Framework value);
} // namespace FrameworkMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
