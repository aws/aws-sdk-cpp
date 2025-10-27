/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>

namespace Aws {
namespace GeoRoutes {
namespace Model {
enum class RoadSnapNoticeCode {
  NOT_SET,
  TracePointsHeadingIgnored,
  TracePointsIgnored,
  TracePointsMovedByLargeDistance,
  TracePointsNotMatched,
  TracePointsOutOfSequence,
  TracePointsSpeedEstimated,
  TracePointsSpeedIgnored
};

namespace RoadSnapNoticeCodeMapper {
AWS_GEOROUTES_API RoadSnapNoticeCode GetRoadSnapNoticeCodeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRoadSnapNoticeCode(RoadSnapNoticeCode value);
}  // namespace RoadSnapNoticeCodeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
