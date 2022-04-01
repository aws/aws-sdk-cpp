/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{
  enum class CSVFileCompression
  {
    NOT_SET,
    NONE,
    GZIP
  };

namespace CSVFileCompressionMapper
{
AWS_LOOKOUTMETRICS_API CSVFileCompression GetCSVFileCompressionForName(const Aws::String& name);

AWS_LOOKOUTMETRICS_API Aws::String GetNameForCSVFileCompression(CSVFileCompression value);
} // namespace CSVFileCompressionMapper
} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
