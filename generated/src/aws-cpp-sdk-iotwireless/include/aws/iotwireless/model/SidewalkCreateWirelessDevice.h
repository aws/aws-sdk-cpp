/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Sidewalk object for creating a wireless device.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SidewalkCreateWirelessDevice">AWS
 * API Reference</a></p>
 */
class SidewalkCreateWirelessDevice {
 public:
  AWS_IOTWIRELESS_API SidewalkCreateWirelessDevice() = default;
  AWS_IOTWIRELESS_API SidewalkCreateWirelessDevice(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTWIRELESS_API SidewalkCreateWirelessDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the Sidewalk device profile.</p>
   */
  inline const Aws::String& GetDeviceProfileId() const { return m_deviceProfileId; }
  inline bool DeviceProfileIdHasBeenSet() const { return m_deviceProfileIdHasBeenSet; }
  template <typename DeviceProfileIdT = Aws::String>
  void SetDeviceProfileId(DeviceProfileIdT&& value) {
    m_deviceProfileIdHasBeenSet = true;
    m_deviceProfileId = std::forward<DeviceProfileIdT>(value);
  }
  template <typename DeviceProfileIdT = Aws::String>
  SidewalkCreateWirelessDevice& WithDeviceProfileId(DeviceProfileIdT&& value) {
    SetDeviceProfileId(std::forward<DeviceProfileIdT>(value));
    return *this;
  }
  ///@}

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
  SidewalkCreateWirelessDevice& WithPositioning(PositioningT&& value) {
    SetPositioning(std::forward<PositioningT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Sidewalk manufacturing serial number.</p>
   */
  inline const Aws::String& GetSidewalkManufacturingSn() const { return m_sidewalkManufacturingSn; }
  inline bool SidewalkManufacturingSnHasBeenSet() const { return m_sidewalkManufacturingSnHasBeenSet; }
  template <typename SidewalkManufacturingSnT = Aws::String>
  void SetSidewalkManufacturingSn(SidewalkManufacturingSnT&& value) {
    m_sidewalkManufacturingSnHasBeenSet = true;
    m_sidewalkManufacturingSn = std::forward<SidewalkManufacturingSnT>(value);
  }
  template <typename SidewalkManufacturingSnT = Aws::String>
  SidewalkCreateWirelessDevice& WithSidewalkManufacturingSn(SidewalkManufacturingSnT&& value) {
    SetSidewalkManufacturingSn(std::forward<SidewalkManufacturingSnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_deviceProfileId;

  SidewalkPositioning m_positioning;

  Aws::String m_sidewalkManufacturingSn;
  bool m_deviceProfileIdHasBeenSet = false;
  bool m_positioningHasBeenSet = false;
  bool m_sidewalkManufacturingSnHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
