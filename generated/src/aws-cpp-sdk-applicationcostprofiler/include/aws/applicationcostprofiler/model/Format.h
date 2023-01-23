/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/applicationcostprofiler/ApplicationCostProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationCostProfiler
{
namespace Model
{
  enum class Format
  {
    NOT_SET,
    CSV,
    PARQUET
  };

namespace FormatMapper
{
AWS_APPLICATIONCOSTPROFILER_API Format GetFormatForName(const Aws::String& name);

AWS_APPLICATIONCOSTPROFILER_API Aws::String GetNameForFormat(Format value);
} // namespace FormatMapper
} // namespace Model
} // namespace ApplicationCostProfiler
} // namespace Aws
