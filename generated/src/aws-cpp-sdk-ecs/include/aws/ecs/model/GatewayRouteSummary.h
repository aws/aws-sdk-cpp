/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
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
 * <p>A summary of a gateway route that is returned by the
 * <code>ListGatewayRoutes</code> operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/GatewayRouteSummary">AWS
 * API Reference</a></p>
 */
class GatewayRouteSummary {
 public:
  AWS_ECS_API GatewayRouteSummary() = default;
  AWS_ECS_API GatewayRouteSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API GatewayRouteSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  GatewayRouteSummary& WithGatewayRouteArn(GatewayRouteArnT&& value) {
    SetGatewayRouteArn(std::forward<GatewayRouteArnT>(value));
    return *this;
  }
  ///@}

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
  GatewayRouteSummary& WithGatewayArn(GatewayArnT&& value) {
    SetGatewayArn(std::forward<GatewayArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the cluster.</p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  GatewayRouteSummary& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the service.</p>
   */
  inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
  inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
  template <typename ServiceArnT = Aws::String>
  void SetServiceArn(ServiceArnT&& value) {
    m_serviceArnHasBeenSet = true;
    m_serviceArn = std::forward<ServiceArnT>(value);
  }
  template <typename ServiceArnT = Aws::String>
  GatewayRouteSummary& WithServiceArn(ServiceArnT&& value) {
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
  GatewayRouteSummary& WithServiceContainerPortName(ServiceContainerPortNameT&& value) {
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
  inline GatewayRouteSummary& WithStatus(GatewayRouteStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_gatewayRouteArn;

  Aws::String m_gatewayArn;

  Aws::String m_clusterArn;

  Aws::String m_serviceArn;

  Aws::String m_serviceContainerPortName;

  GatewayRouteStatus m_status{GatewayRouteStatus::NOT_SET};
  bool m_gatewayRouteArnHasBeenSet = false;
  bool m_gatewayArnHasBeenSet = false;
  bool m_clusterArnHasBeenSet = false;
  bool m_serviceArnHasBeenSet = false;
  bool m_serviceContainerPortNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
