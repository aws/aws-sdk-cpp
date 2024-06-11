﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruRequest.h>
#include <aws/devops-guru/model/ListMonitoredResourcesFilters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

  /**
   */
  class ListMonitoredResourcesRequest : public DevOpsGuruRequest
  {
  public:
    AWS_DEVOPSGURU_API ListMonitoredResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMonitoredResources"; }

    AWS_DEVOPSGURU_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> Filters to determine which monitored resources you want to retrieve. You can
     * filter by resource type or resource permission status. </p>
     */
    inline const ListMonitoredResourcesFilters& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const ListMonitoredResourcesFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(ListMonitoredResourcesFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline ListMonitoredResourcesRequest& WithFilters(const ListMonitoredResourcesFilters& value) { SetFilters(value); return *this;}
    inline ListMonitoredResourcesRequest& WithFilters(ListMonitoredResourcesFilters&& value) { SetFilters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListMonitoredResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListMonitoredResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMonitoredResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMonitoredResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    ListMonitoredResourcesFilters m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
