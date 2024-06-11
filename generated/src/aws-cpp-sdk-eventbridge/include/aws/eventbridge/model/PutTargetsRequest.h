/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/EventBridgeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eventbridge/model/Target.h>
#include <utility>

namespace Aws
{
namespace EventBridge
{
namespace Model
{

  /**
   */
  class PutTargetsRequest : public EventBridgeRequest
  {
  public:
    AWS_EVENTBRIDGE_API PutTargetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutTargets"; }

    AWS_EVENTBRIDGE_API Aws::String SerializePayload() const override;

    AWS_EVENTBRIDGE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetRule() const{ return m_rule; }
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
    inline void SetRule(const Aws::String& value) { m_ruleHasBeenSet = true; m_rule = value; }
    inline void SetRule(Aws::String&& value) { m_ruleHasBeenSet = true; m_rule = std::move(value); }
    inline void SetRule(const char* value) { m_ruleHasBeenSet = true; m_rule.assign(value); }
    inline PutTargetsRequest& WithRule(const Aws::String& value) { SetRule(value); return *this;}
    inline PutTargetsRequest& WithRule(Aws::String&& value) { SetRule(std::move(value)); return *this;}
    inline PutTargetsRequest& WithRule(const char* value) { SetRule(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the event bus associated with the rule. If you omit this,
     * the default event bus is used.</p>
     */
    inline const Aws::String& GetEventBusName() const{ return m_eventBusName; }
    inline bool EventBusNameHasBeenSet() const { return m_eventBusNameHasBeenSet; }
    inline void SetEventBusName(const Aws::String& value) { m_eventBusNameHasBeenSet = true; m_eventBusName = value; }
    inline void SetEventBusName(Aws::String&& value) { m_eventBusNameHasBeenSet = true; m_eventBusName = std::move(value); }
    inline void SetEventBusName(const char* value) { m_eventBusNameHasBeenSet = true; m_eventBusName.assign(value); }
    inline PutTargetsRequest& WithEventBusName(const Aws::String& value) { SetEventBusName(value); return *this;}
    inline PutTargetsRequest& WithEventBusName(Aws::String&& value) { SetEventBusName(std::move(value)); return *this;}
    inline PutTargetsRequest& WithEventBusName(const char* value) { SetEventBusName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The targets to update or add to the rule.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline PutTargetsRequest& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}
    inline PutTargetsRequest& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}
    inline PutTargetsRequest& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }
    inline PutTargetsRequest& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_rule;
    bool m_ruleHasBeenSet = false;

    Aws::String m_eventBusName;
    bool m_eventBusNameHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
