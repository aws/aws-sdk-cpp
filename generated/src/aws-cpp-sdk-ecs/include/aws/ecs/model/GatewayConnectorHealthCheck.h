/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/GatewayConnectorHealthCheckMatcher.h>
#include <aws/ecs/model/GatewayConnectorHealthCheckProtocol.h>

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
 * <p>The health check configuration that a gateway uses to evaluate the targets
 * associated with a gateway connector.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/GatewayConnectorHealthCheck">AWS
 * API Reference</a></p>
 */
class GatewayConnectorHealthCheck {
 public:
  AWS_ECS_API GatewayConnectorHealthCheck() = default;
  AWS_ECS_API GatewayConnectorHealthCheck(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API GatewayConnectorHealthCheck& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The protocol that the gateway uses to perform health checks.</p> <p>Valid
   * values:</p> <ul> <li> <p> <code>HTTP</code> - Health checks are performed over
   * HTTP.</p> </li> <li> <p> <code>HTTPS</code> - Health checks are performed over
   * HTTPS.</p> </li> </ul>
   */
  inline GatewayConnectorHealthCheckProtocol GetHealthCheckProtocol() const { return m_healthCheckProtocol; }
  inline bool HealthCheckProtocolHasBeenSet() const { return m_healthCheckProtocolHasBeenSet; }
  inline void SetHealthCheckProtocol(GatewayConnectorHealthCheckProtocol value) {
    m_healthCheckProtocolHasBeenSet = true;
    m_healthCheckProtocol = value;
  }
  inline GatewayConnectorHealthCheck& WithHealthCheckProtocol(GatewayConnectorHealthCheckProtocol value) {
    SetHealthCheckProtocol(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port that the gateway uses to perform health checks on the targets.</p>
   */
  inline int GetHealthCheckPort() const { return m_healthCheckPort; }
  inline bool HealthCheckPortHasBeenSet() const { return m_healthCheckPortHasBeenSet; }
  inline void SetHealthCheckPort(int value) {
    m_healthCheckPortHasBeenSet = true;
    m_healthCheckPort = value;
  }
  inline GatewayConnectorHealthCheck& WithHealthCheckPort(int value) {
    SetHealthCheckPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination path for health check requests.</p>
   */
  inline const Aws::String& GetHealthCheckPath() const { return m_healthCheckPath; }
  inline bool HealthCheckPathHasBeenSet() const { return m_healthCheckPathHasBeenSet; }
  template <typename HealthCheckPathT = Aws::String>
  void SetHealthCheckPath(HealthCheckPathT&& value) {
    m_healthCheckPathHasBeenSet = true;
    m_healthCheckPath = std::forward<HealthCheckPathT>(value);
  }
  template <typename HealthCheckPathT = Aws::String>
  GatewayConnectorHealthCheck& WithHealthCheckPath(HealthCheckPathT&& value) {
    SetHealthCheckPath(std::forward<HealthCheckPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of time, in seconds, during which no response from a target means
   * a failed health check.</p>
   */
  inline int GetHealthCheckTimeoutSeconds() const { return m_healthCheckTimeoutSeconds; }
  inline bool HealthCheckTimeoutSecondsHasBeenSet() const { return m_healthCheckTimeoutSecondsHasBeenSet; }
  inline void SetHealthCheckTimeoutSeconds(int value) {
    m_healthCheckTimeoutSecondsHasBeenSet = true;
    m_healthCheckTimeoutSeconds = value;
  }
  inline GatewayConnectorHealthCheck& WithHealthCheckTimeoutSeconds(int value) {
    SetHealthCheckTimeoutSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The approximate amount of time, in seconds, between health checks of an
   * individual target.</p>
   */
  inline int GetHealthCheckIntervalSeconds() const { return m_healthCheckIntervalSeconds; }
  inline bool HealthCheckIntervalSecondsHasBeenSet() const { return m_healthCheckIntervalSecondsHasBeenSet; }
  inline void SetHealthCheckIntervalSeconds(int value) {
    m_healthCheckIntervalSecondsHasBeenSet = true;
    m_healthCheckIntervalSeconds = value;
  }
  inline GatewayConnectorHealthCheck& WithHealthCheckIntervalSeconds(int value) {
    SetHealthCheckIntervalSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of consecutive successful health checks that a target must pass
   * before the gateway considers it healthy.</p>
   */
  inline int GetHealthyThresholdCount() const { return m_healthyThresholdCount; }
  inline bool HealthyThresholdCountHasBeenSet() const { return m_healthyThresholdCountHasBeenSet; }
  inline void SetHealthyThresholdCount(int value) {
    m_healthyThresholdCountHasBeenSet = true;
    m_healthyThresholdCount = value;
  }
  inline GatewayConnectorHealthCheck& WithHealthyThresholdCount(int value) {
    SetHealthyThresholdCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of consecutive failed health checks that a target must fail before
   * the gateway considers it unhealthy.</p>
   */
  inline int GetUnhealthyThresholdCount() const { return m_unhealthyThresholdCount; }
  inline bool UnhealthyThresholdCountHasBeenSet() const { return m_unhealthyThresholdCountHasBeenSet; }
  inline void SetUnhealthyThresholdCount(int value) {
    m_unhealthyThresholdCountHasBeenSet = true;
    m_unhealthyThresholdCount = value;
  }
  inline GatewayConnectorHealthCheck& WithUnhealthyThresholdCount(int value) {
    SetUnhealthyThresholdCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP or gRPC codes that indicate a successful health check response from
   * a target.</p>
   */
  inline const GatewayConnectorHealthCheckMatcher& GetMatcher() const { return m_matcher; }
  inline bool MatcherHasBeenSet() const { return m_matcherHasBeenSet; }
  template <typename MatcherT = GatewayConnectorHealthCheckMatcher>
  void SetMatcher(MatcherT&& value) {
    m_matcherHasBeenSet = true;
    m_matcher = std::forward<MatcherT>(value);
  }
  template <typename MatcherT = GatewayConnectorHealthCheckMatcher>
  GatewayConnectorHealthCheck& WithMatcher(MatcherT&& value) {
    SetMatcher(std::forward<MatcherT>(value));
    return *this;
  }
  ///@}
 private:
  GatewayConnectorHealthCheckProtocol m_healthCheckProtocol{GatewayConnectorHealthCheckProtocol::NOT_SET};

  int m_healthCheckPort{0};

  Aws::String m_healthCheckPath;

  int m_healthCheckTimeoutSeconds{0};

  int m_healthCheckIntervalSeconds{0};

  int m_healthyThresholdCount{0};

  int m_unhealthyThresholdCount{0};

  GatewayConnectorHealthCheckMatcher m_matcher;
  bool m_healthCheckProtocolHasBeenSet = false;
  bool m_healthCheckPortHasBeenSet = false;
  bool m_healthCheckPathHasBeenSet = false;
  bool m_healthCheckTimeoutSecondsHasBeenSet = false;
  bool m_healthCheckIntervalSecondsHasBeenSet = false;
  bool m_healthyThresholdCountHasBeenSet = false;
  bool m_unhealthyThresholdCountHasBeenSet = false;
  bool m_matcherHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
