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
  enum class AggregationFindingType
  {
    NOT_SET,
    NETWORK_REACHABILITY,
    PACKAGE_VULNERABILITY,
    CODE_VULNERABILITY
  };

namespace AggregationFindingTypeMapper
{
AWS_INSPECTOR2_API AggregationFindingType GetAggregationFindingTypeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForAggregationFindingType(AggregationFindingType value);
} // namespace AggregationFindingTypeMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
