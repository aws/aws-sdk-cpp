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
  enum class TableFormat
  {
    NOT_SET,
    Glue,
    Iceberg
  };

namespace TableFormatMapper
{
AWS_SAGEMAKER_API TableFormat GetTableFormatForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForTableFormat(TableFormat value);
} // namespace TableFormatMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
