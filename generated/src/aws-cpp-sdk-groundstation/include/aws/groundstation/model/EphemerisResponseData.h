/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/EphemerisType.h>

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
 * <p>Ephemeris data for a contact.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/EphemerisResponseData">AWS
 * API Reference</a></p>
 */
class EphemerisResponseData {
 public:
  AWS_GROUNDSTATION_API EphemerisResponseData() = default;
  AWS_GROUNDSTATION_API EphemerisResponseData(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API EphemerisResponseData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Unique identifier of the ephemeris. Appears only for custom ephemerides.</p>
   */
  inline const Aws::String& GetEphemerisId() const { return m_ephemerisId; }
  inline bool EphemerisIdHasBeenSet() const { return m_ephemerisIdHasBeenSet; }
  template <typename EphemerisIdT = Aws::String>
  void SetEphemerisId(EphemerisIdT&& value) {
    m_ephemerisIdHasBeenSet = true;
    m_ephemerisId = std::forward<EphemerisIdT>(value);
  }
  template <typename EphemerisIdT = Aws::String>
  EphemerisResponseData& WithEphemerisId(EphemerisIdT&& value) {
    SetEphemerisId(std::forward<EphemerisIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type of ephemeris.</p>
   */
  inline EphemerisType GetEphemerisType() const { return m_ephemerisType; }
  inline bool EphemerisTypeHasBeenSet() const { return m_ephemerisTypeHasBeenSet; }
  inline void SetEphemerisType(EphemerisType value) {
    m_ephemerisTypeHasBeenSet = true;
    m_ephemerisType = value;
  }
  inline EphemerisResponseData& WithEphemerisType(EphemerisType value) {
    SetEphemerisType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_ephemerisId;

  EphemerisType m_ephemerisType{EphemerisType::NOT_SET};
  bool m_ephemerisIdHasBeenSet = false;
  bool m_ephemerisTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
