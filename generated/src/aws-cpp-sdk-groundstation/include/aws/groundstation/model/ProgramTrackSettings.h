/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/AzElProgramTrackSettings.h>

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
 private:
  AzElProgramTrackSettings m_azEl;
  bool m_azElHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
