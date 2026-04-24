/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GroundStation {
namespace Model {

/**
 * <p>An antenna at a ground station.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/AntennaListItem">AWS
 * API Reference</a></p>
 */
class AntennaListItem {
 public:
  AWS_GROUNDSTATION_API AntennaListItem() = default;
  AWS_GROUNDSTATION_API AntennaListItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API AntennaListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Name of the ground station the antenna is associated with.</p>
   */
  inline const Aws::String& GetGroundStationName() const { return m_groundStationName; }
  inline bool GroundStationNameHasBeenSet() const { return m_groundStationNameHasBeenSet; }
  template <typename GroundStationNameT = Aws::String>
  void SetGroundStationName(GroundStationNameT&& value) {
    m_groundStationNameHasBeenSet = true;
    m_groundStationName = std::forward<GroundStationNameT>(value);
  }
  template <typename GroundStationNameT = Aws::String>
  AntennaListItem& WithGroundStationName(GroundStationNameT&& value) {
    SetGroundStationName(std::forward<GroundStationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Name of the antenna.</p>
   */
  inline const Aws::String& GetAntennaName() const { return m_antennaName; }
  inline bool AntennaNameHasBeenSet() const { return m_antennaNameHasBeenSet; }
  template <typename AntennaNameT = Aws::String>
  void SetAntennaName(AntennaNameT&& value) {
    m_antennaNameHasBeenSet = true;
    m_antennaName = std::forward<AntennaNameT>(value);
  }
  template <typename AntennaNameT = Aws::String>
  AntennaListItem& WithAntennaName(AntennaNameT&& value) {
    SetAntennaName(std::forward<AntennaNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Region of the antenna.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  AntennaListItem& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_groundStationName;

  Aws::String m_antennaName;

  Aws::String m_region;
  bool m_groundStationNameHasBeenSet = false;
  bool m_antennaNameHasBeenSet = false;
  bool m_regionHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
