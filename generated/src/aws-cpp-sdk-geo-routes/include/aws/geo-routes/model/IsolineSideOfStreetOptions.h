/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/SideOfStreetMatchingStrategy.h>

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
 * <p>Controls how points are matched to specific sides of streets. This is
 * important when the side of the street matters for accessibility - for example,
 * when building entrances or parking lot access points can only be reached from
 * one side of a divided road.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/IsolineSideOfStreetOptions">AWS
 * API Reference</a></p>
 */
class IsolineSideOfStreetOptions {
 public:
  AWS_GEOROUTES_API IsolineSideOfStreetOptions() = default;
  AWS_GEOROUTES_API IsolineSideOfStreetOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API IsolineSideOfStreetOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The <code>[longitude, latitude]</code> coordinates of the point that should
   * be matched to a specific side of the street.</p>
   */
  inline const Aws::Vector<double>& GetPosition() const { return m_position; }
  inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
  template <typename PositionT = Aws::Vector<double>>
  void SetPosition(PositionT&& value) {
    m_positionHasBeenSet = true;
    m_position = std::forward<PositionT>(value);
  }
  template <typename PositionT = Aws::Vector<double>>
  IsolineSideOfStreetOptions& WithPosition(PositionT&& value) {
    SetPosition(std::forward<PositionT>(value));
    return *this;
  }
  inline IsolineSideOfStreetOptions& AddPosition(double value) {
    m_positionHasBeenSet = true;
    m_position.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Controls whether side-of-street matching is applied to any street
   * (<code>AnyStreet</code>) or only to divided roads
   * (<code>DividedStreetOnly</code>). This is important when the exact side of the
   * street matters - for example, if a building entrance is only accessible from one
   * side of a divided highway, or if a parking lot can only be entered from
   * northbound lanes. Without correct side-of-street matching, travel time estimates
   * may be inaccurate because they don't account for necessary U-turns or detours to
   * reach the correct side.</p> <p>Default value: <code>DividedStreetOnly</code>
   * </p>
   */
  inline SideOfStreetMatchingStrategy GetUseWith() const { return m_useWith; }
  inline bool UseWithHasBeenSet() const { return m_useWithHasBeenSet; }
  inline void SetUseWith(SideOfStreetMatchingStrategy value) {
    m_useWithHasBeenSet = true;
    m_useWith = value;
  }
  inline IsolineSideOfStreetOptions& WithUseWith(SideOfStreetMatchingStrategy value) {
    SetUseWith(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<double> m_position;

  SideOfStreetMatchingStrategy m_useWith{SideOfStreetMatchingStrategy::NOT_SET};
  bool m_positionHasBeenSet = false;
  bool m_useWithHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
