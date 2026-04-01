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
 * <p>Options that control how the destination point is interpreted and matched to
 * the road network when calculating reachable areas. This affects which roads are
 * considered accessible near the destination and how the final approach is
 * calculated.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/IsolineDestinationOptions">AWS
 * API Reference</a></p>
 */
class IsolineDestinationOptions {
 public:
  AWS_GEOROUTES_API IsolineDestinationOptions() = default;
  AWS_GEOROUTES_API IsolineDestinationOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API IsolineDestinationOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The distance in meters from the destination point within which certain
   * routing actions (such as U-turns or left turns across traffic) are restricted.
   * This helps generate more practical routes by avoiding potentially dangerous
   * maneuvers near the endpoint.</p>
   */
  inline long long GetAvoidActionsForDistance() const { return m_avoidActionsForDistance; }
  inline bool AvoidActionsForDistanceHasBeenSet() const { return m_avoidActionsForDistanceHasBeenSet; }
  inline void SetAvoidActionsForDistance(long long value) {
    m_avoidActionsForDistanceHasBeenSet = true;
    m_avoidActionsForDistance = value;
  }
  inline IsolineDestinationOptions& WithAvoidActionsForDistance(long long value) {
    SetAvoidActionsForDistance(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The initial direction of travel in degrees (0-360, where 0 is north). This
   * can affect which road segments are considered accessible from the starting
   * point.</p>
   */
  inline double GetHeading() const { return m_heading; }
  inline bool HeadingHasBeenSet() const { return m_headingHasBeenSet; }
  inline void SetHeading(double value) {
    m_headingHasBeenSet = true;
    m_heading = value;
  }
  inline IsolineDestinationOptions& WithHeading(double value) {
    SetHeading(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Controls how the destination point is matched to the road network, including
   * search radius and name-based matching preferences.</p>
   */
  inline const IsolineMatchingOptions& GetMatching() const { return m_matching; }
  inline bool MatchingHasBeenSet() const { return m_matchingHasBeenSet; }
  template <typename MatchingT = IsolineMatchingOptions>
  void SetMatching(MatchingT&& value) {
    m_matchingHasBeenSet = true;
    m_matching = std::forward<MatchingT>(value);
  }
  template <typename MatchingT = IsolineMatchingOptions>
  IsolineDestinationOptions& WithMatching(MatchingT&& value) {
    SetMatching(std::forward<MatchingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies which side of the street should be considered accessible, which is
   * important when building entrances or parking access points are only reachable
   * from one side of the road.</p>
   */
  inline const IsolineSideOfStreetOptions& GetSideOfStreet() const { return m_sideOfStreet; }
  inline bool SideOfStreetHasBeenSet() const { return m_sideOfStreetHasBeenSet; }
  template <typename SideOfStreetT = IsolineSideOfStreetOptions>
  void SetSideOfStreet(SideOfStreetT&& value) {
    m_sideOfStreetHasBeenSet = true;
    m_sideOfStreet = std::forward<SideOfStreetT>(value);
  }
  template <typename SideOfStreetT = IsolineSideOfStreetOptions>
  IsolineDestinationOptions& WithSideOfStreet(SideOfStreetT&& value) {
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
