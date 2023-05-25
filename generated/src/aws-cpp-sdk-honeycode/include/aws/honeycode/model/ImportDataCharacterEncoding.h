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
  enum class ImportDataCharacterEncoding
  {
    NOT_SET,
    UTF_8,
    US_ASCII,
    ISO_8859_1,
    UTF_16BE,
    UTF_16LE,
    UTF_16
  };

namespace ImportDataCharacterEncodingMapper
{
AWS_HONEYCODE_API ImportDataCharacterEncoding GetImportDataCharacterEncodingForName(const Aws::String& name);

AWS_HONEYCODE_API Aws::String GetNameForImportDataCharacterEncoding(ImportDataCharacterEncoding value);
} // namespace ImportDataCharacterEncodingMapper
} // namespace Model
} // namespace Honeycode
} // namespace Aws
