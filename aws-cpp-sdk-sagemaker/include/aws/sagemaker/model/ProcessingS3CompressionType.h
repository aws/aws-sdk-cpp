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
  enum class ProcessingS3CompressionType
  {
    NOT_SET,
    None,
    Gzip
  };

namespace ProcessingS3CompressionTypeMapper
{
AWS_SAGEMAKER_API ProcessingS3CompressionType GetProcessingS3CompressionTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForProcessingS3CompressionType(ProcessingS3CompressionType value);
} // namespace ProcessingS3CompressionTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
