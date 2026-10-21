/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/GatewayAlbDesyncMitigationMode.h>
#include <aws/ecs/model/GatewayAlbProtocol.h>
#include <aws/ecs/model/GatewayAlbTestTrafficRules.h>
#include <aws/ecs/model/GatewayElbAccessLogConfiguration.h>
#include <aws/ecs/model/GatewayElbNetworkConfiguration.h>
#include <aws/ecs/model/GatewayElbScheme.h>

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
 * <p>The configuration for a gateway that uses shared Application Load Balancers,
 * as returned by <code>DescribeGateway</code>. This includes the current number of
 * load balancers in addition to the configured settings.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DescribeGatewayAlbConfiguration">AWS
 * API Reference</a></p>
 */
class DescribeGatewayAlbConfiguration {
 public:
  AWS_ECS_API DescribeGatewayAlbConfiguration() = default;
  AWS_ECS_API DescribeGatewayAlbConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API DescribeGatewayAlbConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The network configuration for the load balancers that the gateway
   * manages.</p>
   */
  inline const GatewayElbNetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
  inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
  template <typename NetworkConfigurationT = GatewayElbNetworkConfiguration>
  void SetNetworkConfiguration(NetworkConfigurationT&& value) {
    m_networkConfigurationHasBeenSet = true;
    m_networkConfiguration = std::forward<NetworkConfigurationT>(value);
  }
  template <typename NetworkConfigurationT = GatewayElbNetworkConfiguration>
  DescribeGatewayAlbConfiguration& WithNetworkConfiguration(NetworkConfigurationT&& value) {
    SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the load balancers the gateway manages are
   * <code>internet-facing</code> or <code>internal</code>.</p>
   */
  inline GatewayElbScheme GetScheme() const { return m_scheme; }
  inline bool SchemeHasBeenSet() const { return m_schemeHasBeenSet; }
  inline void SetScheme(GatewayElbScheme value) {
    m_schemeHasBeenSet = true;
    m_scheme = value;
  }
  inline DescribeGatewayAlbConfiguration& WithScheme(GatewayElbScheme value) {
    SetScheme(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The access log configuration for the load balancers that the gateway
   * manages.</p>
   */
  inline const GatewayElbAccessLogConfiguration& GetAccessLogs() const { return m_accessLogs; }
  inline bool AccessLogsHasBeenSet() const { return m_accessLogsHasBeenSet; }
  template <typename AccessLogsT = GatewayElbAccessLogConfiguration>
  void SetAccessLogs(AccessLogsT&& value) {
    m_accessLogsHasBeenSet = true;
    m_accessLogs = std::forward<AccessLogsT>(value);
  }
  template <typename AccessLogsT = GatewayElbAccessLogConfiguration>
  DescribeGatewayAlbConfiguration& WithAccessLogs(AccessLogsT&& value) {
    SetAccessLogs(std::forward<AccessLogsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the WAF web ACL associated with the load
   * balancers that the gateway manages.</p>
   */
  inline const Aws::String& GetWebACLArn() const { return m_webACLArn; }
  inline bool WebACLArnHasBeenSet() const { return m_webACLArnHasBeenSet; }
  template <typename WebACLArnT = Aws::String>
  void SetWebACLArn(WebACLArnT&& value) {
    m_webACLArnHasBeenSet = true;
    m_webACLArn = std::forward<WebACLArnT>(value);
  }
  template <typename WebACLArnT = Aws::String>
  DescribeGatewayAlbConfiguration& WithWebACLArn(WebACLArnT&& value) {
    SetWebACLArn(std::forward<WebACLArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port that the load balancer listener uses is 443. The gateway supports
   * only HTTPS at port 443.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline DescribeGatewayAlbConfiguration& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The protocol for the load balancer listener is <code>HTTPS</code>. No other
   * protocol is supported.</p>
   */
  inline GatewayAlbProtocol GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  inline void SetProtocol(GatewayAlbProtocol value) {
    m_protocolHasBeenSet = true;
    m_protocol = value;
  }
  inline DescribeGatewayAlbConfiguration& WithProtocol(GatewayAlbProtocol value) {
    SetProtocol(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of Application Load Balancers that the gateway
   * manages.</p>
   */
  inline int GetMaxAlbCount() const { return m_maxAlbCount; }
  inline bool MaxAlbCountHasBeenSet() const { return m_maxAlbCountHasBeenSet; }
  inline void SetMaxAlbCount(int value) {
    m_maxAlbCountHasBeenSet = true;
    m_maxAlbCount = value;
  }
  inline DescribeGatewayAlbConfiguration& WithMaxAlbCount(int value) {
    SetMaxAlbCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current number of Application Load Balancers that the gateway has
   * allocated.</p>
   */
  inline int GetCurrentAlbCount() const { return m_currentAlbCount; }
  inline bool CurrentAlbCountHasBeenSet() const { return m_currentAlbCountHasBeenSet; }
  inline void SetCurrentAlbCount(int value) {
    m_currentAlbCountHasBeenSet = true;
    m_currentAlbCount = value;
  }
  inline DescribeGatewayAlbConfiguration& WithCurrentAlbCount(int value) {
    SetCurrentAlbCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The desync mitigation mode for the load balancers that the gateway
   * manages.</p>
   */
  inline GatewayAlbDesyncMitigationMode GetHttpDesync() const { return m_httpDesync; }
  inline bool HttpDesyncHasBeenSet() const { return m_httpDesyncHasBeenSet; }
  inline void SetHttpDesync(GatewayAlbDesyncMitigationMode value) {
    m_httpDesyncHasBeenSet = true;
    m_httpDesync = value;
  }
  inline DescribeGatewayAlbConfiguration& WithHttpDesync(GatewayAlbDesyncMitigationMode value) {
    SetHttpDesync(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The rules that route test traffic for progressive deployments.</p>
   */
  inline const GatewayAlbTestTrafficRules& GetTestTrafficRules() const { return m_testTrafficRules; }
  inline bool TestTrafficRulesHasBeenSet() const { return m_testTrafficRulesHasBeenSet; }
  template <typename TestTrafficRulesT = GatewayAlbTestTrafficRules>
  void SetTestTrafficRules(TestTrafficRulesT&& value) {
    m_testTrafficRulesHasBeenSet = true;
    m_testTrafficRules = std::forward<TestTrafficRulesT>(value);
  }
  template <typename TestTrafficRulesT = GatewayAlbTestTrafficRules>
  DescribeGatewayAlbConfiguration& WithTestTrafficRules(TestTrafficRulesT&& value) {
    SetTestTrafficRules(std::forward<TestTrafficRulesT>(value));
    return *this;
  }
  ///@}
 private:
  GatewayElbNetworkConfiguration m_networkConfiguration;

  GatewayElbScheme m_scheme{GatewayElbScheme::NOT_SET};

  GatewayElbAccessLogConfiguration m_accessLogs;

  Aws::String m_webACLArn;

  int m_port{0};

  GatewayAlbProtocol m_protocol{GatewayAlbProtocol::NOT_SET};

  int m_maxAlbCount{0};

  int m_currentAlbCount{0};

  GatewayAlbDesyncMitigationMode m_httpDesync{GatewayAlbDesyncMitigationMode::NOT_SET};

  GatewayAlbTestTrafficRules m_testTrafficRules;
  bool m_networkConfigurationHasBeenSet = false;
  bool m_schemeHasBeenSet = false;
  bool m_accessLogsHasBeenSet = false;
  bool m_webACLArnHasBeenSet = false;
  bool m_portHasBeenSet = false;
  bool m_protocolHasBeenSet = false;
  bool m_maxAlbCountHasBeenSet = false;
  bool m_currentAlbCountHasBeenSet = false;
  bool m_httpDesyncHasBeenSet = false;
  bool m_testTrafficRulesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
