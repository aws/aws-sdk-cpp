﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/SearchContactsTimeRange.h>
#include <aws/connect/model/SearchCriteria.h>
#include <aws/connect/model/Sort.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class SearchContactsRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API SearchContactsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchContacts"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of Amazon Connect instance. You can find the instance ID in
     * the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline SearchContactsRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline SearchContactsRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline SearchContactsRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time range that you want to search results.</p>
     */
    inline const SearchContactsTimeRange& GetTimeRange() const{ return m_timeRange; }
    inline bool TimeRangeHasBeenSet() const { return m_timeRangeHasBeenSet; }
    inline void SetTimeRange(const SearchContactsTimeRange& value) { m_timeRangeHasBeenSet = true; m_timeRange = value; }
    inline void SetTimeRange(SearchContactsTimeRange&& value) { m_timeRangeHasBeenSet = true; m_timeRange = std::move(value); }
    inline SearchContactsRequest& WithTimeRange(const SearchContactsTimeRange& value) { SetTimeRange(value); return *this;}
    inline SearchContactsRequest& WithTimeRange(SearchContactsTimeRange&& value) { SetTimeRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The search criteria to be used to return contacts.</p>
     */
    inline const SearchCriteria& GetSearchCriteria() const{ return m_searchCriteria; }
    inline bool SearchCriteriaHasBeenSet() const { return m_searchCriteriaHasBeenSet; }
    inline void SetSearchCriteria(const SearchCriteria& value) { m_searchCriteriaHasBeenSet = true; m_searchCriteria = value; }
    inline void SetSearchCriteria(SearchCriteria&& value) { m_searchCriteriaHasBeenSet = true; m_searchCriteria = std::move(value); }
    inline SearchContactsRequest& WithSearchCriteria(const SearchCriteria& value) { SetSearchCriteria(value); return *this;}
    inline SearchContactsRequest& WithSearchCriteria(SearchCriteria&& value) { SetSearchCriteria(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchContactsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline SearchContactsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchContactsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchContactsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a field to sort by and a sort order.</p>
     */
    inline const Sort& GetSort() const{ return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    inline void SetSort(const Sort& value) { m_sortHasBeenSet = true; m_sort = value; }
    inline void SetSort(Sort&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }
    inline SearchContactsRequest& WithSort(const Sort& value) { SetSort(value); return *this;}
    inline SearchContactsRequest& WithSort(Sort&& value) { SetSort(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    SearchContactsTimeRange m_timeRange;
    bool m_timeRangeHasBeenSet = false;

    SearchCriteria m_searchCriteria;
    bool m_searchCriteriaHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Sort m_sort;
    bool m_sortHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
