/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/EventBridgeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EventBridge
{
namespace Model
{

  /**
   */
  class ListRuleNamesByTargetRequest : public EventBridgeRequest
  {
  public:
    AWS_EVENTBRIDGE_API ListRuleNamesByTargetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRuleNamesByTarget"; }

    AWS_EVENTBRIDGE_API Aws::String SerializePayload() const override;

    AWS_EVENTBRIDGE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the target resource.</p>
     */
    inline const Aws::String& GetTargetArn() const { return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    template<typename TargetArnT = Aws::String>
    void SetTargetArn(TargetArnT&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::forward<TargetArnT>(value); }
    template<typename TargetArnT = Aws::String>
    ListRuleNamesByTargetRequest& WithTargetArn(TargetArnT&& value) { SetTargetArn(std::forward<TargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the event bus to list rules for. If you omit this, the
     * default event bus is used.</p>
     */
    inline const Aws::String& GetEventBusName() const { return m_eventBusName; }
    inline bool EventBusNameHasBeenSet() const { return m_eventBusNameHasBeenSet; }
    template<typename EventBusNameT = Aws::String>
    void SetEventBusName(EventBusNameT&& value) { m_eventBusNameHasBeenSet = true; m_eventBusName = std::forward<EventBusNameT>(value); }
    template<typename EventBusNameT = Aws::String>
    ListRuleNamesByTargetRequest& WithEventBusName(EventBusNameT&& value) { SetEventBusName(std::forward<EventBusNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token returned by a previous call, which you can use to retrieve the next
     * set of results.</p> <p>The value of <code>nextToken</code> is a unique
     * pagination token for each page. To retrieve the next page of results, make the
     * call again using the returned token. Keep all other arguments unchanged.</p> <p>
     * Using an expired pagination token results in an <code>HTTP 400
     * InvalidToken</code> error.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRuleNamesByTargetRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListRuleNamesByTargetRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Aws::String m_eventBusName;
    bool m_eventBusNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
