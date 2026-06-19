/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Specifies a parameter override for a connector tool, allowing you to control
 * parameter visibility and descriptions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ConnectorParameterOverride">AWS
 * API Reference</a></p>
 */
class ConnectorParameterOverride {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ConnectorParameterOverride() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ConnectorParameterOverride(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ConnectorParameterOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A JSON Pointer path identifying the parameter (for example,
   * <code>/numberOfResults</code> or <code>/filter</code>).</p>
   */
  inline const Aws::String& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::String>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::String>
  ConnectorParameterOverride& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An agent-facing description override for this parameter.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ConnectorParameterOverride& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether this parameter is visible to the agent. If not specified, uses the
   * service default.</p>
   */
  inline bool GetVisible() const { return m_visible; }
  inline bool VisibleHasBeenSet() const { return m_visibleHasBeenSet; }
  inline void SetVisible(bool value) {
    m_visibleHasBeenSet = true;
    m_visible = value;
  }
  inline ConnectorParameterOverride& WithVisible(bool value) {
    SetVisible(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_path;

  Aws::String m_description;

  bool m_visible{false};
  bool m_pathHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_visibleHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
