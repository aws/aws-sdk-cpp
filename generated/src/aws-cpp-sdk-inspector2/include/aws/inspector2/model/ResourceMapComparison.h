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
  enum class ResourceMapComparison
  {
    NOT_SET,
    EQUALS
  };

namespace ResourceMapComparisonMapper
{
AWS_INSPECTOR2_API ResourceMapComparison GetResourceMapComparisonForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForResourceMapComparison(ResourceMapComparison value);
} // namespace ResourceMapComparisonMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
