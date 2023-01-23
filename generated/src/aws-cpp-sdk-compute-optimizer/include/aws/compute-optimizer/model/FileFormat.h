/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{
  enum class FileFormat
  {
    NOT_SET,
    Csv
  };

namespace FileFormatMapper
{
AWS_COMPUTEOPTIMIZER_API FileFormat GetFileFormatForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForFileFormat(FileFormat value);
} // namespace FileFormatMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
