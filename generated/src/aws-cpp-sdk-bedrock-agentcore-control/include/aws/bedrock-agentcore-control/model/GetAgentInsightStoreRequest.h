/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class GetAgentInsightStoreRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API GetAgentInsightStoreRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetAgentInsightStore"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Specifies the unique identifier of the Agent Insight Store to retrieve.</p>
   */
  inline const Aws::String& GetAgentInsightStoreId() const { return m_agentInsightStoreId; }
  inline bool AgentInsightStoreIdHasBeenSet() const { return m_agentInsightStoreIdHasBeenSet; }
  template <typename AgentInsightStoreIdT = Aws::String>
  void SetAgentInsightStoreId(AgentInsightStoreIdT&& value) {
    m_agentInsightStoreIdHasBeenSet = true;
    m_agentInsightStoreId = std::forward<AgentInsightStoreIdT>(value);
  }
  template <typename AgentInsightStoreIdT = Aws::String>
  GetAgentInsightStoreRequest& WithAgentInsightStoreId(AgentInsightStoreIdT&& value) {
    SetAgentInsightStoreId(std::forward<AgentInsightStoreIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentInsightStoreId;
  bool m_agentInsightStoreIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
