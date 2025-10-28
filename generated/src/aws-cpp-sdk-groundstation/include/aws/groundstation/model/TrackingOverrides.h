/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/ProgramTrackSettings.h>

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
 * <p>Overrides the default tracking configuration on an antenna during a
 * contact.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/TrackingOverrides">AWS
 * API Reference</a></p>
 */
class TrackingOverrides {
 public:
  AWS_GROUNDSTATION_API TrackingOverrides() = default;
  AWS_GROUNDSTATION_API TrackingOverrides(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API TrackingOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Program track settings to override for antenna tracking during the
   * contact.</p>
   */
  inline const ProgramTrackSettings& GetProgramTrackSettings() const { return m_programTrackSettings; }
  inline bool ProgramTrackSettingsHasBeenSet() const { return m_programTrackSettingsHasBeenSet; }
  template <typename ProgramTrackSettingsT = ProgramTrackSettings>
  void SetProgramTrackSettings(ProgramTrackSettingsT&& value) {
    m_programTrackSettingsHasBeenSet = true;
    m_programTrackSettings = std::forward<ProgramTrackSettingsT>(value);
  }
  template <typename ProgramTrackSettingsT = ProgramTrackSettings>
  TrackingOverrides& WithProgramTrackSettings(ProgramTrackSettingsT&& value) {
    SetProgramTrackSettings(std::forward<ProgramTrackSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  ProgramTrackSettings m_programTrackSettings;
  bool m_programTrackSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
