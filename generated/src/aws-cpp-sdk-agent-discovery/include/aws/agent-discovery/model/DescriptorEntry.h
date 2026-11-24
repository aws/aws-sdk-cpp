/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-discovery/AgentDiscovery_EXPORTS.h>
#include <aws/agent-discovery/model/DescriptorSource.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentDiscovery {
namespace Model {

/**
 * <p>A descriptor slot value (A2A card, MCP server card, skills definition,
 * custom). Content is either inline (<code>data</code>) or a reference
 * (<code>source</code>). <code>additionalData</code> carries nested
 * sub-descriptors (e.g. mcpServer.tools,
 * agentSkillsDefinition.skillMd).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-discovery-2022-07-26/DescriptorEntry">AWS
 * API Reference</a></p>
 */
class DescriptorEntry {
 public:
  AWS_AGENTDISCOVERY_API DescriptorEntry() = default;
  AWS_AGENTDISCOVERY_API DescriptorEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTDISCOVERY_API DescriptorEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Inline descriptor content (JSON string).</p>
   */
  inline const Aws::String& GetData() const { return m_data; }
  inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
  template <typename DataT = Aws::String>
  void SetData(DataT&& value) {
    m_dataHasBeenSet = true;
    m_data = std::forward<DataT>(value);
  }
  template <typename DataT = Aws::String>
  DescriptorEntry& WithData(DataT&& value) {
    SetData(std::forward<DataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Descriptor type version.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  DescriptorEntry& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reference to externally-hosted descriptor content.</p>
   */
  inline const DescriptorSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = DescriptorSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = DescriptorSource>
  DescriptorEntry& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Nested sub-descriptors keyed by slot name (e.g. <code>tools</code>,
   * <code>skillMd</code>).</p>
   */
  inline const Aws::Map<Aws::String, DescriptorEntry>& GetAdditionalData() const { return m_additionalData; }
  inline bool AdditionalDataHasBeenSet() const { return m_additionalDataHasBeenSet; }
  template <typename AdditionalDataT = Aws::Map<Aws::String, DescriptorEntry>>
  void SetAdditionalData(AdditionalDataT&& value) {
    m_additionalDataHasBeenSet = true;
    m_additionalData = std::forward<AdditionalDataT>(value);
  }
  template <typename AdditionalDataT = Aws::Map<Aws::String, DescriptorEntry>>
  DescriptorEntry& WithAdditionalData(AdditionalDataT&& value) {
    SetAdditionalData(std::forward<AdditionalDataT>(value));
    return *this;
  }
  template <typename AdditionalDataKeyT = Aws::String, typename AdditionalDataValueT = DescriptorEntry>
  DescriptorEntry& AddAdditionalData(AdditionalDataKeyT&& key, AdditionalDataValueT&& value) {
    m_additionalDataHasBeenSet = true;
    m_additionalData.emplace(std::forward<AdditionalDataKeyT>(key), std::forward<AdditionalDataValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_data;

  Aws::String m_version;

  DescriptorSource m_source;

  Aws::Map<Aws::String, DescriptorEntry> m_additionalData;
  bool m_dataHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_additionalDataHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentDiscovery
}  // namespace Aws
