/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/UpdatedDataSchemaVersion.h>
#include <aws/agent-registry-control/model/UpdatedDescriptorData.h>
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
 * <p>The set of A2A agent card descriptor fields that can be individually
 * updated.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/UpdatedA2aAgentCardDescriptorFields">AWS
 * API Reference</a></p>
 */
class UpdatedA2aAgentCardDescriptorFields {
 public:
  AWS_AGENTREGISTRYCONTROL_API UpdatedA2aAgentCardDescriptorFields() = default;
  AWS_AGENTREGISTRYCONTROL_API UpdatedA2aAgentCardDescriptorFields(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API UpdatedA2aAgentCardDescriptorFields& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The patch for the descriptor's data field.</p>
   */
  inline const UpdatedDescriptorData& GetData() const { return m_data; }
  inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
  template <typename DataT = UpdatedDescriptorData>
  void SetData(DataT&& value) {
    m_dataHasBeenSet = true;
    m_data = std::forward<DataT>(value);
  }
  template <typename DataT = UpdatedDescriptorData>
  UpdatedA2aAgentCardDescriptorFields& WithData(DataT&& value) {
    SetData(std::forward<DataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The patch for the descriptor's data schema version field.</p>
   */
  inline const UpdatedDataSchemaVersion& GetDataSchemaVersion() const { return m_dataSchemaVersion; }
  inline bool DataSchemaVersionHasBeenSet() const { return m_dataSchemaVersionHasBeenSet; }
  template <typename DataSchemaVersionT = UpdatedDataSchemaVersion>
  void SetDataSchemaVersion(DataSchemaVersionT&& value) {
    m_dataSchemaVersionHasBeenSet = true;
    m_dataSchemaVersion = std::forward<DataSchemaVersionT>(value);
  }
  template <typename DataSchemaVersionT = UpdatedDataSchemaVersion>
  UpdatedA2aAgentCardDescriptorFields& WithDataSchemaVersion(DataSchemaVersionT&& value) {
    SetDataSchemaVersion(std::forward<DataSchemaVersionT>(value));
    return *this;
  }
  ///@}

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
  UpdatedA2aAgentCardDescriptorFields& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}
 private:
  UpdatedDescriptorData m_data;

  UpdatedDataSchemaVersion m_dataSchemaVersion;

  UpdatedDescriptorSource m_source;
  bool m_dataHasBeenSet = false;
  bool m_dataSchemaVersionHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
