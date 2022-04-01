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
  class AWS_EC2_API DescribeVpcEndpointServiceConfigurationsRequest : public EC2Request
  {
  public:
    DescribeVpcEndpointServiceConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVpcEndpointServiceConfigurations"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline DescribeVpcEndpointServiceConfigurationsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The IDs of one or more services.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceIds() const{ return m_serviceIds; }

    /**
     * <p>The IDs of one or more services.</p>
     */
    inline bool ServiceIdsHasBeenSet() const { return m_serviceIdsHasBeenSet; }

    /**
     * <p>The IDs of one or more services.</p>
     */
    inline void SetServiceIds(const Aws::Vector<Aws::String>& value) { m_serviceIdsHasBeenSet = true; m_serviceIds = value; }

    /**
     * <p>The IDs of one or more services.</p>
     */
    inline void SetServiceIds(Aws::Vector<Aws::String>&& value) { m_serviceIdsHasBeenSet = true; m_serviceIds = std::move(value); }

    /**
     * <p>The IDs of one or more services.</p>
     */
    inline DescribeVpcEndpointServiceConfigurationsRequest& WithServiceIds(const Aws::Vector<Aws::String>& value) { SetServiceIds(value); return *this;}

    /**
     * <p>The IDs of one or more services.</p>
     */
    inline DescribeVpcEndpointServiceConfigurationsRequest& WithServiceIds(Aws::Vector<Aws::String>&& value) { SetServiceIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of one or more services.</p>
     */
    inline DescribeVpcEndpointServiceConfigurationsRequest& AddServiceIds(const Aws::String& value) { m_serviceIdsHasBeenSet = true; m_serviceIds.push_back(value); return *this; }

    /**
     * <p>The IDs of one or more services.</p>
     */
    inline DescribeVpcEndpointServiceConfigurationsRequest& AddServiceIds(Aws::String&& value) { m_serviceIdsHasBeenSet = true; m_serviceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of one or more services.</p>
     */
    inline DescribeVpcEndpointServiceConfigurationsRequest& AddServiceIds(const char* value) { m_serviceIdsHasBeenSet = true; m_serviceIds.push_back(value); return *this; }


    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>service-name</code> - The name
     * of the service.</p> </li> <li> <p> <code>service-id</code> - The ID of the
     * service.</p> </li> <li> <p> <code>service-state</code> - The state of the
     * service (<code>Pending</code> | <code>Available</code> | <code>Deleting</code> |
     * <code>Deleted</code> | <code>Failed</code>). </p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>service-name</code> - The name
     * of the service.</p> </li> <li> <p> <code>service-id</code> - The ID of the
     * service.</p> </li> <li> <p> <code>service-state</code> - The state of the
     * service (<code>Pending</code> | <code>Available</code> | <code>Deleting</code> |
     * <code>Deleted</code> | <code>Failed</code>). </p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>service-name</code> - The name
     * of the service.</p> </li> <li> <p> <code>service-id</code> - The ID of the
     * service.</p> </li> <li> <p> <code>service-state</code> - The state of the
     * service (<code>Pending</code> | <code>Available</code> | <code>Deleting</code> |
     * <code>Deleted</code> | <code>Failed</code>). </p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>service-name</code> - The name
     * of the service.</p> </li> <li> <p> <code>service-id</code> - The ID of the
     * service.</p> </li> <li> <p> <code>service-state</code> - The state of the
     * service (<code>Pending</code> | <code>Available</code> | <code>Deleting</code> |
     * <code>Deleted</code> | <code>Failed</code>). </p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>service-name</code> - The name
     * of the service.</p> </li> <li> <p> <code>service-id</code> - The ID of the
     * service.</p> </li> <li> <p> <code>service-state</code> - The state of the
     * service (<code>Pending</code> | <code>Available</code> | <code>Deleting</code> |
     * <code>Deleted</code> | <code>Failed</code>). </p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline DescribeVpcEndpointServiceConfigurationsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>service-name</code> - The name
     * of the service.</p> </li> <li> <p> <code>service-id</code> - The ID of the
     * service.</p> </li> <li> <p> <code>service-state</code> - The state of the
     * service (<code>Pending</code> | <code>Available</code> | <code>Deleting</code> |
     * <code>Deleted</code> | <code>Failed</code>). </p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline DescribeVpcEndpointServiceConfigurationsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>service-name</code> - The name
     * of the service.</p> </li> <li> <p> <code>service-id</code> - The ID of the
     * service.</p> </li> <li> <p> <code>service-state</code> - The state of the
     * service (<code>Pending</code> | <code>Available</code> | <code>Deleting</code> |
     * <code>Deleted</code> | <code>Failed</code>). </p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline DescribeVpcEndpointServiceConfigurationsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>service-name</code> - The name
     * of the service.</p> </li> <li> <p> <code>service-id</code> - The ID of the
     * service.</p> </li> <li> <p> <code>service-state</code> - The state of the
     * service (<code>Pending</code> | <code>Available</code> | <code>Deleting</code> |
     * <code>Deleted</code> | <code>Failed</code>). </p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline DescribeVpcEndpointServiceConfigurationsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results of the initial request can be seen by sending another request
     * with the returned <code>NextToken</code> value. This value can be between 5 and
     * 1,000; if <code>MaxResults</code> is given a value larger than 1,000, only 1,000
     * results are returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results of the initial request can be seen by sending another request
     * with the returned <code>NextToken</code> value. This value can be between 5 and
     * 1,000; if <code>MaxResults</code> is given a value larger than 1,000, only 1,000
     * results are returned.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results of the initial request can be seen by sending another request
     * with the returned <code>NextToken</code> value. This value can be between 5 and
     * 1,000; if <code>MaxResults</code> is given a value larger than 1,000, only 1,000
     * results are returned.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results of the initial request can be seen by sending another request
     * with the returned <code>NextToken</code> value. This value can be between 5 and
     * 1,000; if <code>MaxResults</code> is given a value larger than 1,000, only 1,000
     * results are returned.</p>
     */
    inline DescribeVpcEndpointServiceConfigurationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeVpcEndpointServiceConfigurationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeVpcEndpointServiceConfigurationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeVpcEndpointServiceConfigurationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::Vector<Aws::String> m_serviceIds;
    bool m_serviceIdsHasBeenSet;

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
