/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/RulePublishStatus.h>
#include <aws/connect/model/EventSourceName.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Connect
{
namespace Model
{

  /**
   */
  class ListRulesRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API ListRulesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRules"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;

    AWS_CONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
    inline ListRulesRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline ListRulesRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline ListRulesRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The publish status of the rule.</p>
     */
    inline const RulePublishStatus& GetPublishStatus() const{ return m_publishStatus; }

    /**
     * <p>The publish status of the rule.</p>
     */
    inline bool PublishStatusHasBeenSet() const { return m_publishStatusHasBeenSet; }

    /**
     * <p>The publish status of the rule.</p>
     */
    inline void SetPublishStatus(const RulePublishStatus& value) { m_publishStatusHasBeenSet = true; m_publishStatus = value; }

    /**
     * <p>The publish status of the rule.</p>
     */
    inline void SetPublishStatus(RulePublishStatus&& value) { m_publishStatusHasBeenSet = true; m_publishStatus = std::move(value); }

    /**
     * <p>The publish status of the rule.</p>
     */
    inline ListRulesRequest& WithPublishStatus(const RulePublishStatus& value) { SetPublishStatus(value); return *this;}

    /**
     * <p>The publish status of the rule.</p>
     */
    inline ListRulesRequest& WithPublishStatus(RulePublishStatus&& value) { SetPublishStatus(std::move(value)); return *this;}


    /**
     * <p>The name of the event source.</p>
     */
    inline const EventSourceName& GetEventSourceName() const{ return m_eventSourceName; }

    /**
     * <p>The name of the event source.</p>
     */
    inline bool EventSourceNameHasBeenSet() const { return m_eventSourceNameHasBeenSet; }

    /**
     * <p>The name of the event source.</p>
     */
    inline void SetEventSourceName(const EventSourceName& value) { m_eventSourceNameHasBeenSet = true; m_eventSourceName = value; }

    /**
     * <p>The name of the event source.</p>
     */
    inline void SetEventSourceName(EventSourceName&& value) { m_eventSourceNameHasBeenSet = true; m_eventSourceName = std::move(value); }

    /**
     * <p>The name of the event source.</p>
     */
    inline ListRulesRequest& WithEventSourceName(const EventSourceName& value) { SetEventSourceName(value); return *this;}

    /**
     * <p>The name of the event source.</p>
     */
    inline ListRulesRequest& WithEventSourceName(EventSourceName&& value) { SetEventSourceName(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline ListRulesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline ListRulesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline ListRulesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline ListRulesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    RulePublishStatus m_publishStatus;
    bool m_publishStatusHasBeenSet = false;

    EventSourceName m_eventSourceName;
    bool m_eventSourceNameHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
