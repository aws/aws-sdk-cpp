/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>

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
 * <p>Time-tagged azimuth elevation pointing data.</p> <p>Specifies the antenna
 * pointing direction at a specific time offset from the segment's reference
 * epoch.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/TimeAzEl">AWS
 * API Reference</a></p>
 */
class TimeAzEl {
 public:
  AWS_GROUNDSTATION_API TimeAzEl() = default;
  AWS_GROUNDSTATION_API TimeAzEl(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API TimeAzEl& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Time offset in atomic seconds from the segment's reference epoch.</p> <p>All
   * <code>dt</code> values within a segment must be in ascending order with no
   * duplicates.</p> <p> <code>dt</code> values may be:</p> <ul> <li> <p>negative</p>
   * </li> <li> <p>expressed as fractions of a second</p> </li> <li> <p>expressed in
   * scientific notation</p> </li> </ul>
   */
  inline double GetDt() const { return m_dt; }
  inline bool DtHasBeenSet() const { return m_dtHasBeenSet; }
  inline void SetDt(double value) {
    m_dtHasBeenSet = true;
    m_dt = value;
  }
  inline TimeAzEl& WithDt(double value) {
    SetDt(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Azimuth angle at the specified time.</p> <p>Valid ranges by unit:</p> <ul>
   * <li> <p> <code>DEGREE_ANGLE</code>: -180 to 360 degrees, measured clockwise from
   * true north</p> </li> <li> <p> <code>RADIAN</code>: -π to 2π radians, measured
   * clockwise from true north</p> </li> </ul>
   */
  inline double GetAz() const { return m_az; }
  inline bool AzHasBeenSet() const { return m_azHasBeenSet; }
  inline void SetAz(double value) {
    m_azHasBeenSet = true;
    m_az = value;
  }
  inline TimeAzEl& WithAz(double value) {
    SetAz(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Elevation angle at the specified time.</p> <p>Valid ranges by unit:</p> <ul>
   * <li> <p> <code>DEGREE_ANGLE</code>: -90 to 90 degrees, where 0 is the horizon,
   * 90 is zenith, and negative values are below the horizon </p> </li> <li> <p>
   * <code>RADIAN</code>: -π/2 to π/2 radians, where 0 is the horizon, π/2 is zenith,
   * and negative values are below the horizon </p> </li> </ul>
   */
  inline double GetEl() const { return m_el; }
  inline bool ElHasBeenSet() const { return m_elHasBeenSet; }
  inline void SetEl(double value) {
    m_elHasBeenSet = true;
    m_el = value;
  }
  inline TimeAzEl& WithEl(double value) {
    SetEl(value);
    return *this;
  }
  ///@}
 private:
  double m_dt{0.0};
  bool m_dtHasBeenSet = false;

  double m_az{0.0};
  bool m_azHasBeenSet = false;

  double m_el{0.0};
  bool m_elHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
