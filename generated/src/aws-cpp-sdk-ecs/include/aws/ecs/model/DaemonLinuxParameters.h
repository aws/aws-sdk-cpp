/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/Device.h>
#include <aws/ecs/model/KernelCapabilities.h>
#include <aws/ecs/model/Tmpfs.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>The Linux-specific options that are applied to the daemon container, such as
 * Linux kernel capabilities.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DaemonLinuxParameters">AWS
 * API Reference</a></p>
 */
class DaemonLinuxParameters {
 public:
  AWS_ECS_API DaemonLinuxParameters() = default;
  AWS_ECS_API DaemonLinuxParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API DaemonLinuxParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Linux capabilities for the container that are added to or dropped from
   * the default configuration provided by Docker.</p>
   */
  inline const KernelCapabilities& GetCapabilities() const { return m_capabilities; }
  inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
  template <typename CapabilitiesT = KernelCapabilities>
  void SetCapabilities(CapabilitiesT&& value) {
    m_capabilitiesHasBeenSet = true;
    m_capabilities = std::forward<CapabilitiesT>(value);
  }
  template <typename CapabilitiesT = KernelCapabilities>
  DaemonLinuxParameters& WithCapabilities(CapabilitiesT&& value) {
    SetCapabilities(std::forward<CapabilitiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Any host devices to expose to the container.</p>
   */
  inline const Aws::Vector<Device>& GetDevices() const { return m_devices; }
  inline bool DevicesHasBeenSet() const { return m_devicesHasBeenSet; }
  template <typename DevicesT = Aws::Vector<Device>>
  void SetDevices(DevicesT&& value) {
    m_devicesHasBeenSet = true;
    m_devices = std::forward<DevicesT>(value);
  }
  template <typename DevicesT = Aws::Vector<Device>>
  DaemonLinuxParameters& WithDevices(DevicesT&& value) {
    SetDevices(std::forward<DevicesT>(value));
    return *this;
  }
  template <typename DevicesT = Device>
  DaemonLinuxParameters& AddDevices(DevicesT&& value) {
    m_devicesHasBeenSet = true;
    m_devices.emplace_back(std::forward<DevicesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Run an <code>init</code> process inside the container that forwards signals
   * and reaps processes.</p>
   */
  inline bool GetInitProcessEnabled() const { return m_initProcessEnabled; }
  inline bool InitProcessEnabledHasBeenSet() const { return m_initProcessEnabledHasBeenSet; }
  inline void SetInitProcessEnabled(bool value) {
    m_initProcessEnabledHasBeenSet = true;
    m_initProcessEnabled = value;
  }
  inline DaemonLinuxParameters& WithInitProcessEnabled(bool value) {
    SetInitProcessEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The container path, mount options, and size (in MiB) of the tmpfs mount.</p>
   */
  inline const Aws::Vector<Tmpfs>& GetTmpfs() const { return m_tmpfs; }
  inline bool TmpfsHasBeenSet() const { return m_tmpfsHasBeenSet; }
  template <typename TmpfsT = Aws::Vector<Tmpfs>>
  void SetTmpfs(TmpfsT&& value) {
    m_tmpfsHasBeenSet = true;
    m_tmpfs = std::forward<TmpfsT>(value);
  }
  template <typename TmpfsT = Aws::Vector<Tmpfs>>
  DaemonLinuxParameters& WithTmpfs(TmpfsT&& value) {
    SetTmpfs(std::forward<TmpfsT>(value));
    return *this;
  }
  template <typename TmpfsT = Tmpfs>
  DaemonLinuxParameters& AddTmpfs(TmpfsT&& value) {
    m_tmpfsHasBeenSet = true;
    m_tmpfs.emplace_back(std::forward<TmpfsT>(value));
    return *this;
  }
  ///@}
 private:
  KernelCapabilities m_capabilities;

  Aws::Vector<Device> m_devices;

  bool m_initProcessEnabled{false};

  Aws::Vector<Tmpfs> m_tmpfs;
  bool m_capabilitiesHasBeenSet = false;
  bool m_devicesHasBeenSet = false;
  bool m_initProcessEnabledHasBeenSet = false;
  bool m_tmpfsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
