/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/GatewayConnectorFilters.h>
#include <aws/ecs/model/GatewayConnectorHealthCheck.h>

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
 * <p>A gateway connector that attaches an Amazon ECS service to a gateway ingress
 * path. The connector specifies the service port that receives gateway-managed
 * ingress traffic, along with the health check and traffic filters that the
 * gateway applies. A service can have at most one gateway connector.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/GatewayConnector">AWS
 * API Reference</a></p>
 */
class GatewayConnector {
 public:
  AWS_ECS_API GatewayConnector() = default;
  AWS_ECS_API GatewayConnector(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API GatewayConnector& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the service port that the gateway routes ingress traffic to.</p>
   */
  inline const Aws::String& GetPortName() const { return m_portName; }
  inline bool PortNameHasBeenSet() const { return m_portNameHasBeenSet; }
  template <typename PortNameT = Aws::String>
  void SetPortName(PortNameT&& value) {
    m_portNameHasBeenSet = true;
    m_portName = std::forward<PortNameT>(value);
  }
  template <typename PortNameT = Aws::String>
  GatewayConnector& WithPortName(PortNameT&& value) {
    SetPortName(std::forward<PortNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The health check that the gateway uses to determine whether the targets for
   * this connector are healthy.</p>
   */
  inline const GatewayConnectorHealthCheck& GetHealthCheck() const { return m_healthCheck; }
  inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }
  template <typename HealthCheckT = GatewayConnectorHealthCheck>
  void SetHealthCheck(HealthCheckT&& value) {
    m_healthCheckHasBeenSet = true;
    m_healthCheck = std::forward<HealthCheckT>(value);
  }
  template <typename HealthCheckT = GatewayConnectorHealthCheck>
  GatewayConnector& WithHealthCheck(HealthCheckT&& value) {
    SetHealthCheck(std::forward<HealthCheckT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filters that control which gateway ingress paths the connector applies
   * to.</p>
   */
  inline const GatewayConnectorFilters& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = GatewayConnectorFilters>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = GatewayConnectorFilters>
  GatewayConnector& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_portName;

  GatewayConnectorHealthCheck m_healthCheck;

  GatewayConnectorFilters m_filters;
  bool m_portNameHasBeenSet = false;
  bool m_healthCheckHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
