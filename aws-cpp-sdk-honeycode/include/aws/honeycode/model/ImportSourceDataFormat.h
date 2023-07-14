/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Honeycode
{
namespace Model
{
  enum class ImportSourceDataFormat
  {
    NOT_SET,
    DELIMITED_TEXT
  };

namespace ImportSourceDataFormatMapper
{
AWS_HONEYCODE_API ImportSourceDataFormat GetImportSourceDataFormatForName(const Aws::String& name);

AWS_HONEYCODE_API Aws::String GetNameForImportSourceDataFormat(ImportSourceDataFormat value);
} // namespace ImportSourceDataFormatMapper
} // namespace Model
} // namespace Honeycode
} // namespace Aws
