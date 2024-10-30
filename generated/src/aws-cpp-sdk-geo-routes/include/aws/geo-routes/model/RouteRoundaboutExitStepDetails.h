/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/RouteSteeringDirection.h>
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
   * <p>Details about the roundabout step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteRoundaboutExitStepDetails">AWS
   * API Reference</a></p>
   */
  class RouteRoundaboutExitStepDetails
  {
  public:
    AWS_GEOROUTES_API RouteRoundaboutExitStepDetails();
    AWS_GEOROUTES_API RouteRoundaboutExitStepDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteRoundaboutExitStepDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the intersection, if applicable to the step.</p>
     */
    inline const Aws::Vector<LocalizedString>& GetIntersection() const{ return m_intersection; }
    inline bool IntersectionHasBeenSet() const { return m_intersectionHasBeenSet; }
    inline void SetIntersection(const Aws::Vector<LocalizedString>& value) { m_intersectionHasBeenSet = true; m_intersection = value; }
    inline void SetIntersection(Aws::Vector<LocalizedString>&& value) { m_intersectionHasBeenSet = true; m_intersection = std::move(value); }
    inline RouteRoundaboutExitStepDetails& WithIntersection(const Aws::Vector<LocalizedString>& value) { SetIntersection(value); return *this;}
    inline RouteRoundaboutExitStepDetails& WithIntersection(Aws::Vector<LocalizedString>&& value) { SetIntersection(std::move(value)); return *this;}
    inline RouteRoundaboutExitStepDetails& AddIntersection(const LocalizedString& value) { m_intersectionHasBeenSet = true; m_intersection.push_back(value); return *this; }
    inline RouteRoundaboutExitStepDetails& AddIntersection(LocalizedString&& value) { m_intersectionHasBeenSet = true; m_intersection.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Exit to be taken.</p>
     */
    inline int GetRelativeExit() const{ return m_relativeExit; }
    inline bool RelativeExitHasBeenSet() const { return m_relativeExitHasBeenSet; }
    inline void SetRelativeExit(int value) { m_relativeExitHasBeenSet = true; m_relativeExit = value; }
    inline RouteRoundaboutExitStepDetails& WithRelativeExit(int value) { SetRelativeExit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Angle of the roundabout.</p>
     */
    inline double GetRoundaboutAngle() const{ return m_roundaboutAngle; }
    inline bool RoundaboutAngleHasBeenSet() const { return m_roundaboutAngleHasBeenSet; }
    inline void SetRoundaboutAngle(double value) { m_roundaboutAngleHasBeenSet = true; m_roundaboutAngle = value; }
    inline RouteRoundaboutExitStepDetails& WithRoundaboutAngle(double value) { SetRoundaboutAngle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Steering direction for the step.</p>
     */
    inline const RouteSteeringDirection& GetSteeringDirection() const{ return m_steeringDirection; }
    inline bool SteeringDirectionHasBeenSet() const { return m_steeringDirectionHasBeenSet; }
    inline void SetSteeringDirection(const RouteSteeringDirection& value) { m_steeringDirectionHasBeenSet = true; m_steeringDirection = value; }
    inline void SetSteeringDirection(RouteSteeringDirection&& value) { m_steeringDirectionHasBeenSet = true; m_steeringDirection = std::move(value); }
    inline RouteRoundaboutExitStepDetails& WithSteeringDirection(const RouteSteeringDirection& value) { SetSteeringDirection(value); return *this;}
    inline RouteRoundaboutExitStepDetails& WithSteeringDirection(RouteSteeringDirection&& value) { SetSteeringDirection(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LocalizedString> m_intersection;
    bool m_intersectionHasBeenSet = false;

    int m_relativeExit;
    bool m_relativeExitHasBeenSet = false;

    double m_roundaboutAngle;
    bool m_roundaboutAngleHasBeenSet = false;

    RouteSteeringDirection m_steeringDirection;
    bool m_steeringDirectionHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
