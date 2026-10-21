/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/GatewayRouteResources.h>
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
 * <p>A gateway route, which represents the association between a service and a
 * gateway and the service-specific infrastructure that the gateway manages for the
 * service's revisions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/GatewayRoute">AWS
 * API Reference</a></p>
 */
class GatewayRoute {
 public:
  AWS_ECS_API GatewayRoute() = default;
  AWS_ECS_API GatewayRoute(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API GatewayRoute& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the gateway route.</p>
   */
  inline const Aws::String& GetGatewayRouteArn() const { return m_gatewayRouteArn; }
  inline bool GatewayRouteArnHasBeenSet() const { return m_gatewayRouteArnHasBeenSet; }
  template <typename GatewayRouteArnT = Aws::String>
  void SetGatewayRouteArn(GatewayRouteArnT&& value) {
    m_gatewayRouteArnHasBeenSet = true;
    m_gatewayRouteArn = std::forward<GatewayRouteArnT>(value);
  }
  template <typename GatewayRouteArnT = Aws::String>
  GatewayRoute& WithGatewayRouteArn(GatewayRouteArnT&& value) {
    SetGatewayRouteArn(std::forward<GatewayRouteArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the service associated with the route.</p>
   */
  inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
  inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
  template <typename ServiceArnT = Aws::String>
  void SetServiceArn(ServiceArnT&& value) {
    m_serviceArnHasBeenSet = true;
    m_serviceArn = std::forward<ServiceArnT>(value);
  }
  template <typename ServiceArnT = Aws::String>
  GatewayRoute& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The task definition container port name that the route targets on the
   * service.</p>
   */
  inline const Aws::String& GetServiceContainerPortName() const { return m_serviceContainerPortName; }
  inline bool ServiceContainerPortNameHasBeenSet() const { return m_serviceContainerPortNameHasBeenSet; }
  template <typename ServiceContainerPortNameT = Aws::String>
  void SetServiceContainerPortName(ServiceContainerPortNameT&& value) {
    m_serviceContainerPortNameHasBeenSet = true;
    m_serviceContainerPortName = std::forward<ServiceContainerPortNameT>(value);
  }
  template <typename ServiceContainerPortNameT = Aws::String>
  GatewayRoute& WithServiceContainerPortName(ServiceContainerPortNameT&& value) {
    SetServiceContainerPortName(std::forward<ServiceContainerPortNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the gateway route.</p>
   */
  inline GatewayRouteStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(GatewayRouteStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GatewayRoute& WithStatus(GatewayRouteStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL for accessing the service, including the <code>https://</code>
   * scheme.</p>
   */
  inline const Aws::String& GetServiceUrl() const { return m_serviceUrl; }
  inline bool ServiceUrlHasBeenSet() const { return m_serviceUrlHasBeenSet; }
  template <typename ServiceUrlT = Aws::String>
  void SetServiceUrl(ServiceUrlT&& value) {
    m_serviceUrlHasBeenSet = true;
    m_serviceUrl = std::forward<ServiceUrlT>(value);
  }
  template <typename ServiceUrlT = Aws::String>
  GatewayRoute& WithServiceUrl(ServiceUrlT&& value) {
    SetServiceUrl(std::forward<ServiceUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The service-specific infrastructure that the gateway manages for the route,
   * keyed by gateway type.</p>
   */
  inline const GatewayRouteResources& GetResources() const { return m_resources; }
  inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
  template <typename ResourcesT = GatewayRouteResources>
  void SetResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources = std::forward<ResourcesT>(value);
  }
  template <typename ResourcesT = GatewayRouteResources>
  GatewayRoute& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_gatewayRouteArn;

  Aws::String m_serviceArn;

  Aws::String m_serviceContainerPortName;

  GatewayRouteStatus m_status{GatewayRouteStatus::NOT_SET};

  Aws::String m_serviceUrl;

  GatewayRouteResources m_resources;
  bool m_gatewayRouteArnHasBeenSet = false;
  bool m_serviceArnHasBeenSet = false;
  bool m_serviceContainerPortNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_serviceUrlHasBeenSet = false;
  bool m_resourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
