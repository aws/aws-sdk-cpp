/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{
  enum class Metric
  {
    NOT_SET,
    BLENDED_COST,
    UNBLENDED_COST,
    AMORTIZED_COST,
    NET_UNBLENDED_COST,
    NET_AMORTIZED_COST,
    USAGE_QUANTITY,
    NORMALIZED_USAGE_AMOUNT
  };

namespace MetricMapper
{
AWS_COSTEXPLORER_API Metric GetMetricForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForMetric(Metric value);
} // namespace MetricMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
