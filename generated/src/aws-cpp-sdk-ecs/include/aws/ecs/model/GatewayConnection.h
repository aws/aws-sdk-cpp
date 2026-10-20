/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/AccessType.h>
#include <aws/ecs/model/GatewayConnectionResources.h>
#include <aws/ecs/model/GatewayRouteStatus.h>

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
 * <p>A gateway-managed connection for a service revision. A connection represents
 * the association between the service's gateway connector and a specific gateway,
 * along with the infrastructure that the gateway created for it.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/GatewayConnection">AWS
 * API Reference</a></p>
 */
class GatewayConnection {
 public:
  AWS_ECS_API GatewayConnection() = default;
  AWS_ECS_API GatewayConnection(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API GatewayConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the gateway.</p>
   */
  inline const Aws::String& GetGatewayArn() const { return m_gatewayArn; }
  inline bool GatewayArnHasBeenSet() const { return m_gatewayArnHasBeenSet; }
  template <typename GatewayArnT = Aws::String>
  void SetGatewayArn(GatewayArnT&& value) {
    m_gatewayArnHasBeenSet = true;
    m_gatewayArn = std::forward<GatewayArnT>(value);
  }
  template <typename GatewayArnT = Aws::String>
  GatewayConnection& WithGatewayArn(GatewayArnT&& value) {
    SetGatewayArn(std::forward<GatewayArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the gateway route for the connection.</p>
   */
  inline const Aws::String& GetGatewayRouteArn() const { return m_gatewayRouteArn; }
  inline bool GatewayRouteArnHasBeenSet() const { return m_gatewayRouteArnHasBeenSet; }
  template <typename GatewayRouteArnT = Aws::String>
  void SetGatewayRouteArn(GatewayRouteArnT&& value) {
    m_gatewayRouteArnHasBeenSet = true;
    m_gatewayRouteArn = std::forward<GatewayRouteArnT>(value);
  }
  template <typename GatewayRouteArnT = Aws::String>
  GatewayConnection& WithGatewayRouteArn(GatewayRouteArnT&& value) {
    SetGatewayRouteArn(std::forward<GatewayRouteArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the service port that receives gateway-managed ingress
   * traffic.</p>
   */
  inline const Aws::String& GetPortName() const { return m_portName; }
  inline bool PortNameHasBeenSet() const { return m_portNameHasBeenSet; }
  template <typename PortNameT = Aws::String>
  void SetPortName(PortNameT&& value) {
    m_portNameHasBeenSet = true;
    m_portName = std::forward<PortNameT>(value);
  }
  template <typename PortNameT = Aws::String>
  GatewayConnection& WithPortName(PortNameT&& value) {
    SetPortName(std::forward<PortNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL that the gateway uses to route ingress traffic to the service.</p>
   */
  inline const Aws::String& GetServiceUrl() const { return m_serviceUrl; }
  inline bool ServiceUrlHasBeenSet() const { return m_serviceUrlHasBeenSet; }
  template <typename ServiceUrlT = Aws::String>
  void SetServiceUrl(ServiceUrlT&& value) {
    m_serviceUrlHasBeenSet = true;
    m_serviceUrl = std::forward<ServiceUrlT>(value);
  }
  template <typename ServiceUrlT = Aws::String>
  GatewayConnection& WithServiceUrl(ServiceUrlT&& value) {
    SetServiceUrl(std::forward<ServiceUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The access type of the gateway ingress path.</p> <p>Valid values:</p> <ul>
   * <li> <p> <code>PUBLIC</code> - The ingress path is publicly accessible.</p>
   * </li> <li> <p> <code>PRIVATE</code> - The ingress path is only accessible
   * privately.</p> </li> </ul>
   */
  inline AccessType GetAccessType() const { return m_accessType; }
  inline bool AccessTypeHasBeenSet() const { return m_accessTypeHasBeenSet; }
  inline void SetAccessType(AccessType value) {
    m_accessTypeHasBeenSet = true;
    m_accessType = value;
  }
  inline GatewayConnection& WithAccessType(AccessType value) {
    SetAccessType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the gateway route for the connection.</p>
   */
  inline GatewayRouteStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(GatewayRouteStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GatewayConnection& WithStatus(GatewayRouteStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The gateway-managed infrastructure resources for the connection.</p>
   */
  inline const GatewayConnectionResources& GetResources() const { return m_resources; }
  inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
  template <typename ResourcesT = GatewayConnectionResources>
  void SetResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources = std::forward<ResourcesT>(value);
  }
  template <typename ResourcesT = GatewayConnectionResources>
  GatewayConnection& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_gatewayArn;

  Aws::String m_gatewayRouteArn;

  Aws::String m_portName;

  Aws::String m_serviceUrl;

  AccessType m_accessType{AccessType::NOT_SET};

  GatewayRouteStatus m_status{GatewayRouteStatus::NOT_SET};

  GatewayConnectionResources m_resources;
  bool m_gatewayArnHasBeenSet = false;
  bool m_gatewayRouteArnHasBeenSet = false;
  bool m_portNameHasBeenSet = false;
  bool m_serviceUrlHasBeenSet = false;
  bool m_accessTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_resourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
