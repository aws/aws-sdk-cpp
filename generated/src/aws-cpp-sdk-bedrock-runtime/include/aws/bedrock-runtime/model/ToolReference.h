/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockRuntime {
namespace Model {

/**
 * <p>A reference to a tool in the tool configuration. Used with
 * <code>ToolAdditionBlock</code> and <code>ToolRemovalBlock</code> to identify
 * which tool to add or remove mid-conversation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ToolReference">AWS
 * API Reference</a></p>
 */
class ToolReference {
 public:
  AWS_BEDROCKRUNTIME_API ToolReference() = default;
  AWS_BEDROCKRUNTIME_API ToolReference(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API ToolReference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of tool reference.</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  ToolReference& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the tool. Must match the name of a tool declared in the top-level
   * tool configuration.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ToolReference& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the MCP server that provides the tool. Required when referencing
   * an MCP tool.</p>
   */
  inline const Aws::String& GetServerName() const { return m_serverName; }
  inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
  template <typename ServerNameT = Aws::String>
  void SetServerName(ServerNameT&& value) {
    m_serverNameHasBeenSet = true;
    m_serverName = std::forward<ServerNameT>(value);
  }
  template <typename ServerNameT = Aws::String>
  ToolReference& WithServerName(ServerNameT&& value) {
    SetServerName(std::forward<ServerNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_type;

  Aws::String m_name;

  Aws::String m_serverName;
  bool m_typeHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_serverNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
