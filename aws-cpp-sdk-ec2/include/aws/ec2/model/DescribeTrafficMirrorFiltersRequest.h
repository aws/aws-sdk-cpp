﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API DescribeTrafficMirrorFiltersRequest : public EC2Request
  {
  public:
    DescribeTrafficMirrorFiltersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTrafficMirrorFilters"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTrafficMirrorFilterIds() const{ return m_trafficMirrorFilterIds; }

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline bool TrafficMirrorFilterIdsHasBeenSet() const { return m_trafficMirrorFilterIdsHasBeenSet; }

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline void SetTrafficMirrorFilterIds(const Aws::Vector<Aws::String>& value) { m_trafficMirrorFilterIdsHasBeenSet = true; m_trafficMirrorFilterIds = value; }

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline void SetTrafficMirrorFilterIds(Aws::Vector<Aws::String>&& value) { m_trafficMirrorFilterIdsHasBeenSet = true; m_trafficMirrorFilterIds = std::move(value); }

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline DescribeTrafficMirrorFiltersRequest& WithTrafficMirrorFilterIds(const Aws::Vector<Aws::String>& value) { SetTrafficMirrorFilterIds(value); return *this;}

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline DescribeTrafficMirrorFiltersRequest& WithTrafficMirrorFilterIds(Aws::Vector<Aws::String>&& value) { SetTrafficMirrorFilterIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline DescribeTrafficMirrorFiltersRequest& AddTrafficMirrorFilterIds(const Aws::String& value) { m_trafficMirrorFilterIdsHasBeenSet = true; m_trafficMirrorFilterIds.push_back(value); return *this; }

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline DescribeTrafficMirrorFiltersRequest& AddTrafficMirrorFilterIds(Aws::String&& value) { m_trafficMirrorFilterIdsHasBeenSet = true; m_trafficMirrorFilterIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline DescribeTrafficMirrorFiltersRequest& AddTrafficMirrorFilterIds(const char* value) { m_trafficMirrorFilterIdsHasBeenSet = true; m_trafficMirrorFilterIds.push_back(value); return *this; }


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeTrafficMirrorFiltersRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>description</code>: The Traffic Mirror filter description.</p> </li> <li>
     * <p> <code>traffic-mirror-filter-id</code>: The ID of the Traffic Mirror
     * filter.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>description</code>: The Traffic Mirror filter description.</p> </li> <li>
     * <p> <code>traffic-mirror-filter-id</code>: The ID of the Traffic Mirror
     * filter.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>description</code>: The Traffic Mirror filter description.</p> </li> <li>
     * <p> <code>traffic-mirror-filter-id</code>: The ID of the Traffic Mirror
     * filter.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>description</code>: The Traffic Mirror filter description.</p> </li> <li>
     * <p> <code>traffic-mirror-filter-id</code>: The ID of the Traffic Mirror
     * filter.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>description</code>: The Traffic Mirror filter description.</p> </li> <li>
     * <p> <code>traffic-mirror-filter-id</code>: The ID of the Traffic Mirror
     * filter.</p> </li> </ul>
     */
    inline DescribeTrafficMirrorFiltersRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>description</code>: The Traffic Mirror filter description.</p> </li> <li>
     * <p> <code>traffic-mirror-filter-id</code>: The ID of the Traffic Mirror
     * filter.</p> </li> </ul>
     */
    inline DescribeTrafficMirrorFiltersRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>description</code>: The Traffic Mirror filter description.</p> </li> <li>
     * <p> <code>traffic-mirror-filter-id</code>: The ID of the Traffic Mirror
     * filter.</p> </li> </ul>
     */
    inline DescribeTrafficMirrorFiltersRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>description</code>: The Traffic Mirror filter description.</p> </li> <li>
     * <p> <code>traffic-mirror-filter-id</code>: The ID of the Traffic Mirror
     * filter.</p> </li> </ul>
     */
    inline DescribeTrafficMirrorFiltersRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline DescribeTrafficMirrorFiltersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeTrafficMirrorFiltersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeTrafficMirrorFiltersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeTrafficMirrorFiltersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_trafficMirrorFilterIds;
    bool m_trafficMirrorFilterIdsHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
