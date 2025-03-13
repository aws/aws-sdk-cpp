/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteMatrixMatchingOptions.h>
#include <aws/geo-routes/model/RouteMatrixSideOfStreetOptions.h>
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
   * <p>Origin related options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteMatrixOriginOptions">AWS
   * API Reference</a></p>
   */
  class RouteMatrixOriginOptions
  {
  public:
    AWS_GEOROUTES_API RouteMatrixOriginOptions() = default;
    AWS_GEOROUTES_API RouteMatrixOriginOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteMatrixOriginOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Avoids actions for the provided distance. This is typically to consider for
     * users in moving vehicles who may not have sufficient time to make an action at
     * an origin or a destination.</p>
     */
    inline long long GetAvoidActionsForDistance() const { return m_avoidActionsForDistance; }
    inline bool AvoidActionsForDistanceHasBeenSet() const { return m_avoidActionsForDistanceHasBeenSet; }
    inline void SetAvoidActionsForDistance(long long value) { m_avoidActionsForDistanceHasBeenSet = true; m_avoidActionsForDistance = value; }
    inline RouteMatrixOriginOptions& WithAvoidActionsForDistance(long long value) { SetAvoidActionsForDistance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>GPS Heading at the position.</p>
     */
    inline double GetHeading() const { return m_heading; }
    inline bool HeadingHasBeenSet() const { return m_headingHasBeenSet; }
    inline void SetHeading(double value) { m_headingHasBeenSet = true; m_heading = value; }
    inline RouteMatrixOriginOptions& WithHeading(double value) { SetHeading(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options to configure matching the provided position to the road network.</p>
     */
    inline const RouteMatrixMatchingOptions& GetMatching() const { return m_matching; }
    inline bool MatchingHasBeenSet() const { return m_matchingHasBeenSet; }
    template<typename MatchingT = RouteMatrixMatchingOptions>
    void SetMatching(MatchingT&& value) { m_matchingHasBeenSet = true; m_matching = std::forward<MatchingT>(value); }
    template<typename MatchingT = RouteMatrixMatchingOptions>
    RouteMatrixOriginOptions& WithMatching(MatchingT&& value) { SetMatching(std::forward<MatchingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options to configure matching the provided position to a side of the
     * street.</p>
     */
    inline const RouteMatrixSideOfStreetOptions& GetSideOfStreet() const { return m_sideOfStreet; }
    inline bool SideOfStreetHasBeenSet() const { return m_sideOfStreetHasBeenSet; }
    template<typename SideOfStreetT = RouteMatrixSideOfStreetOptions>
    void SetSideOfStreet(SideOfStreetT&& value) { m_sideOfStreetHasBeenSet = true; m_sideOfStreet = std::forward<SideOfStreetT>(value); }
    template<typename SideOfStreetT = RouteMatrixSideOfStreetOptions>
    RouteMatrixOriginOptions& WithSideOfStreet(SideOfStreetT&& value) { SetSideOfStreet(std::forward<SideOfStreetT>(value)); return *this;}
    ///@}
  private:

    long long m_avoidActionsForDistance{0};
    bool m_avoidActionsForDistanceHasBeenSet = false;

    double m_heading{0.0};
    bool m_headingHasBeenSet = false;

    RouteMatrixMatchingOptions m_matching;
    bool m_matchingHasBeenSet = false;

    RouteMatrixSideOfStreetOptions m_sideOfStreet;
    bool m_sideOfStreetHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
