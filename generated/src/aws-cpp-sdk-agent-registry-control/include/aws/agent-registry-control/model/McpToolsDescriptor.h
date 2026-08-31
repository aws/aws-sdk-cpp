/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
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
 * <p>MCP tools descriptor containing tool definitions</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/McpToolsDescriptor">AWS
 * API Reference</a></p>
 */
class McpToolsDescriptor {
 public:
  AWS_AGENTREGISTRYCONTROL_API McpToolsDescriptor() = default;
  AWS_AGENTREGISTRYCONTROL_API McpToolsDescriptor(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API McpToolsDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The MCP tools descriptor content, serialized as descriptor payload data.</p>
   */
  inline const Aws::String& GetData() const { return m_data; }
  inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
  template <typename DataT = Aws::String>
  void SetData(DataT&& value) {
    m_dataHasBeenSet = true;
    m_data = std::forward<DataT>(value);
  }
  template <typename DataT = Aws::String>
  McpToolsDescriptor& WithData(DataT&& value) {
    SetData(std::forward<DataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The schema version of the descriptor payload.</p>
   */
  inline const Aws::String& GetDataSchemaVersion() const { return m_dataSchemaVersion; }
  inline bool DataSchemaVersionHasBeenSet() const { return m_dataSchemaVersionHasBeenSet; }
  template <typename DataSchemaVersionT = Aws::String>
  void SetDataSchemaVersion(DataSchemaVersionT&& value) {
    m_dataSchemaVersionHasBeenSet = true;
    m_dataSchemaVersion = std::forward<DataSchemaVersionT>(value);
  }
  template <typename DataSchemaVersionT = Aws::String>
  McpToolsDescriptor& WithDataSchemaVersion(DataSchemaVersionT&& value) {
    SetDataSchemaVersion(std::forward<DataSchemaVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_data;

  Aws::String m_dataSchemaVersion;
  bool m_dataHasBeenSet = false;
  bool m_dataSchemaVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
