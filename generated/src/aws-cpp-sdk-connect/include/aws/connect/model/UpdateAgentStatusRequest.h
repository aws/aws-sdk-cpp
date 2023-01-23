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
    AWS_CONNECT_API UpdateAgentStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAgentStatus"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateAgentStatusRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateAgentStatusRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateAgentStatusRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The identifier of the agent status.</p>
     */
    inline const Aws::String& GetAgentStatusId() const{ return m_agentStatusId; }

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline bool AgentStatusIdHasBeenSet() const { return m_agentStatusIdHasBeenSet; }

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline void SetAgentStatusId(const Aws::String& value) { m_agentStatusIdHasBeenSet = true; m_agentStatusId = value; }

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline void SetAgentStatusId(Aws::String&& value) { m_agentStatusIdHasBeenSet = true; m_agentStatusId = std::move(value); }

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline void SetAgentStatusId(const char* value) { m_agentStatusIdHasBeenSet = true; m_agentStatusId.assign(value); }

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline UpdateAgentStatusRequest& WithAgentStatusId(const Aws::String& value) { SetAgentStatusId(value); return *this;}

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline UpdateAgentStatusRequest& WithAgentStatusId(Aws::String&& value) { SetAgentStatusId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline UpdateAgentStatusRequest& WithAgentStatusId(const char* value) { SetAgentStatusId(value); return *this;}


    /**
     * <p>The name of the agent status.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the agent status.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the agent status.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the agent status.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the agent status.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the agent status.</p>
     */
    inline UpdateAgentStatusRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the agent status.</p>
     */
    inline UpdateAgentStatusRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the agent status.</p>
     */
    inline UpdateAgentStatusRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the agent status.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the agent status.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the agent status.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the agent status.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the agent status.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the agent status.</p>
     */
    inline UpdateAgentStatusRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the agent status.</p>
     */
    inline UpdateAgentStatusRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the agent status.</p>
     */
    inline UpdateAgentStatusRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The state of the agent status.</p>
     */
    inline const AgentStatusState& GetState() const{ return m_state; }

    /**
     * <p>The state of the agent status.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the agent status.</p>
     */
    inline void SetState(const AgentStatusState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the agent status.</p>
     */
    inline void SetState(AgentStatusState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the agent status.</p>
     */
    inline UpdateAgentStatusRequest& WithState(const AgentStatusState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the agent status.</p>
     */
    inline UpdateAgentStatusRequest& WithState(AgentStatusState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The display order of the agent status.</p>
     */
    inline int GetDisplayOrder() const{ return m_displayOrder; }

    /**
     * <p>The display order of the agent status.</p>
     */
    inline bool DisplayOrderHasBeenSet() const { return m_displayOrderHasBeenSet; }

    /**
     * <p>The display order of the agent status.</p>
     */
    inline void SetDisplayOrder(int value) { m_displayOrderHasBeenSet = true; m_displayOrder = value; }

    /**
     * <p>The display order of the agent status.</p>
     */
    inline UpdateAgentStatusRequest& WithDisplayOrder(int value) { SetDisplayOrder(value); return *this;}


    /**
     * <p>A number indicating the reset order of the agent status.</p>
     */
    inline bool GetResetOrderNumber() const{ return m_resetOrderNumber; }

    /**
     * <p>A number indicating the reset order of the agent status.</p>
     */
    inline bool ResetOrderNumberHasBeenSet() const { return m_resetOrderNumberHasBeenSet; }

    /**
     * <p>A number indicating the reset order of the agent status.</p>
     */
    inline void SetResetOrderNumber(bool value) { m_resetOrderNumberHasBeenSet = true; m_resetOrderNumber = value; }

    /**
     * <p>A number indicating the reset order of the agent status.</p>
     */
    inline UpdateAgentStatusRequest& WithResetOrderNumber(bool value) { SetResetOrderNumber(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_agentStatusId;
    bool m_agentStatusIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AgentStatusState m_state;
    bool m_stateHasBeenSet = false;

    int m_displayOrder;
    bool m_displayOrderHasBeenSet = false;

    bool m_resetOrderNumber;
    bool m_resetOrderNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
