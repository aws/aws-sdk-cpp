/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/EphemeralEBSVolumeConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>A block device mapping for an instance store (ephemeral)
 * volume.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/EphemeralBlockDeviceMapping">AWS
 * API Reference</a></p>
 */
class EphemeralBlockDeviceMapping {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API EphemeralBlockDeviceMapping() = default;
  AWS_BEDROCKAGENTCORECONTROL_API EphemeralBlockDeviceMapping(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API EphemeralBlockDeviceMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The device name, for example <code>/dev/sdh</code> or <code>xvdh</code>.</p>
   */
  inline const Aws::String& GetDeviceName() const { return m_deviceName; }
  inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
  template <typename DeviceNameT = Aws::String>
  void SetDeviceName(DeviceNameT&& value) {
    m_deviceNameHasBeenSet = true;
    m_deviceName = std::forward<DeviceNameT>(value);
  }
  template <typename DeviceNameT = Aws::String>
  EphemeralBlockDeviceMapping& WithDeviceName(DeviceNameT&& value) {
    SetDeviceName(std::forward<DeviceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The virtual device name (<code>ephemeralN</code>). Instance store volumes are
   * numbered starting from 0. The number of available instance store volumes depends
   * on the instance type. After you connect to the instance, you must mount the
   * volume.</p>
   */
  inline const Aws::String& GetVirtualName() const { return m_virtualName; }
  inline bool VirtualNameHasBeenSet() const { return m_virtualNameHasBeenSet; }
  template <typename VirtualNameT = Aws::String>
  void SetVirtualName(VirtualNameT&& value) {
    m_virtualNameHasBeenSet = true;
    m_virtualName = std::forward<VirtualNameT>(value);
  }
  template <typename VirtualNameT = Aws::String>
  EphemeralBlockDeviceMapping& WithVirtualName(VirtualNameT&& value) {
    SetVirtualName(std::forward<VirtualNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const EphemeralEBSVolumeConfiguration& GetEbs() const { return m_ebs; }
  inline bool EbsHasBeenSet() const { return m_ebsHasBeenSet; }
  template <typename EbsT = EphemeralEBSVolumeConfiguration>
  void SetEbs(EbsT&& value) {
    m_ebsHasBeenSet = true;
    m_ebs = std::forward<EbsT>(value);
  }
  template <typename EbsT = EphemeralEBSVolumeConfiguration>
  EphemeralBlockDeviceMapping& WithEbs(EbsT&& value) {
    SetEbs(std::forward<EbsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_deviceName;

  Aws::String m_virtualName;

  EphemeralEBSVolumeConfiguration m_ebs;
  bool m_deviceNameHasBeenSet = false;
  bool m_virtualNameHasBeenSet = false;
  bool m_ebsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
