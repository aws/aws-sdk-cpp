/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/AzElProgramTrackSettings.h>
#include <aws/groundstation/model/OemProgramTrackSettings.h>
#include <aws/groundstation/model/TleProgramTrackSettings.h>

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
 * <p>Program track settings for an antenna during a contact.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ProgramTrackSettings">AWS
 * API Reference</a></p>
 */
class ProgramTrackSettings {
 public:
  AWS_GROUNDSTATION_API ProgramTrackSettings() = default;
  AWS_GROUNDSTATION_API ProgramTrackSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API ProgramTrackSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Program track settings for <a>AzElEphemeris</a>.</p>
   */
  inline const AzElProgramTrackSettings& GetAzEl() const { return m_azEl; }
  inline bool AzElHasBeenSet() const { return m_azElHasBeenSet; }
  template <typename AzElT = AzElProgramTrackSettings>
  void SetAzEl(AzElT&& value) {
    m_azElHasBeenSet = true;
    m_azEl = std::forward<AzElT>(value);
  }
  template <typename AzElT = AzElProgramTrackSettings>
  ProgramTrackSettings& WithAzEl(AzElT&& value) {
    SetAzEl(std::forward<AzElT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Program track settings for <a>OEMEphemeris</a>.</p>
   */
  inline const OemProgramTrackSettings& GetOem() const { return m_oem; }
  inline bool OemHasBeenSet() const { return m_oemHasBeenSet; }
  template <typename OemT = OemProgramTrackSettings>
  void SetOem(OemT&& value) {
    m_oemHasBeenSet = true;
    m_oem = std::forward<OemT>(value);
  }
  template <typename OemT = OemProgramTrackSettings>
  ProgramTrackSettings& WithOem(OemT&& value) {
    SetOem(std::forward<OemT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Program track settings for <a>TLEEphemeris</a>.</p>
   */
  inline const TleProgramTrackSettings& GetTle() const { return m_tle; }
  inline bool TleHasBeenSet() const { return m_tleHasBeenSet; }
  template <typename TleT = TleProgramTrackSettings>
  void SetTle(TleT&& value) {
    m_tleHasBeenSet = true;
    m_tle = std::forward<TleT>(value);
  }
  template <typename TleT = TleProgramTrackSettings>
  ProgramTrackSettings& WithTle(TleT&& value) {
    SetTle(std::forward<TleT>(value));
    return *this;
  }
  ///@}
 private:
  AzElProgramTrackSettings m_azEl;

  OemProgramTrackSettings m_oem;

  TleProgramTrackSettings m_tle;
  bool m_azElHasBeenSet = false;
  bool m_oemHasBeenSet = false;
  bool m_tleHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
