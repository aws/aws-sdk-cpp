/**
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
   * <p>Details related to the enter highway step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteEnterHighwayStepDetails">AWS
   * API Reference</a></p>
   */
  class RouteEnterHighwayStepDetails
  {
  public:
    AWS_GEOROUTES_API RouteEnterHighwayStepDetails();
    AWS_GEOROUTES_API RouteEnterHighwayStepDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteEnterHighwayStepDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the intersection, if applicable to the step.</p>
     */
    inline const Aws::Vector<LocalizedString>& GetIntersection() const{ return m_intersection; }
    inline bool IntersectionHasBeenSet() const { return m_intersectionHasBeenSet; }
    inline void SetIntersection(const Aws::Vector<LocalizedString>& value) { m_intersectionHasBeenSet = true; m_intersection = value; }
    inline void SetIntersection(Aws::Vector<LocalizedString>&& value) { m_intersectionHasBeenSet = true; m_intersection = std::move(value); }
    inline RouteEnterHighwayStepDetails& WithIntersection(const Aws::Vector<LocalizedString>& value) { SetIntersection(value); return *this;}
    inline RouteEnterHighwayStepDetails& WithIntersection(Aws::Vector<LocalizedString>&& value) { SetIntersection(std::move(value)); return *this;}
    inline RouteEnterHighwayStepDetails& AddIntersection(const LocalizedString& value) { m_intersectionHasBeenSet = true; m_intersection.push_back(value); return *this; }
    inline RouteEnterHighwayStepDetails& AddIntersection(LocalizedString&& value) { m_intersectionHasBeenSet = true; m_intersection.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Steering direction for the step.</p>
     */
    inline const RouteSteeringDirection& GetSteeringDirection() const{ return m_steeringDirection; }
    inline bool SteeringDirectionHasBeenSet() const { return m_steeringDirectionHasBeenSet; }
    inline void SetSteeringDirection(const RouteSteeringDirection& value) { m_steeringDirectionHasBeenSet = true; m_steeringDirection = value; }
    inline void SetSteeringDirection(RouteSteeringDirection&& value) { m_steeringDirectionHasBeenSet = true; m_steeringDirection = std::move(value); }
    inline RouteEnterHighwayStepDetails& WithSteeringDirection(const RouteSteeringDirection& value) { SetSteeringDirection(value); return *this;}
    inline RouteEnterHighwayStepDetails& WithSteeringDirection(RouteSteeringDirection&& value) { SetSteeringDirection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Angle of the turn.</p>
     */
    inline double GetTurnAngle() const{ return m_turnAngle; }
    inline bool TurnAngleHasBeenSet() const { return m_turnAngleHasBeenSet; }
    inline void SetTurnAngle(double value) { m_turnAngleHasBeenSet = true; m_turnAngle = value; }
    inline RouteEnterHighwayStepDetails& WithTurnAngle(double value) { SetTurnAngle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Intensity of the turn.</p>
     */
    inline const RouteTurnIntensity& GetTurnIntensity() const{ return m_turnIntensity; }
    inline bool TurnIntensityHasBeenSet() const { return m_turnIntensityHasBeenSet; }
    inline void SetTurnIntensity(const RouteTurnIntensity& value) { m_turnIntensityHasBeenSet = true; m_turnIntensity = value; }
    inline void SetTurnIntensity(RouteTurnIntensity&& value) { m_turnIntensityHasBeenSet = true; m_turnIntensity = std::move(value); }
    inline RouteEnterHighwayStepDetails& WithTurnIntensity(const RouteTurnIntensity& value) { SetTurnIntensity(value); return *this;}
    inline RouteEnterHighwayStepDetails& WithTurnIntensity(RouteTurnIntensity&& value) { SetTurnIntensity(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LocalizedString> m_intersection;
    bool m_intersectionHasBeenSet = false;

    RouteSteeringDirection m_steeringDirection;
    bool m_steeringDirectionHasBeenSet = false;

    double m_turnAngle;
    bool m_turnAngleHasBeenSet = false;

    RouteTurnIntensity m_turnIntensity;
    bool m_turnIntensityHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
