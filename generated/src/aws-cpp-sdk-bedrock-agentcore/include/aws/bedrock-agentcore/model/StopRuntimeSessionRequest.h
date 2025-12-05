/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace BedrockAgentCore {
namespace Model {

/**
 */
class StopRuntimeSessionRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API StopRuntimeSessionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StopRuntimeSession"; }

  AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

  AWS_BEDROCKAGENTCORE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  AWS_BEDROCKAGENTCORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the session that you want to stop.</p>
   */
  inline const Aws::String& GetRuntimeSessionId() const { return m_runtimeSessionId; }
  inline bool RuntimeSessionIdHasBeenSet() const { return m_runtimeSessionIdHasBeenSet; }
  template <typename RuntimeSessionIdT = Aws::String>
  void SetRuntimeSessionId(RuntimeSessionIdT&& value) {
    m_runtimeSessionIdHasBeenSet = true;
    m_runtimeSessionId = std::forward<RuntimeSessionIdT>(value);
  }
  template <typename RuntimeSessionIdT = Aws::String>
  StopRuntimeSessionRequest& WithRuntimeSessionId(RuntimeSessionIdT&& value) {
    SetRuntimeSessionId(std::forward<RuntimeSessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the agent that contains the session that you want to stop.</p>
   */
  inline const Aws::String& GetAgentRuntimeArn() const { return m_agentRuntimeArn; }
  inline bool AgentRuntimeArnHasBeenSet() const { return m_agentRuntimeArnHasBeenSet; }
  template <typename AgentRuntimeArnT = Aws::String>
  void SetAgentRuntimeArn(AgentRuntimeArnT&& value) {
    m_agentRuntimeArnHasBeenSet = true;
    m_agentRuntimeArn = std::forward<AgentRuntimeArnT>(value);
  }
  template <typename AgentRuntimeArnT = Aws::String>
  StopRuntimeSessionRequest& WithAgentRuntimeArn(AgentRuntimeArnT&& value) {
    SetAgentRuntimeArn(std::forward<AgentRuntimeArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional qualifier to specify an agent alias, such as
   * <code>prod</code>code&gt; or <code>dev</code>. If you don't provide a value, the
   * DEFAULT alias is used. </p>
   */
  inline const Aws::String& GetQualifier() const { return m_qualifier; }
  inline bool QualifierHasBeenSet() const { return m_qualifierHasBeenSet; }
  template <typename QualifierT = Aws::String>
  void SetQualifier(QualifierT&& value) {
    m_qualifierHasBeenSet = true;
    m_qualifier = std::forward<QualifierT>(value);
  }
  template <typename QualifierT = Aws::String>
  StopRuntimeSessionRequest& WithQualifier(QualifierT&& value) {
    SetQualifier(std::forward<QualifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Idempotent token used to identify the request. If you use the same token with
   * multiple requests, the same response is returned. Use ClientToken to prevent the
   * same request from being processed more than once.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StopRuntimeSessionRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_runtimeSessionId;

  Aws::String m_agentRuntimeArn;

  Aws::String m_qualifier;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_runtimeSessionIdHasBeenSet = false;
  bool m_agentRuntimeArnHasBeenSet = false;
  bool m_qualifierHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
