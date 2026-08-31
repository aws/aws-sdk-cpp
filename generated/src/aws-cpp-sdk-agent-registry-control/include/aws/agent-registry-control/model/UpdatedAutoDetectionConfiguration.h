/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/AutoDetectionConfiguration.h>

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
 * <p>A wrapper for updating the auto-detection configuration of a registry with
 * PATCH semantics. Include this wrapper to replace the auto-detection
 * configuration with the specified value. Omit it to leave the auto-detection
 * configuration unchanged. To clear the configuration, include the wrapper with a
 * null <code>optionalValue</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/UpdatedAutoDetectionConfiguration">AWS
 * API Reference</a></p>
 */
class UpdatedAutoDetectionConfiguration {
 public:
  AWS_AGENTREGISTRYCONTROL_API UpdatedAutoDetectionConfiguration() = default;
  AWS_AGENTREGISTRYCONTROL_API UpdatedAutoDetectionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API UpdatedAutoDetectionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The value to set for this field. Omit the wrapper to leave the field
   * unchanged.</p>
   */
  inline const AutoDetectionConfiguration& GetOptionalValue() const { return m_optionalValue; }
  inline bool OptionalValueHasBeenSet() const { return m_optionalValueHasBeenSet; }
  template <typename OptionalValueT = AutoDetectionConfiguration>
  void SetOptionalValue(OptionalValueT&& value) {
    m_optionalValueHasBeenSet = true;
    m_optionalValue = std::forward<OptionalValueT>(value);
  }
  template <typename OptionalValueT = AutoDetectionConfiguration>
  UpdatedAutoDetectionConfiguration& WithOptionalValue(OptionalValueT&& value) {
    SetOptionalValue(std::forward<OptionalValueT>(value));
    return *this;
  }
  ///@}
 private:
  AutoDetectionConfiguration m_optionalValue;
  bool m_optionalValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
