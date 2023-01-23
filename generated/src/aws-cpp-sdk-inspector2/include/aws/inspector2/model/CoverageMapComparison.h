﻿/**
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
  enum class CoverageMapComparison
  {
    NOT_SET,
    EQUALS
  };

namespace CoverageMapComparisonMapper
{
AWS_INSPECTOR2_API CoverageMapComparison GetCoverageMapComparisonForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForCoverageMapComparison(CoverageMapComparison value);
} // namespace CoverageMapComparisonMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
