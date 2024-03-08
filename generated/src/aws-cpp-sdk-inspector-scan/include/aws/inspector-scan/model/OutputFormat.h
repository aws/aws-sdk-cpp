/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector-scan/Inspectorscan_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace inspectorscan
{
namespace Model
{
  enum class OutputFormat
  {
    NOT_SET,
    CYCLONE_DX_1_5,
    INSPECTOR
  };

namespace OutputFormatMapper
{
AWS_INSPECTORSCAN_API OutputFormat GetOutputFormatForName(const Aws::String& name);

AWS_INSPECTORSCAN_API Aws::String GetNameForOutputFormat(OutputFormat value);
} // namespace OutputFormatMapper
} // namespace Model
} // namespace inspectorscan
} // namespace Aws
