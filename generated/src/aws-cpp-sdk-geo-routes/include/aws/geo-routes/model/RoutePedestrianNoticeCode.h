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
enum class RoutePedestrianNoticeCode {
  NOT_SET,
  AccuratePolylineUnavailable,
  Other,
  ViolatedAvoidDirtRoad,
  ViolatedAvoidTunnel,
  ViolatedPedestrianOption
};

namespace RoutePedestrianNoticeCodeMapper {
AWS_GEOROUTES_API RoutePedestrianNoticeCode GetRoutePedestrianNoticeCodeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRoutePedestrianNoticeCode(RoutePedestrianNoticeCode value);
}  // namespace RoutePedestrianNoticeCodeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
