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
  enum class NegativeValueDisplayMode
  {
    NOT_SET,
    POSITIVE,
    NEGATIVE
  };

namespace NegativeValueDisplayModeMapper
{
AWS_QUICKSIGHT_API NegativeValueDisplayMode GetNegativeValueDisplayModeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForNegativeValueDisplayMode(NegativeValueDisplayMode value);
} // namespace NegativeValueDisplayModeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
