/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
#include <aws/agent-registry/model/DescriptorSource.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentRegistry {
namespace Model {

/**
 * <p> Descriptor that defines the content of an A2A (Agent-to-Agent) agent card
 * registry record. The content is validated against the A2A protocol
 * schema.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-2025-12-01/A2aAgentCardDescriptor">AWS
 * API Reference</a></p>
 */
class A2aAgentCardDescriptor {
 public:
  AWS_AGENTREGISTRY_API A2aAgentCardDescriptor() = default;
  AWS_AGENTREGISTRY_API A2aAgentCardDescriptor(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRY_API A2aAgentCardDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The A2A agent card content, serialized as descriptor payload data.</p>
   */
  inline const Aws::String& GetData() const { return m_data; }
  inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
  template <typename DataT = Aws::String>
  void SetData(DataT&& value) {
    m_dataHasBeenSet = true;
    m_data = std::forward<DataT>(value);
  }
  template <typename DataT = Aws::String>
  A2aAgentCardDescriptor& WithData(DataT&& value) {
    SetData(std::forward<DataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The schema version of the descriptor payload.</p>
   */
  inline const Aws::String& GetDataSchemaVersion() const { return m_dataSchemaVersion; }
  inline bool DataSchemaVersionHasBeenSet() const { return m_dataSchemaVersionHasBeenSet; }
  template <typename DataSchemaVersionT = Aws::String>
  void SetDataSchemaVersion(DataSchemaVersionT&& value) {
    m_dataSchemaVersionHasBeenSet = true;
    m_dataSchemaVersion = std::forward<DataSchemaVersionT>(value);
  }
  template <typename DataSchemaVersionT = Aws::String>
  A2aAgentCardDescriptor& WithDataSchemaVersion(DataSchemaVersionT&& value) {
    SetDataSchemaVersion(std::forward<DataSchemaVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The source location from which the A2A (Agent-to-Agent) agent card
   * descriptor content was retrieved.</p>
   */
  inline const DescriptorSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = DescriptorSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = DescriptorSource>
  A2aAgentCardDescriptor& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_data;

  Aws::String m_dataSchemaVersion;

  DescriptorSource m_source;
  bool m_dataHasBeenSet = false;
  bool m_dataSchemaVersionHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
