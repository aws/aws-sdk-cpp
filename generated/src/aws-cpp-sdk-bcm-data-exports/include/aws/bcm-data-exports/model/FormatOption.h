/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BCMDataExports
{
namespace Model
{
  enum class FormatOption
  {
    NOT_SET,
    TEXT_OR_CSV,
    PARQUET
  };

namespace FormatOptionMapper
{
AWS_BCMDATAEXPORTS_API FormatOption GetFormatOptionForName(const Aws::String& name);

AWS_BCMDATAEXPORTS_API Aws::String GetNameForFormatOption(FormatOption value);
} // namespace FormatOptionMapper
} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
