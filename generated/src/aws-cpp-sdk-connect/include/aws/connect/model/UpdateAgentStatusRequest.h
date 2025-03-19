/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/AgentStatusState.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdateAgentStatusRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateAgentStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAgentStatus"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    UpdateAgentStatusRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the agent status.</p>
     */
    inline const Aws::String& GetAgentStatusId() const { return m_agentStatusId; }
    inline bool AgentStatusIdHasBeenSet() const { return m_agentStatusIdHasBeenSet; }
    template<typename AgentStatusIdT = Aws::String>
    void SetAgentStatusId(AgentStatusIdT&& value) { m_agentStatusIdHasBeenSet = true; m_agentStatusId = std::forward<AgentStatusIdT>(value); }
    template<typename AgentStatusIdT = Aws::String>
    UpdateAgentStatusRequest& WithAgentStatusId(AgentStatusIdT&& value) { SetAgentStatusId(std::forward<AgentStatusIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the agent status.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateAgentStatusRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the agent status.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateAgentStatusRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the agent status.</p>
     */
    inline AgentStatusState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(AgentStatusState value) { m_stateHasBeenSet = true; m_state = value; }
    inline UpdateAgentStatusRequest& WithState(AgentStatusState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display order of the agent status.</p>
     */
    inline int GetDisplayOrder() const { return m_displayOrder; }
    inline bool DisplayOrderHasBeenSet() const { return m_displayOrderHasBeenSet; }
    inline void SetDisplayOrder(int value) { m_displayOrderHasBeenSet = true; m_displayOrder = value; }
    inline UpdateAgentStatusRequest& WithDisplayOrder(int value) { SetDisplayOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A number indicating the reset order of the agent status.</p>
     */
    inline bool GetResetOrderNumber() const { return m_resetOrderNumber; }
    inline bool ResetOrderNumberHasBeenSet() const { return m_resetOrderNumberHasBeenSet; }
    inline void SetResetOrderNumber(bool value) { m_resetOrderNumberHasBeenSet = true; m_resetOrderNumber = value; }
    inline UpdateAgentStatusRequest& WithResetOrderNumber(bool value) { SetResetOrderNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_agentStatusId;
    bool m_agentStatusIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AgentStatusState m_state{AgentStatusState::NOT_SET};
    bool m_stateHasBeenSet = false;

    int m_displayOrder{0};
    bool m_displayOrderHasBeenSet = false;

    bool m_resetOrderNumber{false};
    bool m_resetOrderNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
