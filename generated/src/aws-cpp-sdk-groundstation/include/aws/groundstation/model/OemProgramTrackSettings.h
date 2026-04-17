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
 * <p>Program track settings for <a>OEMEphemeris</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/OemProgramTrackSettings">AWS
 * API Reference</a></p>
 */
class OemProgramTrackSettings {
 public:
  AWS_GROUNDSTATION_API OemProgramTrackSettings() = default;
  AWS_GROUNDSTATION_API OemProgramTrackSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API OemProgramTrackSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Unique identifier of the OEM ephemeris.</p>
   */
  inline const Aws::String& GetEphemerisId() const { return m_ephemerisId; }
  inline bool EphemerisIdHasBeenSet() const { return m_ephemerisIdHasBeenSet; }
  template <typename EphemerisIdT = Aws::String>
  void SetEphemerisId(EphemerisIdT&& value) {
    m_ephemerisIdHasBeenSet = true;
    m_ephemerisId = std::forward<EphemerisIdT>(value);
  }
  template <typename EphemerisIdT = Aws::String>
  OemProgramTrackSettings& WithEphemerisId(EphemerisIdT&& value) {
    SetEphemerisId(std::forward<EphemerisIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ephemerisId;
  bool m_ephemerisIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
