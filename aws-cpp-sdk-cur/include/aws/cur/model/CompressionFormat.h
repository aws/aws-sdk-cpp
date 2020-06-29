/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cur/CostandUsageReportService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostandUsageReportService
{
namespace Model
{
  enum class CompressionFormat
  {
    NOT_SET,
    ZIP,
    GZIP,
    Parquet
  };

namespace CompressionFormatMapper
{
AWS_COSTANDUSAGEREPORTSERVICE_API CompressionFormat GetCompressionFormatForName(const Aws::String& name);

AWS_COSTANDUSAGEREPORTSERVICE_API Aws::String GetNameForCompressionFormat(CompressionFormat value);
} // namespace CompressionFormatMapper
} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws
