/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/CloudWatchEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

  /**
   */
  class ListTargetsByRuleRequest : public CloudWatchEventsRequest
  {
  public:
    AWS_CLOUDWATCHEVENTS_API ListTargetsByRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTargetsByRule"; }

    AWS_CLOUDWATCHEVENTS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHEVENTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetRule() const{ return m_rule; }
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
    inline void SetRule(const Aws::String& value) { m_ruleHasBeenSet = true; m_rule = value; }
    inline void SetRule(Aws::String&& value) { m_ruleHasBeenSet = true; m_rule = std::move(value); }
    inline void SetRule(const char* value) { m_ruleHasBeenSet = true; m_rule.assign(value); }
    inline ListTargetsByRuleRequest& WithRule(const Aws::String& value) { SetRule(value); return *this;}
    inline ListTargetsByRuleRequest& WithRule(Aws::String&& value) { SetRule(std::move(value)); return *this;}
    inline ListTargetsByRuleRequest& WithRule(const char* value) { SetRule(value); return *this;}
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
    inline ListTargetsByRuleRequest& WithEventBusName(const Aws::String& value) { SetEventBusName(value); return *this;}
    inline ListTargetsByRuleRequest& WithEventBusName(Aws::String&& value) { SetEventBusName(std::move(value)); return *this;}
    inline ListTargetsByRuleRequest& WithEventBusName(const char* value) { SetEventBusName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListTargetsByRuleRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTargetsByRuleRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTargetsByRuleRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListTargetsByRuleRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_rule;
    bool m_ruleHasBeenSet = false;

    Aws::String m_eventBusName;
    bool m_eventBusNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
