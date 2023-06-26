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
  enum class MapComparison
  {
    NOT_SET,
    EQUALS
  };

namespace MapComparisonMapper
{
AWS_INSPECTOR2_API MapComparison GetMapComparisonForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForMapComparison(MapComparison value);
} // namespace MapComparisonMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
