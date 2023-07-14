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
  enum class AutoMLS3DataType
  {
    NOT_SET,
    ManifestFile,
    S3Prefix
  };

namespace AutoMLS3DataTypeMapper
{
AWS_SAGEMAKER_API AutoMLS3DataType GetAutoMLS3DataTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAutoMLS3DataType(AutoMLS3DataType value);
} // namespace AutoMLS3DataTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
