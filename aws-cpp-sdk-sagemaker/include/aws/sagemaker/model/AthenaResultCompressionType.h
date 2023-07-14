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
  enum class AthenaResultCompressionType
  {
    NOT_SET,
    GZIP,
    SNAPPY,
    ZLIB
  };

namespace AthenaResultCompressionTypeMapper
{
AWS_SAGEMAKER_API AthenaResultCompressionType GetAthenaResultCompressionTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAthenaResultCompressionType(AthenaResultCompressionType value);
} // namespace AthenaResultCompressionTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
