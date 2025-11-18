/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/SidewalkPositioning.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTWireless {
namespace Model {

/**
 * <p>The Sidewalk-related object containing positioning information used to
 * configure Sidewalk devices during import.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SidewalkListDevicesForImportInfo">AWS
 * API Reference</a></p>
 */
class SidewalkListDevicesForImportInfo {
 public:
  AWS_IOTWIRELESS_API SidewalkListDevicesForImportInfo() = default;
  AWS_IOTWIRELESS_API SidewalkListDevicesForImportInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTWIRELESS_API SidewalkListDevicesForImportInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Positioning object of the Sidewalk device.</p>
   */
  inline const SidewalkPositioning& GetPositioning() const { return m_positioning; }
  inline bool PositioningHasBeenSet() const { return m_positioningHasBeenSet; }
  template <typename PositioningT = SidewalkPositioning>
  void SetPositioning(PositioningT&& value) {
    m_positioningHasBeenSet = true;
    m_positioning = std::forward<PositioningT>(value);
  }
  template <typename PositioningT = SidewalkPositioning>
  SidewalkListDevicesForImportInfo& WithPositioning(PositioningT&& value) {
    SetPositioning(std::forward<PositioningT>(value));
    return *this;
  }
  ///@}
 private:
  SidewalkPositioning m_positioning;
  bool m_positioningHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
