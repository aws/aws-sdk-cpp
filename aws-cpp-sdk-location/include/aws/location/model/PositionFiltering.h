/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LocationService
{
namespace Model
{
  enum class PositionFiltering
  {
    NOT_SET,
    TimeBased,
    DistanceBased,
    AccuracyBased
  };

namespace PositionFilteringMapper
{
AWS_LOCATIONSERVICE_API PositionFiltering GetPositionFilteringForName(const Aws::String& name);

AWS_LOCATIONSERVICE_API Aws::String GetNameForPositionFiltering(PositionFiltering value);
} // namespace PositionFilteringMapper
} // namespace Model
} // namespace LocationService
} // namespace Aws
