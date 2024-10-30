/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{
  enum class RouteVehicleNoticeCode
  {
    NOT_SET,
    AccuratePolylineUnavailable,
    Other,
    PotentialViolatedAvoidTollRoadUsage,
    PotentialViolatedCarpoolUsage,
    PotentialViolatedTurnRestrictionUsage,
    PotentialViolatedVehicleRestrictionUsage,
    PotentialViolatedZoneRestrictionUsage,
    SeasonalClosure,
    TollsDataTemporarilyUnavailable,
    TollsDataUnavailable,
    TollTransponder,
    ViolatedAvoidControlledAccessHighway,
    ViolatedAvoidDifficultTurns,
    ViolatedAvoidDirtRoad,
    ViolatedAvoidSeasonalClosure,
    ViolatedAvoidTollRoad,
    ViolatedAvoidTollTransponder,
    ViolatedAvoidTruckRoadType,
    ViolatedAvoidTunnel,
    ViolatedAvoidUTurns,
    ViolatedBlockedRoad,
    ViolatedCarpool,
    ViolatedEmergencyGate,
    ViolatedStartDirection,
    ViolatedTurnRestriction,
    ViolatedVehicleRestriction,
    ViolatedZoneRestriction
  };

namespace RouteVehicleNoticeCodeMapper
{
AWS_GEOROUTES_API RouteVehicleNoticeCode GetRouteVehicleNoticeCodeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteVehicleNoticeCode(RouteVehicleNoticeCode value);
} // namespace RouteVehicleNoticeCodeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
