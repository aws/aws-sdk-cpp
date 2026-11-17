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
 * <p>The details of the agent hosted on AgentCore Runtime that a batch evaluation
 * invoked.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/AgentCoreRuntimeInvocationDetails">AWS
 * API Reference</a></p>
 */
class AgentCoreRuntimeInvocationDetails {
 public:
  AWS_BEDROCKAGENTCORE_API AgentCoreRuntimeInvocationDetails() = default;
  AWS_BEDROCKAGENTCORE_API AgentCoreRuntimeInvocationDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API AgentCoreRuntimeInvocationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the agent runtime endpoint that the batch
   * evaluation invoked.</p>
   */
  inline const Aws::String& GetAgentRuntimeEndpointArn() const { return m_agentRuntimeEndpointArn; }
  inline bool AgentRuntimeEndpointArnHasBeenSet() const { return m_agentRuntimeEndpointArnHasBeenSet; }
  template <typename AgentRuntimeEndpointArnT = Aws::String>
  void SetAgentRuntimeEndpointArn(AgentRuntimeEndpointArnT&& value) {
    m_agentRuntimeEndpointArnHasBeenSet = true;
    m_agentRuntimeEndpointArn = std::forward<AgentRuntimeEndpointArnT>(value);
  }
  template <typename AgentRuntimeEndpointArnT = Aws::String>
  AgentCoreRuntimeInvocationDetails& WithAgentRuntimeEndpointArn(AgentRuntimeEndpointArnT&& value) {
    SetAgentRuntimeEndpointArn(std::forward<AgentRuntimeEndpointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the agent runtime that the endpoint pointed to when the batch
   * evaluation started. If you update the endpoint after the batch evaluation
   * starts, each later turn uses the version that the endpoint points to when the
   * turn runs.</p>
   */
  inline const Aws::String& GetAgentRuntimeVersion() const { return m_agentRuntimeVersion; }
  inline bool AgentRuntimeVersionHasBeenSet() const { return m_agentRuntimeVersionHasBeenSet; }
  template <typename AgentRuntimeVersionT = Aws::String>
  void SetAgentRuntimeVersion(AgentRuntimeVersionT&& value) {
    m_agentRuntimeVersionHasBeenSet = true;
    m_agentRuntimeVersion = std::forward<AgentRuntimeVersionT>(value);
  }
  template <typename AgentRuntimeVersionT = Aws::String>
  AgentCoreRuntimeInvocationDetails& WithAgentRuntimeVersion(AgentRuntimeVersionT&& value) {
    SetAgentRuntimeVersion(std::forward<AgentRuntimeVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The request payload template that the batch evaluation used for each turn. If
   * the request didn't specify a template, this is the default template.</p>
   */
  inline const Aws::String& GetRequestTemplate() const { return m_requestTemplate; }
  inline bool RequestTemplateHasBeenSet() const { return m_requestTemplateHasBeenSet; }
  template <typename RequestTemplateT = Aws::String>
  void SetRequestTemplate(RequestTemplateT&& value) {
    m_requestTemplateHasBeenSet = true;
    m_requestTemplate = std::forward<RequestTemplateT>(value);
  }
  template <typename RequestTemplateT = Aws::String>
  AgentCoreRuntimeInvocationDetails& WithRequestTemplate(RequestTemplateT&& value) {
    SetRequestTemplate(std::forward<RequestTemplateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentRuntimeEndpointArn;

  Aws::String m_agentRuntimeVersion;

  Aws::String m_requestTemplate;
  bool m_agentRuntimeEndpointArnHasBeenSet = false;
  bool m_agentRuntimeVersionHasBeenSet = false;
  bool m_requestTemplateHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
