/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
#include <aws/agent-registry/model/AgentSkillsAdditionalData.h>
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
 * <p> Descriptor that defines an agent skills registry record and its associated
 * content.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-2025-12-01/AgentSkillsDefinitionDescriptor">AWS
 * API Reference</a></p>
 */
class AgentSkillsDefinitionDescriptor {
 public:
  AWS_AGENTREGISTRY_API AgentSkillsDefinitionDescriptor() = default;
  AWS_AGENTREGISTRY_API AgentSkillsDefinitionDescriptor(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRY_API AgentSkillsDefinitionDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The agent skills definition content, serialized as descriptor payload
   * data.</p>
   */
  inline const Aws::String& GetData() const { return m_data; }
  inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
  template <typename DataT = Aws::String>
  void SetData(DataT&& value) {
    m_dataHasBeenSet = true;
    m_data = std::forward<DataT>(value);
  }
  template <typename DataT = Aws::String>
  AgentSkillsDefinitionDescriptor& WithData(DataT&& value) {
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
  AgentSkillsDefinitionDescriptor& WithDataSchemaVersion(DataSchemaVersionT&& value) {
    SetDataSchemaVersion(std::forward<DataSchemaVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Additional data for the agent skills definition, such as the skills markdown
   * descriptor.</p>
   */
  inline const AgentSkillsAdditionalData& GetAdditionalData() const { return m_additionalData; }
  inline bool AdditionalDataHasBeenSet() const { return m_additionalDataHasBeenSet; }
  template <typename AdditionalDataT = AgentSkillsAdditionalData>
  void SetAdditionalData(AdditionalDataT&& value) {
    m_additionalDataHasBeenSet = true;
    m_additionalData = std::forward<AdditionalDataT>(value);
  }
  template <typename AdditionalDataT = AgentSkillsAdditionalData>
  AgentSkillsDefinitionDescriptor& WithAdditionalData(AdditionalDataT&& value) {
    SetAdditionalData(std::forward<AdditionalDataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_data;

  Aws::String m_dataSchemaVersion;

  AgentSkillsAdditionalData m_additionalData;
  bool m_dataHasBeenSet = false;
  bool m_dataSchemaVersionHasBeenSet = false;
  bool m_additionalDataHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
