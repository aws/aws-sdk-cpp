/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{
  enum class FilterOperation
  {
    NOT_SET,
    EQUALS
  };

namespace FilterOperationMapper
{
AWS_LOOKOUTMETRICS_API FilterOperation GetFilterOperationForName(const Aws::String& name);

AWS_LOOKOUTMETRICS_API Aws::String GetNameForFilterOperation(FilterOperation value);
} // namespace FilterOperationMapper
} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
