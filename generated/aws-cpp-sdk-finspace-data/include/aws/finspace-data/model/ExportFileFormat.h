/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{
  enum class ExportFileFormat
  {
    NOT_SET,
    PARQUET,
    DELIMITED_TEXT
  };

namespace ExportFileFormatMapper
{
AWS_FINSPACEDATA_API ExportFileFormat GetExportFileFormatForName(const Aws::String& name);

AWS_FINSPACEDATA_API Aws::String GetNameForExportFileFormat(ExportFileFormat value);
} // namespace ExportFileFormatMapper
} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
