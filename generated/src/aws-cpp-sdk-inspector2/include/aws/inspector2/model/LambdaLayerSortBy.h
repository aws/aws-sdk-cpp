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
  enum class LambdaLayerSortBy
  {
    NOT_SET,
    CRITICAL,
    HIGH,
    ALL
  };

namespace LambdaLayerSortByMapper
{
AWS_INSPECTOR2_API LambdaLayerSortBy GetLambdaLayerSortByForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForLambdaLayerSortBy(LambdaLayerSortBy value);
} // namespace LambdaLayerSortByMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
