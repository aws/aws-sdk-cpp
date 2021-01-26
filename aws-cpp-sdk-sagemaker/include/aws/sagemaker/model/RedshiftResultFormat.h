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
  enum class RedshiftResultFormat
  {
    NOT_SET,
    PARQUET,
    CSV
  };

namespace RedshiftResultFormatMapper
{
AWS_SAGEMAKER_API RedshiftResultFormat GetRedshiftResultFormatForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForRedshiftResultFormat(RedshiftResultFormat value);
} // namespace RedshiftResultFormatMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
