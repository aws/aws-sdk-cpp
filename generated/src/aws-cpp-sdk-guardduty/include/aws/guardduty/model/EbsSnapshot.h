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
 * <p>Contains information about an EBS snapshot that was scanned for
 * malware.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/EbsSnapshot">AWS
 * API Reference</a></p>
 */
class EbsSnapshot {
 public:
  AWS_GUARDDUTY_API EbsSnapshot() = default;
  AWS_GUARDDUTY_API EbsSnapshot(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API EbsSnapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The device name of the EBS snapshot that was scanned.</p>
   */
  inline const Aws::String& GetDeviceName() const { return m_deviceName; }
  inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
  template <typename DeviceNameT = Aws::String>
  void SetDeviceName(DeviceNameT&& value) {
    m_deviceNameHasBeenSet = true;
    m_deviceName = std::forward<DeviceNameT>(value);
  }
  template <typename DeviceNameT = Aws::String>
  EbsSnapshot& WithDeviceName(DeviceNameT&& value) {
    SetDeviceName(std::forward<DeviceNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_deviceName;
  bool m_deviceNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
