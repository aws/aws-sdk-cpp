/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
#include <aws/agent-registry/model/DescriptorSource.h>
#include <aws/agent-registry/model/McpServerAdditionalData.h>
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
 * <p> Descriptor that defines the content of an MCP (Model Context Protocol)
 * server registry record, including the server definition and its tool
 * definitions. The content is validated against the MCP protocol
 * schema.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-2025-12-01/McpServerDescriptor">AWS
 * API Reference</a></p>
 */
class McpServerDescriptor {
 public:
  AWS_AGENTREGISTRY_API McpServerDescriptor() = default;
  AWS_AGENTREGISTRY_API McpServerDescriptor(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRY_API McpServerDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The MCP server descriptor content, serialized as descriptor payload
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
  McpServerDescriptor& WithData(DataT&& value) {
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
  McpServerDescriptor& WithDataSchemaVersion(DataSchemaVersionT&& value) {
    SetDataSchemaVersion(std::forward<DataSchemaVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Additional data associated with the MCP server descriptor, such as tool
   * definitions.</p>
   */
  inline const McpServerAdditionalData& GetAdditionalData() const { return m_additionalData; }
  inline bool AdditionalDataHasBeenSet() const { return m_additionalDataHasBeenSet; }
  template <typename AdditionalDataT = McpServerAdditionalData>
  void SetAdditionalData(AdditionalDataT&& value) {
    m_additionalDataHasBeenSet = true;
    m_additionalData = std::forward<AdditionalDataT>(value);
  }
  template <typename AdditionalDataT = McpServerAdditionalData>
  McpServerDescriptor& WithAdditionalData(AdditionalDataT&& value) {
    SetAdditionalData(std::forward<AdditionalDataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The source location from which the MCP (Model Context Protocol) server
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
  McpServerDescriptor& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_data;

  Aws::String m_dataSchemaVersion;

  McpServerAdditionalData m_additionalData;

  DescriptorSource m_source;
  bool m_dataHasBeenSet = false;
  bool m_dataSchemaVersionHasBeenSet = false;
  bool m_additionalDataHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
