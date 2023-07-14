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
  enum class CaptureMode
  {
    NOT_SET,
    Input,
    Output
  };

namespace CaptureModeMapper
{
AWS_SAGEMAKER_API CaptureMode GetCaptureModeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForCaptureMode(CaptureMode value);
} // namespace CaptureModeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
