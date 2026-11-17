/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/AgentInsightArchiveStatus.h>
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
class UpdateAgentInsightRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API UpdateAgentInsightRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAgentInsight"; }

  AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

  AWS_BEDROCKAGENTCORE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The application that the Agent Insight belongs to.</p>
   */
  inline const Aws::String& GetApplicationName() const { return m_applicationName; }
  inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
  template <typename ApplicationNameT = Aws::String>
  void SetApplicationName(ApplicationNameT&& value) {
    m_applicationNameHasBeenSet = true;
    m_applicationName = std::forward<ApplicationNameT>(value);
  }
  template <typename ApplicationNameT = Aws::String>
  UpdateAgentInsightRequest& WithApplicationName(ApplicationNameT&& value) {
    SetApplicationName(std::forward<ApplicationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the Agent Insight to update.</p>
   */
  inline const Aws::String& GetAgentInsightId() const { return m_agentInsightId; }
  inline bool AgentInsightIdHasBeenSet() const { return m_agentInsightIdHasBeenSet; }
  template <typename AgentInsightIdT = Aws::String>
  void SetAgentInsightId(AgentInsightIdT&& value) {
    m_agentInsightIdHasBeenSet = true;
    m_agentInsightId = std::forward<AgentInsightIdT>(value);
  }
  template <typename AgentInsightIdT = Aws::String>
  UpdateAgentInsightRequest& WithAgentInsightId(AgentInsightIdT&& value) {
    SetAgentInsightId(std::forward<AgentInsightIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The archive status to apply to the Agent Insight. Valid values:</p> <ul> <li>
   * <p> <code>ACTIVE</code> - Marks the insight as active.</p> </li> <li> <p>
   * <code>ARCHIVED</code> - Marks the insight as archived.</p> </li> </ul>
   */
  inline AgentInsightArchiveStatus GetArchiveStatus() const { return m_archiveStatus; }
  inline bool ArchiveStatusHasBeenSet() const { return m_archiveStatusHasBeenSet; }
  inline void SetArchiveStatus(AgentInsightArchiveStatus value) {
    m_archiveStatusHasBeenSet = true;
    m_archiveStatus = value;
  }
  inline UpdateAgentInsightRequest& WithArchiveStatus(AgentInsightArchiveStatus value) {
    SetArchiveStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationName;

  Aws::String m_agentInsightId;

  AgentInsightArchiveStatus m_archiveStatus{AgentInsightArchiveStatus::NOT_SET};
  bool m_applicationNameHasBeenSet = false;
  bool m_agentInsightIdHasBeenSet = false;
  bool m_archiveStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
