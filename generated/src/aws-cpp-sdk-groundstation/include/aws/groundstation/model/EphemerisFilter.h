/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/AzElEphemerisFilter.h>

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
 * <p>Filter for selecting contacts that use a specific ephemeris".</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/EphemerisFilter">AWS
 * API Reference</a></p>
 */
class EphemerisFilter {
 public:
  AWS_GROUNDSTATION_API EphemerisFilter() = default;
  AWS_GROUNDSTATION_API EphemerisFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API EphemerisFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filter for <a>AzElEphemeris</a>.</p>
   */
  inline const AzElEphemerisFilter& GetAzEl() const { return m_azEl; }
  inline bool AzElHasBeenSet() const { return m_azElHasBeenSet; }
  template <typename AzElT = AzElEphemerisFilter>
  void SetAzEl(AzElT&& value) {
    m_azElHasBeenSet = true;
    m_azEl = std::forward<AzElT>(value);
  }
  template <typename AzElT = AzElEphemerisFilter>
  EphemerisFilter& WithAzEl(AzElT&& value) {
    SetAzEl(std::forward<AzElT>(value));
    return *this;
  }
  ///@}
 private:
  AzElEphemerisFilter m_azEl;
  bool m_azElHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
