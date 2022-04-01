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
  enum class RedshiftResultCompressionType
  {
    NOT_SET,
    None,
    GZIP,
    BZIP2,
    ZSTD,
    SNAPPY
  };

namespace RedshiftResultCompressionTypeMapper
{
AWS_SAGEMAKER_API RedshiftResultCompressionType GetRedshiftResultCompressionTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForRedshiftResultCompressionType(RedshiftResultCompressionType value);
} // namespace RedshiftResultCompressionTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
