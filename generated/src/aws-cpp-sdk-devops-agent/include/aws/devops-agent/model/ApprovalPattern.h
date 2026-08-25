/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

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
 * <p>Tool-invocation pattern primitive used to express both an agent-requested
 * approval and a finalized approval. The primitive is uniform across AWS and
 * third-party tools: a tool identifier plus a map of argument pins that narrow
 * which invocations the pattern matches.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ApprovalPattern">AWS
 * API Reference</a></p>
 */
class ApprovalPattern {
 public:
  AWS_DEVOPSAGENT_API ApprovalPattern() = default;
  AWS_DEVOPSAGENT_API ApprovalPattern(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API ApprovalPattern& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Identifier of the tool the pattern applies to (e.g. `use_aws` for AWS
   * actions, or a third-party tool name).</p>
   */
  inline const Aws::String& GetTool() const { return m_tool; }
  inline bool ToolHasBeenSet() const { return m_toolHasBeenSet; }
  template <typename ToolT = Aws::String>
  void SetTool(ToolT&& value) {
    m_toolHasBeenSet = true;
    m_tool = std::forward<ToolT>(value);
  }
  template <typename ToolT = Aws::String>
  ApprovalPattern& WithTool(ToolT&& value) {
    SetTool(std::forward<ToolT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Argument constraints that narrow which tool invocations the pattern matches.
   * For AWS tools, the map must include `operation` (the IAM action, e.g.
   * `ec2:AuthorizeSecurityGroupIngress`) and `resource_arn` (the resource ARN or ARN
   * glob); additional narrowing arguments go in further pin keys. The same `{tool,
   * argumentPins}` shape is used uniformly for AWS and third-party tools, with
   * tool-specific keys for third-party tools. Requests whose argument pins are
   * collectively too large are rejected with a ValidationException.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetArgumentPins() const { return m_argumentPins; }
  inline bool ArgumentPinsHasBeenSet() const { return m_argumentPinsHasBeenSet; }
  template <typename ArgumentPinsT = Aws::Map<Aws::String, Aws::String>>
  void SetArgumentPins(ArgumentPinsT&& value) {
    m_argumentPinsHasBeenSet = true;
    m_argumentPins = std::forward<ArgumentPinsT>(value);
  }
  template <typename ArgumentPinsT = Aws::Map<Aws::String, Aws::String>>
  ApprovalPattern& WithArgumentPins(ArgumentPinsT&& value) {
    SetArgumentPins(std::forward<ArgumentPinsT>(value));
    return *this;
  }
  template <typename ArgumentPinsKeyT = Aws::String, typename ArgumentPinsValueT = Aws::String>
  ApprovalPattern& AddArgumentPins(ArgumentPinsKeyT&& key, ArgumentPinsValueT&& value) {
    m_argumentPinsHasBeenSet = true;
    m_argumentPins.emplace(std::forward<ArgumentPinsKeyT>(key), std::forward<ArgumentPinsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tool;

  Aws::Map<Aws::String, Aws::String> m_argumentPins;
  bool m_toolHasBeenSet = false;
  bool m_argumentPinsHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
