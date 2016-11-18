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
   * <p>Contains the parameters for DescribeVpcEndpoints.</p>
   */
  class AWS_EC2_API DescribeVpcEndpointsRequest : public EC2Request
  {
  public:
    DescribeVpcEndpointsRequest();
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
    inline DescribeVpcEndpointsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>One or more endpoint IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcEndpointIds() const{ return m_vpcEndpointIds; }

    /**
     * <p>One or more endpoint IDs.</p>
     */
    inline void SetVpcEndpointIds(const Aws::Vector<Aws::String>& value) { m_vpcEndpointIdsHasBeenSet = true; m_vpcEndpointIds = value; }

    /**
     * <p>One or more endpoint IDs.</p>
     */
    inline void SetVpcEndpointIds(Aws::Vector<Aws::String>&& value) { m_vpcEndpointIdsHasBeenSet = true; m_vpcEndpointIds = value; }

    /**
     * <p>One or more endpoint IDs.</p>
     */
    inline DescribeVpcEndpointsRequest& WithVpcEndpointIds(const Aws::Vector<Aws::String>& value) { SetVpcEndpointIds(value); return *this;}

    /**
     * <p>One or more endpoint IDs.</p>
     */
    inline DescribeVpcEndpointsRequest& WithVpcEndpointIds(Aws::Vector<Aws::String>&& value) { SetVpcEndpointIds(value); return *this;}

    /**
     * <p>One or more endpoint IDs.</p>
     */
    inline DescribeVpcEndpointsRequest& AddVpcEndpointIds(const Aws::String& value) { m_vpcEndpointIdsHasBeenSet = true; m_vpcEndpointIds.push_back(value); return *this; }

    /**
     * <p>One or more endpoint IDs.</p>
     */
    inline DescribeVpcEndpointsRequest& AddVpcEndpointIds(Aws::String&& value) { m_vpcEndpointIdsHasBeenSet = true; m_vpcEndpointIds.push_back(value); return *this; }

    /**
     * <p>One or more endpoint IDs.</p>
     */
    inline DescribeVpcEndpointsRequest& AddVpcEndpointIds(const char* value) { m_vpcEndpointIdsHasBeenSet = true; m_vpcEndpointIds.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>service-name</code>: The name of
     * the AWS service.</p> </li> <li> <p><code>vpc-id</code>: The ID of the VPC in
     * which the endpoint resides.</p> </li> <li> <p><code>vpc-endpoint-id</code>: The
     * ID of the endpoint.</p> </li> <li> <p><code>vpc-endpoint-state</code>: The state
     * of the endpoint. (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>)</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>service-name</code>: The name of
     * the AWS service.</p> </li> <li> <p><code>vpc-id</code>: The ID of the VPC in
     * which the endpoint resides.</p> </li> <li> <p><code>vpc-endpoint-id</code>: The
     * ID of the endpoint.</p> </li> <li> <p><code>vpc-endpoint-state</code>: The state
     * of the endpoint. (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>)</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>service-name</code>: The name of
     * the AWS service.</p> </li> <li> <p><code>vpc-id</code>: The ID of the VPC in
     * which the endpoint resides.</p> </li> <li> <p><code>vpc-endpoint-id</code>: The
     * ID of the endpoint.</p> </li> <li> <p><code>vpc-endpoint-state</code>: The state
     * of the endpoint. (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>)</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>service-name</code>: The name of
     * the AWS service.</p> </li> <li> <p><code>vpc-id</code>: The ID of the VPC in
     * which the endpoint resides.</p> </li> <li> <p><code>vpc-endpoint-id</code>: The
     * ID of the endpoint.</p> </li> <li> <p><code>vpc-endpoint-state</code>: The state
     * of the endpoint. (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>)</p> </li> </ul>
     */
    inline DescribeVpcEndpointsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>service-name</code>: The name of
     * the AWS service.</p> </li> <li> <p><code>vpc-id</code>: The ID of the VPC in
     * which the endpoint resides.</p> </li> <li> <p><code>vpc-endpoint-id</code>: The
     * ID of the endpoint.</p> </li> <li> <p><code>vpc-endpoint-state</code>: The state
     * of the endpoint. (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>)</p> </li> </ul>
     */
    inline DescribeVpcEndpointsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>service-name</code>: The name of
     * the AWS service.</p> </li> <li> <p><code>vpc-id</code>: The ID of the VPC in
     * which the endpoint resides.</p> </li> <li> <p><code>vpc-endpoint-id</code>: The
     * ID of the endpoint.</p> </li> <li> <p><code>vpc-endpoint-state</code>: The state
     * of the endpoint. (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>)</p> </li> </ul>
     */
    inline DescribeVpcEndpointsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>service-name</code>: The name of
     * the AWS service.</p> </li> <li> <p><code>vpc-id</code>: The ID of the VPC in
     * which the endpoint resides.</p> </li> <li> <p><code>vpc-endpoint-id</code>: The
     * ID of the endpoint.</p> </li> <li> <p><code>vpc-endpoint-state</code>: The state
     * of the endpoint. (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>)</p> </li> </ul>
     */
    inline DescribeVpcEndpointsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The maximum number of items to return for this request. The request returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p> <p>Constraint: If the value is greater than 1000, we return only
     * 1000 items.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this request. The request returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p> <p>Constraint: If the value is greater than 1000, we return only
     * 1000 items.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this request. The request returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p> <p>Constraint: If the value is greater than 1000, we return only
     * 1000 items.</p>
     */
    inline DescribeVpcEndpointsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline DescribeVpcEndpointsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline DescribeVpcEndpointsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline DescribeVpcEndpointsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::Vector<Aws::String> m_vpcEndpointIds;
    bool m_vpcEndpointIdsHasBeenSet;
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
