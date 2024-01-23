/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class CisFindingStatusComparison
  {
    NOT_SET,
    EQUALS
  };

namespace CisFindingStatusComparisonMapper
{
AWS_INSPECTOR2_API CisFindingStatusComparison GetCisFindingStatusComparisonForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForCisFindingStatusComparison(CisFindingStatusComparison value);
} // namespace CisFindingStatusComparisonMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
