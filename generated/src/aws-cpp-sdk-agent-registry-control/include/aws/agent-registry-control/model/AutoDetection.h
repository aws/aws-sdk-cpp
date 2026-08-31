/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/AutoDetectionConfiguration.h>
#include <aws/agent-registry-control/model/AutoDetectionStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>The auto-detection properties for a registry, including the requested
 * configuration and the current detection status. When auto-detection is enabled
 * and the scope preconditions are met, the registry is automatically populated
 * with discovered resources.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/AutoDetection">AWS
 * API Reference</a></p>
 */
class AutoDetection {
 public:
  AWS_AGENTREGISTRYCONTROL_API AutoDetection() = default;
  AWS_AGENTREGISTRYCONTROL_API AutoDetection(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API AutoDetection& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The auto-detection settings that control how resources are discovered for the
   * registry.</p>
   */
  inline const AutoDetectionConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = AutoDetectionConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = AutoDetectionConfiguration>
  AutoDetection& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current auto-detection status. <code>ACTIVE</code> indicates that the
   * registry is actively being populated with detected resources.
   * <code>INACTIVE</code> indicates that the preconditions required at the
   * configured scope are not currently met.</p>
   */
  inline AutoDetectionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AutoDetectionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AutoDetection& WithStatus(AutoDetectionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable explanation of the current auto-detection status. Typically
   * populated when the status requires additional context.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  AutoDetection& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}
 private:
  AutoDetectionConfiguration m_configuration;

  AutoDetectionStatus m_status{AutoDetectionStatus::NOT_SET};

  Aws::String m_statusReason;
  bool m_configurationHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
