/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/GatewayAlbDesyncMitigationMode.h>
#include <aws/ecs/model/GatewayAlbTestTrafficRules.h>
#include <aws/ecs/model/GatewayElbAccessLogConfiguration.h>
#include <aws/ecs/model/UpdateGatewayNetworkConfiguration.h>

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
 * <p>The mutable configuration fields for a gateway that uses shared Application
 * Load Balancers. Only fields that can be changed without interrupting traffic are
 * included.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/UpdateGatewayAlbConfiguration">AWS
 * API Reference</a></p>
 */
class UpdateGatewayAlbConfiguration {
 public:
  AWS_ECS_API UpdateGatewayAlbConfiguration() = default;
  AWS_ECS_API UpdateGatewayAlbConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API UpdateGatewayAlbConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The mutable network configuration for the load balancers that the gateway
   * manages.</p>
   */
  inline const UpdateGatewayNetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
  inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
  template <typename NetworkConfigurationT = UpdateGatewayNetworkConfiguration>
  void SetNetworkConfiguration(NetworkConfigurationT&& value) {
    m_networkConfigurationHasBeenSet = true;
    m_networkConfiguration = std::forward<NetworkConfigurationT>(value);
  }
  template <typename NetworkConfigurationT = UpdateGatewayNetworkConfiguration>
  UpdateGatewayAlbConfiguration& WithNetworkConfiguration(NetworkConfigurationT&& value) {
    SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value));
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
  inline UpdateGatewayAlbConfiguration& WithMaxAlbCount(int value) {
    SetMaxAlbCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the WAF web ACL to associate with the load
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
  UpdateGatewayAlbConfiguration& WithWebACLArn(WebACLArnT&& value) {
    SetWebACLArn(std::forward<WebACLArnT>(value));
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
  UpdateGatewayAlbConfiguration& WithAccessLogs(AccessLogsT&& value) {
    SetAccessLogs(std::forward<AccessLogsT>(value));
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
  inline UpdateGatewayAlbConfiguration& WithHttpDesync(GatewayAlbDesyncMitigationMode value) {
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
  UpdateGatewayAlbConfiguration& WithTestTrafficRules(TestTrafficRulesT&& value) {
    SetTestTrafficRules(std::forward<TestTrafficRulesT>(value));
    return *this;
  }
  ///@}
 private:
  UpdateGatewayNetworkConfiguration m_networkConfiguration;

  int m_maxAlbCount{0};

  Aws::String m_webACLArn;

  GatewayElbAccessLogConfiguration m_accessLogs;

  GatewayAlbDesyncMitigationMode m_httpDesync{GatewayAlbDesyncMitigationMode::NOT_SET};

  GatewayAlbTestTrafficRules m_testTrafficRules;
  bool m_networkConfigurationHasBeenSet = false;
  bool m_maxAlbCountHasBeenSet = false;
  bool m_webACLArnHasBeenSet = false;
  bool m_accessLogsHasBeenSet = false;
  bool m_httpDesyncHasBeenSet = false;
  bool m_testTrafficRulesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
