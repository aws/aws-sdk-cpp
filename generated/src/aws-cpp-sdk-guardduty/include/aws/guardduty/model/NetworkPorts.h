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
 * <p>Contains information about the ports that network activity involved. A port
 * value can be a single port, a range such as <code>51000-51010</code>, or a
 * comma-separated list such as <code>443,8080</code>.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/NetworkPorts">AWS
 * API Reference</a></p>
 */
class NetworkPorts {
 public:
  AWS_GUARDDUTY_API NetworkPorts() = default;
  AWS_GUARDDUTY_API NetworkPorts(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API NetworkPorts& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The port on the target of the activity.</p>
   */
  inline const Aws::String& GetTargetPort() const { return m_targetPort; }
  inline bool TargetPortHasBeenSet() const { return m_targetPortHasBeenSet; }
  template <typename TargetPortT = Aws::String>
  void SetTargetPort(TargetPortT&& value) {
    m_targetPortHasBeenSet = true;
    m_targetPort = std::forward<TargetPortT>(value);
  }
  template <typename TargetPortT = Aws::String>
  NetworkPorts& WithTargetPort(TargetPortT&& value) {
    SetTargetPort(std::forward<TargetPortT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port on the remote host.</p>
   */
  inline const Aws::String& GetRemotePort() const { return m_remotePort; }
  inline bool RemotePortHasBeenSet() const { return m_remotePortHasBeenSet; }
  template <typename RemotePortT = Aws::String>
  void SetRemotePort(RemotePortT&& value) {
    m_remotePortHasBeenSet = true;
    m_remotePort = std::forward<RemotePortT>(value);
  }
  template <typename RemotePortT = Aws::String>
  NetworkPorts& WithRemotePort(RemotePortT&& value) {
    SetRemotePort(std::forward<RemotePortT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port of the DNS resolver.</p>
   */
  inline const Aws::String& GetResolverPort() const { return m_resolverPort; }
  inline bool ResolverPortHasBeenSet() const { return m_resolverPortHasBeenSet; }
  template <typename ResolverPortT = Aws::String>
  void SetResolverPort(ResolverPortT&& value) {
    m_resolverPortHasBeenSet = true;
    m_resolverPort = std::forward<ResolverPortT>(value);
  }
  template <typename ResolverPortT = Aws::String>
  NetworkPorts& WithResolverPort(ResolverPortT&& value) {
    SetResolverPort(std::forward<ResolverPortT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ports that the activity involved.</p>
   */
  inline const Aws::String& GetPorts() const { return m_ports; }
  inline bool PortsHasBeenSet() const { return m_portsHasBeenSet; }
  template <typename PortsT = Aws::String>
  void SetPorts(PortsT&& value) {
    m_portsHasBeenSet = true;
    m_ports = std::forward<PortsT>(value);
  }
  template <typename PortsT = Aws::String>
  NetworkPorts& WithPorts(PortsT&& value) {
    SetPorts(std::forward<PortsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ports that the activity used.</p>
   */
  inline const Aws::String& GetPortsUsed() const { return m_portsUsed; }
  inline bool PortsUsedHasBeenSet() const { return m_portsUsedHasBeenSet; }
  template <typename PortsUsedT = Aws::String>
  void SetPortsUsed(PortsUsedT&& value) {
    m_portsUsedHasBeenSet = true;
    m_portsUsed = std::forward<PortsUsedT>(value);
  }
  template <typename PortsUsedT = Aws::String>
  NetworkPorts& WithPortsUsed(PortsUsedT&& value) {
    SetPortsUsed(std::forward<PortsUsedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of ports that the activity involved.</p>
   */
  inline long long GetPortCount() const { return m_portCount; }
  inline bool PortCountHasBeenSet() const { return m_portCountHasBeenSet; }
  inline void SetPortCount(long long value) {
    m_portCountHasBeenSet = true;
    m_portCount = value;
  }
  inline NetworkPorts& WithPortCount(long long value) {
    SetPortCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_targetPort;

  Aws::String m_remotePort;

  Aws::String m_resolverPort;

  Aws::String m_ports;

  Aws::String m_portsUsed;

  long long m_portCount{0};
  bool m_targetPortHasBeenSet = false;
  bool m_remotePortHasBeenSet = false;
  bool m_resolverPortHasBeenSet = false;
  bool m_portsHasBeenSet = false;
  bool m_portsUsedHasBeenSet = false;
  bool m_portCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
