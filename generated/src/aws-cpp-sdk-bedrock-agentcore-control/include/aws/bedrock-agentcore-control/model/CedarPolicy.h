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
 * <p>Represents a Cedar policy statement within the AgentCore Policy system. Cedar
 * is a policy language designed for authorization that provides human-readable,
 * analyzable, and high-performance policy evaluation for controlling agent
 * behavior and access decisions. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CedarPolicy">AWS
 * API Reference</a></p>
 */
class CedarPolicy {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CedarPolicy() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CedarPolicy(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API CedarPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Cedar policy statement that defines the authorization logic. This
   * statement follows Cedar syntax and specifies principals, actions, resources, and
   * conditions that determine when access should be allowed or denied.</p>
   */
  inline const Aws::String& GetStatement() const { return m_statement; }
  inline bool StatementHasBeenSet() const { return m_statementHasBeenSet; }
  template <typename StatementT = Aws::String>
  void SetStatement(StatementT&& value) {
    m_statementHasBeenSet = true;
    m_statement = std::forward<StatementT>(value);
  }
  template <typename StatementT = Aws::String>
  CedarPolicy& WithStatement(StatementT&& value) {
    SetStatement(std::forward<StatementT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_statement;
  bool m_statementHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
