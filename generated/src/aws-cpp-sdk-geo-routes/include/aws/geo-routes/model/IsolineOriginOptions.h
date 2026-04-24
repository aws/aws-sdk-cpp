/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/IsolineMatchingOptions.h>
#include <aws/geo-routes/model/IsolineSideOfStreetOptions.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GeoRoutes {
namespace Model {

/**
 * <p>Options that control how the origin point is interpreted when calculating
 * reachable areas. These options affect which roads are considered accessible from
 * the starting point and how initial routing decisions are made.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/IsolineOriginOptions">AWS
 * API Reference</a></p>
 */
class IsolineOriginOptions {
 public:
  AWS_GEOROUTES_API IsolineOriginOptions() = default;
  AWS_GEOROUTES_API IsolineOriginOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API IsolineOriginOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The distance in meters from the origin point within which certain routing
   * actions (such as U-turns or left turns across traffic) are restricted. This
   * helps generate more practical routes by avoiding potentially dangerous maneuvers
   * near the starting point.</p>
   */
  inline long long GetAvoidActionsForDistance() const { return m_avoidActionsForDistance; }
  inline bool AvoidActionsForDistanceHasBeenSet() const { return m_avoidActionsForDistanceHasBeenSet; }
  inline void SetAvoidActionsForDistance(long long value) {
    m_avoidActionsForDistanceHasBeenSet = true;
    m_avoidActionsForDistance = value;
  }
  inline IsolineOriginOptions& WithAvoidActionsForDistance(long long value) {
    SetAvoidActionsForDistance(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Initial direction of travel in degrees (0-360, where 0 is north). This
   * affects which road segments are considered accessible from the starting point
   * and is particularly useful when the origin is on a divided road or at a complex
   * intersection.</p>
   */
  inline double GetHeading() const { return m_heading; }
  inline bool HeadingHasBeenSet() const { return m_headingHasBeenSet; }
  inline void SetHeading(double value) {
    m_headingHasBeenSet = true;
    m_heading = value;
  }
  inline IsolineOriginOptions& WithHeading(double value) {
    SetHeading(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Controls how the origin point is matched to the road network, including
   * search radius and matching strategy.</p>
   */
  inline const IsolineMatchingOptions& GetMatching() const { return m_matching; }
  inline bool MatchingHasBeenSet() const { return m_matchingHasBeenSet; }
  template <typename MatchingT = IsolineMatchingOptions>
  void SetMatching(MatchingT&& value) {
    m_matchingHasBeenSet = true;
    m_matching = std::forward<MatchingT>(value);
  }
  template <typename MatchingT = IsolineMatchingOptions>
  IsolineOriginOptions& WithMatching(MatchingT&& value) {
    SetMatching(std::forward<MatchingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Controls which side of the street is considered accessible from the origin
   * point, particularly important for divided roads where building entrances or
   * parking access may only be available from one direction.</p>
   */
  inline const IsolineSideOfStreetOptions& GetSideOfStreet() const { return m_sideOfStreet; }
  inline bool SideOfStreetHasBeenSet() const { return m_sideOfStreetHasBeenSet; }
  template <typename SideOfStreetT = IsolineSideOfStreetOptions>
  void SetSideOfStreet(SideOfStreetT&& value) {
    m_sideOfStreetHasBeenSet = true;
    m_sideOfStreet = std::forward<SideOfStreetT>(value);
  }
  template <typename SideOfStreetT = IsolineSideOfStreetOptions>
  IsolineOriginOptions& WithSideOfStreet(SideOfStreetT&& value) {
    SetSideOfStreet(std::forward<SideOfStreetT>(value));
    return *this;
  }
  ///@}
 private:
  long long m_avoidActionsForDistance{0};

  double m_heading{0.0};

  IsolineMatchingOptions m_matching;

  IsolineSideOfStreetOptions m_sideOfStreet;
  bool m_avoidActionsForDistanceHasBeenSet = false;
  bool m_headingHasBeenSet = false;
  bool m_matchingHasBeenSet = false;
  bool m_sideOfStreetHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
