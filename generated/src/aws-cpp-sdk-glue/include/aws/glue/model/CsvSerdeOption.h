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
  enum class CsvSerdeOption
  {
    NOT_SET,
    OpenCSVSerDe,
    LazySimpleSerDe,
    None
  };

namespace CsvSerdeOptionMapper
{
AWS_GLUE_API CsvSerdeOption GetCsvSerdeOptionForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForCsvSerdeOption(CsvSerdeOption value);
} // namespace CsvSerdeOptionMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
