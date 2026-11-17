/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>The configuration for invoking an agent hosted on AgentCore Runtime. Each
 * scenario runs in its own runtime session, and the turns of a scenario are sent
 * in order within that session. The batch evaluation uses your credentials to read
 * the agent runtime endpoint and the dataset, invoke the agent runtime, and read
 * the resulting traces. You must have permission for these actions.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/AgentCoreRuntimeInvocation">AWS
 * API Reference</a></p>
 */
class AgentCoreRuntimeInvocation {
 public:
  AWS_BEDROCKAGENTCORE_API AgentCoreRuntimeInvocation() = default;
  AWS_BEDROCKAGENTCORE_API AgentCoreRuntimeInvocation(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API AgentCoreRuntimeInvocation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the agent runtime endpoint to invoke.
   * Specify an endpoint in the same account and Region as the batch evaluation. The
   * service requires the endpoint and its agent runtime version to be ready. The
   * agent runtime must use the HTTP protocol and IAM inbound authorization.</p>
   */
  inline const Aws::String& GetAgentRuntimeEndpointArn() const { return m_agentRuntimeEndpointArn; }
  inline bool AgentRuntimeEndpointArnHasBeenSet() const { return m_agentRuntimeEndpointArnHasBeenSet; }
  template <typename AgentRuntimeEndpointArnT = Aws::String>
  void SetAgentRuntimeEndpointArn(AgentRuntimeEndpointArnT&& value) {
    m_agentRuntimeEndpointArnHasBeenSet = true;
    m_agentRuntimeEndpointArn = std::forward<AgentRuntimeEndpointArnT>(value);
  }
  template <typename AgentRuntimeEndpointArnT = Aws::String>
  AgentCoreRuntimeInvocation& WithAgentRuntimeEndpointArn(AgentRuntimeEndpointArnT&& value) {
    SetAgentRuntimeEndpointArn(std::forward<AgentRuntimeEndpointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A JSON object template for the request payload sent to the agent for each
   * turn. The template must contain the placeholder <code>{{turn.input}}</code>
   * exactly once, as the complete value of a JSON string and not as a field name.
   * The service replaces the placeholder with the input of the turn. If the input
   * isn't a string, the service inserts it as a JSON value. If you don't specify a
   * template, the service uses <code>{"prompt": "{{turn.input}}"}</code>.</p>
   */
  inline const Aws::String& GetRequestTemplate() const { return m_requestTemplate; }
  inline bool RequestTemplateHasBeenSet() const { return m_requestTemplateHasBeenSet; }
  template <typename RequestTemplateT = Aws::String>
  void SetRequestTemplate(RequestTemplateT&& value) {
    m_requestTemplateHasBeenSet = true;
    m_requestTemplate = std::forward<RequestTemplateT>(value);
  }
  template <typename RequestTemplateT = Aws::String>
  AgentCoreRuntimeInvocation& WithRequestTemplate(RequestTemplateT&& value) {
    SetRequestTemplate(std::forward<RequestTemplateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentRuntimeEndpointArn;

  Aws::String m_requestTemplate;
  bool m_agentRuntimeEndpointArnHasBeenSet = false;
  bool m_requestTemplateHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
