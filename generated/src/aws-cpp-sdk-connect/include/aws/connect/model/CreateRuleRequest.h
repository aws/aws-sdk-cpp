﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/RuleTriggerEventSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/RulePublishStatus.h>
#include <aws/connect/model/RuleAction.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class CreateRuleRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API CreateRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRule"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline CreateRuleRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline CreateRuleRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline CreateRuleRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique name for the rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateRuleRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event source to trigger the rule.</p>
     */
    inline const RuleTriggerEventSource& GetTriggerEventSource() const{ return m_triggerEventSource; }
    inline bool TriggerEventSourceHasBeenSet() const { return m_triggerEventSourceHasBeenSet; }
    inline void SetTriggerEventSource(const RuleTriggerEventSource& value) { m_triggerEventSourceHasBeenSet = true; m_triggerEventSource = value; }
    inline void SetTriggerEventSource(RuleTriggerEventSource&& value) { m_triggerEventSourceHasBeenSet = true; m_triggerEventSource = std::move(value); }
    inline CreateRuleRequest& WithTriggerEventSource(const RuleTriggerEventSource& value) { SetTriggerEventSource(value); return *this;}
    inline CreateRuleRequest& WithTriggerEventSource(RuleTriggerEventSource&& value) { SetTriggerEventSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conditions of the rule.</p>
     */
    inline const Aws::String& GetFunction() const{ return m_function; }
    inline bool FunctionHasBeenSet() const { return m_functionHasBeenSet; }
    inline void SetFunction(const Aws::String& value) { m_functionHasBeenSet = true; m_function = value; }
    inline void SetFunction(Aws::String&& value) { m_functionHasBeenSet = true; m_function = std::move(value); }
    inline void SetFunction(const char* value) { m_functionHasBeenSet = true; m_function.assign(value); }
    inline CreateRuleRequest& WithFunction(const Aws::String& value) { SetFunction(value); return *this;}
    inline CreateRuleRequest& WithFunction(Aws::String&& value) { SetFunction(std::move(value)); return *this;}
    inline CreateRuleRequest& WithFunction(const char* value) { SetFunction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of actions to be run when the rule is triggered.</p>
     */
    inline const Aws::Vector<RuleAction>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<RuleAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<RuleAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline CreateRuleRequest& WithActions(const Aws::Vector<RuleAction>& value) { SetActions(value); return *this;}
    inline CreateRuleRequest& WithActions(Aws::Vector<RuleAction>&& value) { SetActions(std::move(value)); return *this;}
    inline CreateRuleRequest& AddActions(const RuleAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline CreateRuleRequest& AddActions(RuleAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The publish status of the rule.</p>
     */
    inline const RulePublishStatus& GetPublishStatus() const{ return m_publishStatus; }
    inline bool PublishStatusHasBeenSet() const { return m_publishStatusHasBeenSet; }
    inline void SetPublishStatus(const RulePublishStatus& value) { m_publishStatusHasBeenSet = true; m_publishStatus = value; }
    inline void SetPublishStatus(RulePublishStatus&& value) { m_publishStatusHasBeenSet = true; m_publishStatus = std::move(value); }
    inline CreateRuleRequest& WithPublishStatus(const RulePublishStatus& value) { SetPublishStatus(value); return *this;}
    inline CreateRuleRequest& WithPublishStatus(RulePublishStatus&& value) { SetPublishStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateRuleRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateRuleRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateRuleRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RuleTriggerEventSource m_triggerEventSource;
    bool m_triggerEventSourceHasBeenSet = false;

    Aws::String m_function;
    bool m_functionHasBeenSet = false;

    Aws::Vector<RuleAction> m_actions;
    bool m_actionsHasBeenSet = false;

    RulePublishStatus m_publishStatus;
    bool m_publishStatusHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
