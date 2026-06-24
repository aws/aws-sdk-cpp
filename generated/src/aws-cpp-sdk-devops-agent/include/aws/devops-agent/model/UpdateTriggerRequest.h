/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgentRequest.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Request structure for updating a Trigger</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/UpdateTriggerRequest">AWS
 * API Reference</a></p>
 */
class UpdateTriggerRequest : public DevOpsAgentRequest {
 public:
  AWS_DEVOPSAGENT_API UpdateTriggerRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateTrigger"; }

  AWS_DEVOPSAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier for the agent space containing the Trigger</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  UpdateTriggerRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the Trigger to update</p>
   */
  inline const Aws::String& GetTriggerId() const { return m_triggerId; }
  inline bool TriggerIdHasBeenSet() const { return m_triggerIdHasBeenSet; }
  template <typename TriggerIdT = Aws::String>
  void SetTriggerId(TriggerIdT&& value) {
    m_triggerIdHasBeenSet = true;
    m_triggerId = std::forward<TriggerIdT>(value);
  }
  template <typename TriggerIdT = Aws::String>
  UpdateTriggerRequest& WithTriggerId(TriggerIdT&& value) {
    SetTriggerId(std::forward<TriggerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new status for the Trigger</p>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  UpdateTriggerRequest& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier used for idempotent Trigger update</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateTriggerRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  Aws::String m_triggerId;

  Aws::String m_status;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_triggerIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
