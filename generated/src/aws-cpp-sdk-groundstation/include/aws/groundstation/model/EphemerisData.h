/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/AzElEphemeris.h>
#include <aws/groundstation/model/OEMEphemeris.h>
#include <aws/groundstation/model/TLEEphemeris.h>

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
 * <p>Ephemeris data.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/EphemerisData">AWS
 * API Reference</a></p>
 */
class EphemerisData {
 public:
  AWS_GROUNDSTATION_API EphemerisData() = default;
  AWS_GROUNDSTATION_API EphemerisData(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API EphemerisData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const TLEEphemeris& GetTle() const { return m_tle; }
  inline bool TleHasBeenSet() const { return m_tleHasBeenSet; }
  template <typename TleT = TLEEphemeris>
  void SetTle(TleT&& value) {
    m_tleHasBeenSet = true;
    m_tle = std::forward<TleT>(value);
  }
  template <typename TleT = TLEEphemeris>
  EphemerisData& WithTle(TleT&& value) {
    SetTle(std::forward<TleT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const OEMEphemeris& GetOem() const { return m_oem; }
  inline bool OemHasBeenSet() const { return m_oemHasBeenSet; }
  template <typename OemT = OEMEphemeris>
  void SetOem(OemT&& value) {
    m_oemHasBeenSet = true;
    m_oem = std::forward<OemT>(value);
  }
  template <typename OemT = OEMEphemeris>
  EphemerisData& WithOem(OemT&& value) {
    SetOem(std::forward<OemT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const AzElEphemeris& GetAzEl() const { return m_azEl; }
  inline bool AzElHasBeenSet() const { return m_azElHasBeenSet; }
  template <typename AzElT = AzElEphemeris>
  void SetAzEl(AzElT&& value) {
    m_azElHasBeenSet = true;
    m_azEl = std::forward<AzElT>(value);
  }
  template <typename AzElT = AzElEphemeris>
  EphemerisData& WithAzEl(AzElT&& value) {
    SetAzEl(std::forward<AzElT>(value));
    return *this;
  }
  ///@}
 private:
  TLEEphemeris m_tle;

  OEMEphemeris m_oem;

  AzElEphemeris m_azEl;
  bool m_tleHasBeenSet = false;
  bool m_oemHasBeenSet = false;
  bool m_azElHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
