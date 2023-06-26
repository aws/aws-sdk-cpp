/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class CsvHeaderOption
  {
    NOT_SET,
    UNKNOWN,
    PRESENT,
    ABSENT
  };

namespace CsvHeaderOptionMapper
{
AWS_GLUE_API CsvHeaderOption GetCsvHeaderOptionForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForCsvHeaderOption(CsvHeaderOption value);
} // namespace CsvHeaderOptionMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
