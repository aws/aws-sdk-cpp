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
 * <p>Information about an import task created for bulk provisioning.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SidewalkStartImportInfo">AWS
 * API Reference</a></p>
 */
class SidewalkStartImportInfo {
 public:
  AWS_IOTWIRELESS_API SidewalkStartImportInfo() = default;
  AWS_IOTWIRELESS_API SidewalkStartImportInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTWIRELESS_API SidewalkStartImportInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The CSV file contained in an S3 bucket that's used for adding devices to an
   * import task.</p>
   */
  inline const Aws::String& GetDeviceCreationFile() const { return m_deviceCreationFile; }
  inline bool DeviceCreationFileHasBeenSet() const { return m_deviceCreationFileHasBeenSet; }
  template <typename DeviceCreationFileT = Aws::String>
  void SetDeviceCreationFile(DeviceCreationFileT&& value) {
    m_deviceCreationFileHasBeenSet = true;
    m_deviceCreationFile = std::forward<DeviceCreationFileT>(value);
  }
  template <typename DeviceCreationFileT = Aws::String>
  SidewalkStartImportInfo& WithDeviceCreationFile(DeviceCreationFileT&& value) {
    SetDeviceCreationFile(std::forward<DeviceCreationFileT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM role that allows AWS IoT Wireless to access the CSV file in the S3
   * bucket.</p>
   */
  inline const Aws::String& GetRole() const { return m_role; }
  inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
  template <typename RoleT = Aws::String>
  void SetRole(RoleT&& value) {
    m_roleHasBeenSet = true;
    m_role = std::forward<RoleT>(value);
  }
  template <typename RoleT = Aws::String>
  SidewalkStartImportInfo& WithRole(RoleT&& value) {
    SetRole(std::forward<RoleT>(value));
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
  SidewalkStartImportInfo& WithPositioning(PositioningT&& value) {
    SetPositioning(std::forward<PositioningT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_deviceCreationFile;

  Aws::String m_role;

  SidewalkPositioning m_positioning;
  bool m_deviceCreationFileHasBeenSet = false;
  bool m_roleHasBeenSet = false;
  bool m_positioningHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
