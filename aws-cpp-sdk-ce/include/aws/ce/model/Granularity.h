/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  enum class Granularity
  {
    NOT_SET,
    DAILY,
    MONTHLY,
    HOURLY
  };

namespace GranularityMapper
{
AWS_COSTEXPLORER_API Granularity GetGranularityForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForGranularity(Granularity value);
} // namespace GranularityMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
