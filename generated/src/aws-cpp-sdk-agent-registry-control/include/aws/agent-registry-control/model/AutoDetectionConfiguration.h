/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/AutoDetectionScope.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentRegistryControl {
namespace Model {

/**
 * <p>The customer-defined auto-detection settings for a registry.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/AutoDetectionConfiguration">AWS
 * API Reference</a></p>
 */
class AutoDetectionConfiguration {
 public:
  AWS_AGENTREGISTRYCONTROL_API AutoDetectionConfiguration() = default;
  AWS_AGENTREGISTRYCONTROL_API AutoDetectionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API AutoDetectionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The source from which resources are detected. For example,
   * <code>ORGANIZATION</code> sources resources from all member accounts of an
   * Amazon Web Services organization.</p>
   */
  inline AutoDetectionScope GetScope() const { return m_scope; }
  inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
  inline void SetScope(AutoDetectionScope value) {
    m_scopeHasBeenSet = true;
    m_scope = value;
  }
  inline AutoDetectionConfiguration& WithScope(AutoDetectionScope value) {
    SetScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether auto-detection is requested for the registry. Setting this
   * to <code>true</code> is necessary but not sufficient for auto-detection to
   * become active; the preconditions of the configured scope must also be met.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline AutoDetectionConfiguration& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}
 private:
  AutoDetectionScope m_scope{AutoDetectionScope::NOT_SET};

  bool m_enabled{false};
  bool m_scopeHasBeenSet = false;
  bool m_enabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
