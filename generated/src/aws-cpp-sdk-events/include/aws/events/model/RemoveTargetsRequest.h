/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/CloudWatchEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

  /**
   */
  class RemoveTargetsRequest : public CloudWatchEventsRequest
  {
  public:
    AWS_CLOUDWATCHEVENTS_API RemoveTargetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveTargets"; }

    AWS_CLOUDWATCHEVENTS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHEVENTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetRule() const{ return m_rule; }

    /**
     * <p>The name of the rule.</p>
     */
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetRule(const Aws::String& value) { m_ruleHasBeenSet = true; m_rule = value; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetRule(Aws::String&& value) { m_ruleHasBeenSet = true; m_rule = std::move(value); }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetRule(const char* value) { m_ruleHasBeenSet = true; m_rule.assign(value); }

    /**
     * <p>The name of the rule.</p>
     */
    inline RemoveTargetsRequest& WithRule(const Aws::String& value) { SetRule(value); return *this;}

    /**
     * <p>The name of the rule.</p>
     */
    inline RemoveTargetsRequest& WithRule(Aws::String&& value) { SetRule(std::move(value)); return *this;}

    /**
     * <p>The name of the rule.</p>
     */
    inline RemoveTargetsRequest& WithRule(const char* value) { SetRule(value); return *this;}


    /**
     * <p>The name or ARN of the event bus associated with the rule. If you omit this,
     * the default event bus is used.</p>
     */
    inline const Aws::String& GetEventBusName() const{ return m_eventBusName; }

    /**
     * <p>The name or ARN of the event bus associated with the rule. If you omit this,
     * the default event bus is used.</p>
     */
    inline bool EventBusNameHasBeenSet() const { return m_eventBusNameHasBeenSet; }

    /**
     * <p>The name or ARN of the event bus associated with the rule. If you omit this,
     * the default event bus is used.</p>
     */
    inline void SetEventBusName(const Aws::String& value) { m_eventBusNameHasBeenSet = true; m_eventBusName = value; }

    /**
     * <p>The name or ARN of the event bus associated with the rule. If you omit this,
     * the default event bus is used.</p>
     */
    inline void SetEventBusName(Aws::String&& value) { m_eventBusNameHasBeenSet = true; m_eventBusName = std::move(value); }

    /**
     * <p>The name or ARN of the event bus associated with the rule. If you omit this,
     * the default event bus is used.</p>
     */
    inline void SetEventBusName(const char* value) { m_eventBusNameHasBeenSet = true; m_eventBusName.assign(value); }

    /**
     * <p>The name or ARN of the event bus associated with the rule. If you omit this,
     * the default event bus is used.</p>
     */
    inline RemoveTargetsRequest& WithEventBusName(const Aws::String& value) { SetEventBusName(value); return *this;}

    /**
     * <p>The name or ARN of the event bus associated with the rule. If you omit this,
     * the default event bus is used.</p>
     */
    inline RemoveTargetsRequest& WithEventBusName(Aws::String&& value) { SetEventBusName(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the event bus associated with the rule. If you omit this,
     * the default event bus is used.</p>
     */
    inline RemoveTargetsRequest& WithEventBusName(const char* value) { SetEventBusName(value); return *this;}


    /**
     * <p>The IDs of the targets to remove from the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIds() const{ return m_ids; }

    /**
     * <p>The IDs of the targets to remove from the rule.</p>
     */
    inline bool IdsHasBeenSet() const { return m_idsHasBeenSet; }

    /**
     * <p>The IDs of the targets to remove from the rule.</p>
     */
    inline void SetIds(const Aws::Vector<Aws::String>& value) { m_idsHasBeenSet = true; m_ids = value; }

    /**
     * <p>The IDs of the targets to remove from the rule.</p>
     */
    inline void SetIds(Aws::Vector<Aws::String>&& value) { m_idsHasBeenSet = true; m_ids = std::move(value); }

    /**
     * <p>The IDs of the targets to remove from the rule.</p>
     */
    inline RemoveTargetsRequest& WithIds(const Aws::Vector<Aws::String>& value) { SetIds(value); return *this;}

    /**
     * <p>The IDs of the targets to remove from the rule.</p>
     */
    inline RemoveTargetsRequest& WithIds(Aws::Vector<Aws::String>&& value) { SetIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the targets to remove from the rule.</p>
     */
    inline RemoveTargetsRequest& AddIds(const Aws::String& value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }

    /**
     * <p>The IDs of the targets to remove from the rule.</p>
     */
    inline RemoveTargetsRequest& AddIds(Aws::String&& value) { m_idsHasBeenSet = true; m_ids.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the targets to remove from the rule.</p>
     */
    inline RemoveTargetsRequest& AddIds(const char* value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }


    /**
     * <p>If this is a managed rule, created by an Amazon Web Services service on your
     * behalf, you must specify <code>Force</code> as <code>True</code> to remove
     * targets. This parameter is ignored for rules that are not managed rules. You can
     * check whether a rule is a managed rule by using <code>DescribeRule</code> or
     * <code>ListRules</code> and checking the <code>ManagedBy</code> field of the
     * response.</p>
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p>If this is a managed rule, created by an Amazon Web Services service on your
     * behalf, you must specify <code>Force</code> as <code>True</code> to remove
     * targets. This parameter is ignored for rules that are not managed rules. You can
     * check whether a rule is a managed rule by using <code>DescribeRule</code> or
     * <code>ListRules</code> and checking the <code>ManagedBy</code> field of the
     * response.</p>
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * <p>If this is a managed rule, created by an Amazon Web Services service on your
     * behalf, you must specify <code>Force</code> as <code>True</code> to remove
     * targets. This parameter is ignored for rules that are not managed rules. You can
     * check whether a rule is a managed rule by using <code>DescribeRule</code> or
     * <code>ListRules</code> and checking the <code>ManagedBy</code> field of the
     * response.</p>
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p>If this is a managed rule, created by an Amazon Web Services service on your
     * behalf, you must specify <code>Force</code> as <code>True</code> to remove
     * targets. This parameter is ignored for rules that are not managed rules. You can
     * check whether a rule is a managed rule by using <code>DescribeRule</code> or
     * <code>ListRules</code> and checking the <code>ManagedBy</code> field of the
     * response.</p>
     */
    inline RemoveTargetsRequest& WithForce(bool value) { SetForce(value); return *this;}

  private:

    Aws::String m_rule;
    bool m_ruleHasBeenSet = false;

    Aws::String m_eventBusName;
    bool m_eventBusNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_ids;
    bool m_idsHasBeenSet = false;

    bool m_force;
    bool m_forceHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
