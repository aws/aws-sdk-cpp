/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/EventBridgeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/ReplayState.h>
#include <utility>

namespace Aws
{
namespace EventBridge
{
namespace Model
{

  /**
   */
  class ListReplaysRequest : public EventBridgeRequest
  {
  public:
    AWS_EVENTBRIDGE_API ListReplaysRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListReplays"; }

    AWS_EVENTBRIDGE_API Aws::String SerializePayload() const override;

    AWS_EVENTBRIDGE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A name prefix to filter the replays returned. Only replays with name that
     * match the prefix are returned.</p>
     */
    inline const Aws::String& GetNamePrefix() const { return m_namePrefix; }
    inline bool NamePrefixHasBeenSet() const { return m_namePrefixHasBeenSet; }
    template<typename NamePrefixT = Aws::String>
    void SetNamePrefix(NamePrefixT&& value) { m_namePrefixHasBeenSet = true; m_namePrefix = std::forward<NamePrefixT>(value); }
    template<typename NamePrefixT = Aws::String>
    ListReplaysRequest& WithNamePrefix(NamePrefixT&& value) { SetNamePrefix(std::forward<NamePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the replay.</p>
     */
    inline ReplayState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ReplayState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ListReplaysRequest& WithState(ReplayState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the archive from which the events are replayed.</p>
     */
    inline const Aws::String& GetEventSourceArn() const { return m_eventSourceArn; }
    inline bool EventSourceArnHasBeenSet() const { return m_eventSourceArnHasBeenSet; }
    template<typename EventSourceArnT = Aws::String>
    void SetEventSourceArn(EventSourceArnT&& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = std::forward<EventSourceArnT>(value); }
    template<typename EventSourceArnT = Aws::String>
    ListReplaysRequest& WithEventSourceArn(EventSourceArnT&& value) { SetEventSourceArn(std::forward<EventSourceArnT>(value)); return *this;}
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
    ListReplaysRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of replays to retrieve.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListReplaysRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_namePrefix;
    bool m_namePrefixHasBeenSet = false;

    ReplayState m_state{ReplayState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_eventSourceArn;
    bool m_eventSourceArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
