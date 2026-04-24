/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains additional information about the detected threat.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AdditionalInfo">AWS
 * API Reference</a></p>
 */
class AdditionalInfo {
 public:
  AWS_GUARDDUTY_API AdditionalInfo() = default;
  AWS_GUARDDUTY_API AdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API AdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The version ID of the S3 object, if applicable.</p>
   */
  inline const Aws::String& GetVersionId() const { return m_versionId; }
  inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
  template <typename VersionIdT = Aws::String>
  void SetVersionId(VersionIdT&& value) {
    m_versionIdHasBeenSet = true;
    m_versionId = std::forward<VersionIdT>(value);
  }
  template <typename VersionIdT = Aws::String>
  AdditionalInfo& WithVersionId(VersionIdT&& value) {
    SetVersionId(std::forward<VersionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The device name of the EBS volume, if applicable.</p>
   */
  inline const Aws::String& GetDeviceName() const { return m_deviceName; }
  inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
  template <typename DeviceNameT = Aws::String>
  void SetDeviceName(DeviceNameT&& value) {
    m_deviceNameHasBeenSet = true;
    m_deviceName = std::forward<DeviceNameT>(value);
  }
  template <typename DeviceNameT = Aws::String>
  AdditionalInfo& WithDeviceName(DeviceNameT&& value) {
    SetDeviceName(std::forward<DeviceNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_versionId;

  Aws::String m_deviceName;
  bool m_versionIdHasBeenSet = false;
  bool m_deviceNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
