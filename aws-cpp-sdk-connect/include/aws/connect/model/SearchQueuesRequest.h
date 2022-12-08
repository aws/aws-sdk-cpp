/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/QueueSearchFilter.h>
#include <aws/connect/model/QueueSearchCriteria.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class SearchQueuesRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API SearchQueuesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchQueues"; }

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
    inline SearchQueuesRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline SearchQueuesRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline SearchQueuesRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


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
    inline SearchQueuesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline SearchQueuesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline SearchQueuesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline SearchQueuesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Filters to be applied to search results.</p>
     */
    inline const QueueSearchFilter& GetSearchFilter() const{ return m_searchFilter; }

    /**
     * <p>Filters to be applied to search results.</p>
     */
    inline bool SearchFilterHasBeenSet() const { return m_searchFilterHasBeenSet; }

    /**
     * <p>Filters to be applied to search results.</p>
     */
    inline void SetSearchFilter(const QueueSearchFilter& value) { m_searchFilterHasBeenSet = true; m_searchFilter = value; }

    /**
     * <p>Filters to be applied to search results.</p>
     */
    inline void SetSearchFilter(QueueSearchFilter&& value) { m_searchFilterHasBeenSet = true; m_searchFilter = std::move(value); }

    /**
     * <p>Filters to be applied to search results.</p>
     */
    inline SearchQueuesRequest& WithSearchFilter(const QueueSearchFilter& value) { SetSearchFilter(value); return *this;}

    /**
     * <p>Filters to be applied to search results.</p>
     */
    inline SearchQueuesRequest& WithSearchFilter(QueueSearchFilter&& value) { SetSearchFilter(std::move(value)); return *this;}


    /**
     * <p>The search criteria to be used to return queues.</p>  <p>The
     * <code>name</code> and <code>description</code> fields support "contains" queries
     * with a minimum of 2 characters and a maximum of 25 characters. Any queries with
     * character lengths outside of this range will throw invalid results. </p> 
     */
    inline const QueueSearchCriteria& GetSearchCriteria() const{ return m_searchCriteria; }

    /**
     * <p>The search criteria to be used to return queues.</p>  <p>The
     * <code>name</code> and <code>description</code> fields support "contains" queries
     * with a minimum of 2 characters and a maximum of 25 characters. Any queries with
     * character lengths outside of this range will throw invalid results. </p> 
     */
    inline bool SearchCriteriaHasBeenSet() const { return m_searchCriteriaHasBeenSet; }

    /**
     * <p>The search criteria to be used to return queues.</p>  <p>The
     * <code>name</code> and <code>description</code> fields support "contains" queries
     * with a minimum of 2 characters and a maximum of 25 characters. Any queries with
     * character lengths outside of this range will throw invalid results. </p> 
     */
    inline void SetSearchCriteria(const QueueSearchCriteria& value) { m_searchCriteriaHasBeenSet = true; m_searchCriteria = value; }

    /**
     * <p>The search criteria to be used to return queues.</p>  <p>The
     * <code>name</code> and <code>description</code> fields support "contains" queries
     * with a minimum of 2 characters and a maximum of 25 characters. Any queries with
     * character lengths outside of this range will throw invalid results. </p> 
     */
    inline void SetSearchCriteria(QueueSearchCriteria&& value) { m_searchCriteriaHasBeenSet = true; m_searchCriteria = std::move(value); }

    /**
     * <p>The search criteria to be used to return queues.</p>  <p>The
     * <code>name</code> and <code>description</code> fields support "contains" queries
     * with a minimum of 2 characters and a maximum of 25 characters. Any queries with
     * character lengths outside of this range will throw invalid results. </p> 
     */
    inline SearchQueuesRequest& WithSearchCriteria(const QueueSearchCriteria& value) { SetSearchCriteria(value); return *this;}

    /**
     * <p>The search criteria to be used to return queues.</p>  <p>The
     * <code>name</code> and <code>description</code> fields support "contains" queries
     * with a minimum of 2 characters and a maximum of 25 characters. Any queries with
     * character lengths outside of this range will throw invalid results. </p> 
     */
    inline SearchQueuesRequest& WithSearchCriteria(QueueSearchCriteria&& value) { SetSearchCriteria(std::move(value)); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    QueueSearchFilter m_searchFilter;
    bool m_searchFilterHasBeenSet = false;

    QueueSearchCriteria m_searchCriteria;
    bool m_searchCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
