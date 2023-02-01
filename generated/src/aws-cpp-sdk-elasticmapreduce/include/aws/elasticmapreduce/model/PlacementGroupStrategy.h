/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class PlacementGroupStrategy
  {
    NOT_SET,
    SPREAD,
    PARTITION,
    CLUSTER,
    NONE
  };

namespace PlacementGroupStrategyMapper
{
AWS_EMR_API PlacementGroupStrategy GetPlacementGroupStrategyForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForPlacementGroupStrategy(PlacementGroupStrategy value);
} // namespace PlacementGroupStrategyMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
