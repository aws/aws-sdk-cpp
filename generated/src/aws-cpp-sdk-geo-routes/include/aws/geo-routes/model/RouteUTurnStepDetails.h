﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/RouteSteeringDirection.h>
#include <aws/geo-routes/model/RouteTurnIntensity.h>
#include <aws/geo-routes/model/LocalizedString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GeoRoutes
{
namespace Model
{

  /**
   * <p>Details related to the U-turn step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteUTurnStepDetails">AWS
   * API Reference</a></p>
   */
  class RouteUTurnStepDetails
  {
  public:
    AWS_GEOROUTES_API RouteUTurnStepDetails() = default;
    AWS_GEOROUTES_API RouteUTurnStepDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteUTurnStepDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the intersection, if applicable to the step.</p>
     */
    inline const Aws::Vector<LocalizedString>& GetIntersection() const { return m_intersection; }
    inline bool IntersectionHasBeenSet() const { return m_intersectionHasBeenSet; }
    template<typename IntersectionT = Aws::Vector<LocalizedString>>
    void SetIntersection(IntersectionT&& value) { m_intersectionHasBeenSet = true; m_intersection = std::forward<IntersectionT>(value); }
    template<typename IntersectionT = Aws::Vector<LocalizedString>>
    RouteUTurnStepDetails& WithIntersection(IntersectionT&& value) { SetIntersection(std::forward<IntersectionT>(value)); return *this;}
    template<typename IntersectionT = LocalizedString>
    RouteUTurnStepDetails& AddIntersection(IntersectionT&& value) { m_intersectionHasBeenSet = true; m_intersection.emplace_back(std::forward<IntersectionT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Steering direction for the step.</p>
     */
    inline RouteSteeringDirection GetSteeringDirection() const { return m_steeringDirection; }
    inline bool SteeringDirectionHasBeenSet() const { return m_steeringDirectionHasBeenSet; }
    inline void SetSteeringDirection(RouteSteeringDirection value) { m_steeringDirectionHasBeenSet = true; m_steeringDirection = value; }
    inline RouteUTurnStepDetails& WithSteeringDirection(RouteSteeringDirection value) { SetSteeringDirection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Angle of the turn.</p>
     */
    inline double GetTurnAngle() const { return m_turnAngle; }
    inline bool TurnAngleHasBeenSet() const { return m_turnAngleHasBeenSet; }
    inline void SetTurnAngle(double value) { m_turnAngleHasBeenSet = true; m_turnAngle = value; }
    inline RouteUTurnStepDetails& WithTurnAngle(double value) { SetTurnAngle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Intensity of the turn.</p>
     */
    inline RouteTurnIntensity GetTurnIntensity() const { return m_turnIntensity; }
    inline bool TurnIntensityHasBeenSet() const { return m_turnIntensityHasBeenSet; }
    inline void SetTurnIntensity(RouteTurnIntensity value) { m_turnIntensityHasBeenSet = true; m_turnIntensity = value; }
    inline RouteUTurnStepDetails& WithTurnIntensity(RouteTurnIntensity value) { SetTurnIntensity(value); return *this;}
    ///@}
  private:

    Aws::Vector<LocalizedString> m_intersection;
    bool m_intersectionHasBeenSet = false;

    RouteSteeringDirection m_steeringDirection{RouteSteeringDirection::NOT_SET};
    bool m_steeringDirectionHasBeenSet = false;

    double m_turnAngle{0.0};
    bool m_turnAngleHasBeenSet = false;

    RouteTurnIntensity m_turnIntensity{RouteTurnIntensity::NOT_SET};
    bool m_turnIntensityHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
