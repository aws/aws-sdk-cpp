/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class PaperSize
  {
    NOT_SET,
    US_LETTER,
    US_LEGAL,
    US_TABLOID_LEDGER,
    A0,
    A1,
    A2,
    A3,
    A4,
    A5,
    JIS_B4,
    JIS_B5
  };

namespace PaperSizeMapper
{
AWS_QUICKSIGHT_API PaperSize GetPaperSizeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForPaperSize(PaperSize value);
} // namespace PaperSizeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
