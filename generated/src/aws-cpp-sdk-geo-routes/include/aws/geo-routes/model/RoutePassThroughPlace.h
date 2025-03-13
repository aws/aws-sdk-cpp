/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The place where the waypoint is passed through and not treated as a
   * stop.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RoutePassThroughPlace">AWS
   * API Reference</a></p>
   */
  class RoutePassThroughPlace
  {
  public:
    AWS_GEOROUTES_API RoutePassThroughPlace() = default;
    AWS_GEOROUTES_API RoutePassThroughPlace(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RoutePassThroughPlace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Position provided in the request.</p>
     */
    inline const Aws::Vector<double>& GetOriginalPosition() const { return m_originalPosition; }
    inline bool OriginalPositionHasBeenSet() const { return m_originalPositionHasBeenSet; }
    template<typename OriginalPositionT = Aws::Vector<double>>
    void SetOriginalPosition(OriginalPositionT&& value) { m_originalPositionHasBeenSet = true; m_originalPosition = std::forward<OriginalPositionT>(value); }
    template<typename OriginalPositionT = Aws::Vector<double>>
    RoutePassThroughPlace& WithOriginalPosition(OriginalPositionT&& value) { SetOriginalPosition(std::forward<OriginalPositionT>(value)); return *this;}
    inline RoutePassThroughPlace& AddOriginalPosition(double value) { m_originalPositionHasBeenSet = true; m_originalPosition.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Position defined as <code>[longitude, latitude]</code>.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const { return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    template<typename PositionT = Aws::Vector<double>>
    void SetPosition(PositionT&& value) { m_positionHasBeenSet = true; m_position = std::forward<PositionT>(value); }
    template<typename PositionT = Aws::Vector<double>>
    RoutePassThroughPlace& WithPosition(PositionT&& value) { SetPosition(std::forward<PositionT>(value)); return *this;}
    inline RoutePassThroughPlace& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Index of the waypoint in the request.</p>
     */
    inline int GetWaypointIndex() const { return m_waypointIndex; }
    inline bool WaypointIndexHasBeenSet() const { return m_waypointIndexHasBeenSet; }
    inline void SetWaypointIndex(int value) { m_waypointIndexHasBeenSet = true; m_waypointIndex = value; }
    inline RoutePassThroughPlace& WithWaypointIndex(int value) { SetWaypointIndex(value); return *this;}
    ///@}
  private:

    Aws::Vector<double> m_originalPosition;
    bool m_originalPositionHasBeenSet = false;

    Aws::Vector<double> m_position;
    bool m_positionHasBeenSet = false;

    int m_waypointIndex{0};
    bool m_waypointIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
