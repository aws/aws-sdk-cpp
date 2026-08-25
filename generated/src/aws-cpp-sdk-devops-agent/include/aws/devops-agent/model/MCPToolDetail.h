/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/ToolClassification.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>An MCP tool together with its access categorization.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/MCPToolDetail">AWS
 * API Reference</a></p>
 */
class MCPToolDetail {
 public:
  AWS_DEVOPSAGENT_API MCPToolDetail() = default;
  AWS_DEVOPSAGENT_API MCPToolDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API MCPToolDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the MCP tool.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  MCPToolDetail& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The access categorization of the MCP tool.</p>
   */
  inline ToolClassification GetToolClassification() const { return m_toolClassification; }
  inline bool ToolClassificationHasBeenSet() const { return m_toolClassificationHasBeenSet; }
  inline void SetToolClassification(ToolClassification value) {
    m_toolClassificationHasBeenSet = true;
    m_toolClassification = value;
  }
  inline MCPToolDetail& WithToolClassification(ToolClassification value) {
    SetToolClassification(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  ToolClassification m_toolClassification{ToolClassification::NOT_SET};
  bool m_nameHasBeenSet = false;
  bool m_toolClassificationHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
