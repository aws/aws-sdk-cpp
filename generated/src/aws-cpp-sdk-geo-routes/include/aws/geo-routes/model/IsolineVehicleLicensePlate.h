/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GeoRoutes {
namespace Model {

/**
 * <p>License plate information used in regions where road access or routing
 * restrictions are based on license plate numbers.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/IsolineVehicleLicensePlate">AWS
 * API Reference</a></p>
 */
class IsolineVehicleLicensePlate {
 public:
  AWS_GEOROUTES_API IsolineVehicleLicensePlate() = default;
  AWS_GEOROUTES_API IsolineVehicleLicensePlate(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API IsolineVehicleLicensePlate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The last character of the vehicle's license plate. Used to determine road
   * access restrictions in regions with license plate-based traffic management
   * systems.</p>
   */
  inline const Aws::String& GetLastCharacter() const { return m_lastCharacter; }
  inline bool LastCharacterHasBeenSet() const { return m_lastCharacterHasBeenSet; }
  template <typename LastCharacterT = Aws::String>
  void SetLastCharacter(LastCharacterT&& value) {
    m_lastCharacterHasBeenSet = true;
    m_lastCharacter = std::forward<LastCharacterT>(value);
  }
  template <typename LastCharacterT = Aws::String>
  IsolineVehicleLicensePlate& WithLastCharacter(LastCharacterT&& value) {
    SetLastCharacter(std::forward<LastCharacterT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_lastCharacter;
  bool m_lastCharacterHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
