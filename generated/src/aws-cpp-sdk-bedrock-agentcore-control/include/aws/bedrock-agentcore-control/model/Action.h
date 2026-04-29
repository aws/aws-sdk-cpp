/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ConfigurationBundleAction.h>
#include <aws/bedrock-agentcore-control/model/RouteToTargetAction.h>

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
 * <p>An action to take when a gateway rule's conditions are met.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/Action">AWS
 * API Reference</a></p>
 */
class Action {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API Action() = default;
  AWS_BEDROCKAGENTCORECONTROL_API Action(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Action& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An action that applies a configuration bundle override to the request.</p>
   */
  inline const ConfigurationBundleAction& GetConfigurationBundle() const { return m_configurationBundle; }
  inline bool ConfigurationBundleHasBeenSet() const { return m_configurationBundleHasBeenSet; }
  template <typename ConfigurationBundleT = ConfigurationBundleAction>
  void SetConfigurationBundle(ConfigurationBundleT&& value) {
    m_configurationBundleHasBeenSet = true;
    m_configurationBundle = std::forward<ConfigurationBundleT>(value);
  }
  template <typename ConfigurationBundleT = ConfigurationBundleAction>
  Action& WithConfigurationBundle(ConfigurationBundleT&& value) {
    SetConfigurationBundle(std::forward<ConfigurationBundleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An action that routes the request to a specific target.</p>
   */
  inline const RouteToTargetAction& GetRouteToTarget() const { return m_routeToTarget; }
  inline bool RouteToTargetHasBeenSet() const { return m_routeToTargetHasBeenSet; }
  template <typename RouteToTargetT = RouteToTargetAction>
  void SetRouteToTarget(RouteToTargetT&& value) {
    m_routeToTargetHasBeenSet = true;
    m_routeToTarget = std::forward<RouteToTargetT>(value);
  }
  template <typename RouteToTargetT = RouteToTargetAction>
  Action& WithRouteToTarget(RouteToTargetT&& value) {
    SetRouteToTarget(std::forward<RouteToTargetT>(value));
    return *this;
  }
  ///@}
 private:
  ConfigurationBundleAction m_configurationBundle;

  RouteToTargetAction m_routeToTarget;
  bool m_configurationBundleHasBeenSet = false;
  bool m_routeToTargetHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
