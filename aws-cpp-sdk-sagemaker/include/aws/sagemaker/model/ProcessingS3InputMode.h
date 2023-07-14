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
  enum class ProcessingS3InputMode
  {
    NOT_SET,
    Pipe,
    File
  };

namespace ProcessingS3InputModeMapper
{
AWS_SAGEMAKER_API ProcessingS3InputMode GetProcessingS3InputModeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForProcessingS3InputMode(ProcessingS3InputMode value);
} // namespace ProcessingS3InputModeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
