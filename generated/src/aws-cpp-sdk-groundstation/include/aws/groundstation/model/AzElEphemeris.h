/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/AzElSegmentsData.h>

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
 * <p>Azimuth elevation ephemeris data.</p> <p> Use this ephemeris type to provide
 * pointing angles directly, rather than satellite orbital elements. Use this when
 * you need precise antenna pointing but have imprecise or unknown satellite
 * trajectory information. </p> <p> The azimuth elevation data specifies the
 * antenna pointing direction at specific times relative to a ground station
 * location. AWS Ground Station uses 4th order Lagrange interpolation to compute
 * pointing angles between the provided data points. </p> <p> AWS Ground Station
 * automatically filters interpolated pointing angles, including only those that
 * are above the site mask elevation of the specified ground station. </p> <p> For
 * more detail about providing azimuth elevation ephemerides to AWS Ground Station,
 * see the <a
 * href="https://docs.aws.amazon.com/ground-station/latest/ug/providing-azimuth-elevation-ephemeris-data.html">azimuth
 * elevation ephemeris section</a> of the AWS Ground Station User Guide.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/AzElEphemeris">AWS
 * API Reference</a></p>
 */
class AzElEphemeris {
 public:
  AWS_GROUNDSTATION_API AzElEphemeris() = default;
  AWS_GROUNDSTATION_API AzElEphemeris(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API AzElEphemeris& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ground station name for which you're providing azimuth elevation
   * data.</p> <p>This ephemeris is specific to this ground station and can't be used
   * at other locations.</p>
   */
  inline const Aws::String& GetGroundStation() const { return m_groundStation; }
  inline bool GroundStationHasBeenSet() const { return m_groundStationHasBeenSet; }
  template <typename GroundStationT = Aws::String>
  void SetGroundStation(GroundStationT&& value) {
    m_groundStationHasBeenSet = true;
    m_groundStation = std::forward<GroundStationT>(value);
  }
  template <typename GroundStationT = Aws::String>
  AzElEphemeris& WithGroundStation(GroundStationT&& value) {
    SetGroundStation(std::forward<GroundStationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Azimuth elevation segment data.</p> <p>You can provide data inline in the
   * request or through an Amazon S3 object reference.</p>
   */
  inline const AzElSegmentsData& GetData() const { return m_data; }
  inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
  template <typename DataT = AzElSegmentsData>
  void SetData(DataT&& value) {
    m_dataHasBeenSet = true;
    m_data = std::forward<DataT>(value);
  }
  template <typename DataT = AzElSegmentsData>
  AzElEphemeris& WithData(DataT&& value) {
    SetData(std::forward<DataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_groundStation;

  AzElSegmentsData m_data;
  bool m_groundStationHasBeenSet = false;
  bool m_dataHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
