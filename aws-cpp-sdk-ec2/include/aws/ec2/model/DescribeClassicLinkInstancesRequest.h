﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeClassicLinkInstances.</p>
   */
  class AWS_EC2_API DescribeClassicLinkInstancesRequest : public EC2Request
  {
  public:
    DescribeClassicLinkInstancesRequest();
    Aws::String SerializePayload() const override;

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
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeClassicLinkInstancesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>One or more instance IDs. Must be instances linked to a VPC through
     * ClassicLink.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }

    /**
     * <p>One or more instance IDs. Must be instances linked to a VPC through
     * ClassicLink.</p>
     */
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>One or more instance IDs. Must be instances linked to a VPC through
     * ClassicLink.</p>
     */
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>One or more instance IDs. Must be instances linked to a VPC through
     * ClassicLink.</p>
     */
    inline DescribeClassicLinkInstancesRequest& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>One or more instance IDs. Must be instances linked to a VPC through
     * ClassicLink.</p>
     */
    inline DescribeClassicLinkInstancesRequest& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>One or more instance IDs. Must be instances linked to a VPC through
     * ClassicLink.</p>
     */
    inline DescribeClassicLinkInstancesRequest& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>One or more instance IDs. Must be instances linked to a VPC through
     * ClassicLink.</p>
     */
    inline DescribeClassicLinkInstancesRequest& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>One or more instance IDs. Must be instances linked to a VPC through
     * ClassicLink.</p>
     */
    inline DescribeClassicLinkInstancesRequest& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li><p><code>group-id</code> - The ID of a VPC
     * security group that's associated with the instance.</p></li> <li>
     * <p><code>instance-id</code> - The ID of the instance.</p> </li> <li>
     * <p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource.</p> </li> <li> <p><code>tag-key</code> - The key of a
     * tag assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p><code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p><code>vpc-id</code> - The ID of the VPC that the
     * instance is linked to.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li><p><code>group-id</code> - The ID of a VPC
     * security group that's associated with the instance.</p></li> <li>
     * <p><code>instance-id</code> - The ID of the instance.</p> </li> <li>
     * <p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource.</p> </li> <li> <p><code>tag-key</code> - The key of a
     * tag assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p><code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p><code>vpc-id</code> - The ID of the VPC that the
     * instance is linked to.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li><p><code>group-id</code> - The ID of a VPC
     * security group that's associated with the instance.</p></li> <li>
     * <p><code>instance-id</code> - The ID of the instance.</p> </li> <li>
     * <p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource.</p> </li> <li> <p><code>tag-key</code> - The key of a
     * tag assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p><code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p><code>vpc-id</code> - The ID of the VPC that the
     * instance is linked to.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li><p><code>group-id</code> - The ID of a VPC
     * security group that's associated with the instance.</p></li> <li>
     * <p><code>instance-id</code> - The ID of the instance.</p> </li> <li>
     * <p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource.</p> </li> <li> <p><code>tag-key</code> - The key of a
     * tag assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p><code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p><code>vpc-id</code> - The ID of the VPC that the
     * instance is linked to.</p> </li> </ul>
     */
    inline DescribeClassicLinkInstancesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li><p><code>group-id</code> - The ID of a VPC
     * security group that's associated with the instance.</p></li> <li>
     * <p><code>instance-id</code> - The ID of the instance.</p> </li> <li>
     * <p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource.</p> </li> <li> <p><code>tag-key</code> - The key of a
     * tag assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p><code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p><code>vpc-id</code> - The ID of the VPC that the
     * instance is linked to.</p> </li> </ul>
     */
    inline DescribeClassicLinkInstancesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li><p><code>group-id</code> - The ID of a VPC
     * security group that's associated with the instance.</p></li> <li>
     * <p><code>instance-id</code> - The ID of the instance.</p> </li> <li>
     * <p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource.</p> </li> <li> <p><code>tag-key</code> - The key of a
     * tag assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p><code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p><code>vpc-id</code> - The ID of the VPC that the
     * instance is linked to.</p> </li> </ul>
     */
    inline DescribeClassicLinkInstancesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li><p><code>group-id</code> - The ID of a VPC
     * security group that's associated with the instance.</p></li> <li>
     * <p><code>instance-id</code> - The ID of the instance.</p> </li> <li>
     * <p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource.</p> </li> <li> <p><code>tag-key</code> - The key of a
     * tag assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p><code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p><code>vpc-id</code> - The ID of the VPC that the
     * instance is linked to.</p> </li> </ul>
     */
    inline DescribeClassicLinkInstancesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeClassicLinkInstancesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeClassicLinkInstancesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeClassicLinkInstancesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results of the initial request can be seen by sending another request
     * with the returned <code>NextToken</code> value. This value can be between 5 and
     * 1000; if <code>MaxResults</code> is given a value larger than 1000, only 1000
     * results are returned. You cannot specify this parameter and the instance IDs
     * parameter in the same request.</p> <p>Constraint: If the value is greater than
     * 1000, we return only 1000 items.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results of the initial request can be seen by sending another request
     * with the returned <code>NextToken</code> value. This value can be between 5 and
     * 1000; if <code>MaxResults</code> is given a value larger than 1000, only 1000
     * results are returned. You cannot specify this parameter and the instance IDs
     * parameter in the same request.</p> <p>Constraint: If the value is greater than
     * 1000, we return only 1000 items.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results of the initial request can be seen by sending another request
     * with the returned <code>NextToken</code> value. This value can be between 5 and
     * 1000; if <code>MaxResults</code> is given a value larger than 1000, only 1000
     * results are returned. You cannot specify this parameter and the instance IDs
     * parameter in the same request.</p> <p>Constraint: If the value is greater than
     * 1000, we return only 1000 items.</p>
     */
    inline DescribeClassicLinkInstancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet;
    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
