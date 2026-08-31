/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/UpdatedDescriptorSource.h>

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
 * <p>The set of AG-UI descriptor fields that can be individually
 * updated.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/UpdatedAgUiDescriptorFields">AWS
 * API Reference</a></p>
 */
class UpdatedAgUiDescriptorFields {
 public:
  AWS_AGENTREGISTRYCONTROL_API UpdatedAgUiDescriptorFields() = default;
  AWS_AGENTREGISTRYCONTROL_API UpdatedAgUiDescriptorFields(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API UpdatedAgUiDescriptorFields& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The patch for the descriptor's source field.</p>
   */
  inline const UpdatedDescriptorSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = UpdatedDescriptorSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = UpdatedDescriptorSource>
  UpdatedAgUiDescriptorFields& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}
 private:
  UpdatedDescriptorSource m_source;
  bool m_sourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
