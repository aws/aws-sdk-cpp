/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

  /*
  */
  class AWS_EC2_API DescribeTagsRequest : public EC2Request
  {
  public:
    DescribeTagsRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
    */
    inline bool GetDryRun() const{ return m_dryRun; }

    /*
     <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
    */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /*
     <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
    */
    inline DescribeTagsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /*
     <p>One or more filters.</p> <ul> <li> <p><code>key</code> - The tag key.</p> </li> <li> <p><code>resource-id</code> - The resource ID.</p> </li> <li> <p><code>resource-type</code> - The resource type (<code>customer-gateway</code> | <code>dhcp-options</code> | <code>image</code> | <code>instance</code> | <code>internet-gateway</code> | <code>network-acl</code> | <code>network-interface</code> | <code>reserved-instances</code> | <code>route-table</code> | <code>security-group</code> | <code>snapshot</code> | <code>spot-instances-request</code> | <code>subnet</code> | <code>volume</code> | <code>vpc</code> | <code>vpn-connection</code> | <code>vpn-gateway</code>).</p> </li> <li> <p><code>value</code> - The tag value.</p> </li> </ul>
    */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /*
     <p>One or more filters.</p> <ul> <li> <p><code>key</code> - The tag key.</p> </li> <li> <p><code>resource-id</code> - The resource ID.</p> </li> <li> <p><code>resource-type</code> - The resource type (<code>customer-gateway</code> | <code>dhcp-options</code> | <code>image</code> | <code>instance</code> | <code>internet-gateway</code> | <code>network-acl</code> | <code>network-interface</code> | <code>reserved-instances</code> | <code>route-table</code> | <code>security-group</code> | <code>snapshot</code> | <code>spot-instances-request</code> | <code>subnet</code> | <code>volume</code> | <code>vpc</code> | <code>vpn-connection</code> | <code>vpn-gateway</code>).</p> </li> <li> <p><code>value</code> - The tag value.</p> </li> </ul>
    */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /*
     <p>One or more filters.</p> <ul> <li> <p><code>key</code> - The tag key.</p> </li> <li> <p><code>resource-id</code> - The resource ID.</p> </li> <li> <p><code>resource-type</code> - The resource type (<code>customer-gateway</code> | <code>dhcp-options</code> | <code>image</code> | <code>instance</code> | <code>internet-gateway</code> | <code>network-acl</code> | <code>network-interface</code> | <code>reserved-instances</code> | <code>route-table</code> | <code>security-group</code> | <code>snapshot</code> | <code>spot-instances-request</code> | <code>subnet</code> | <code>volume</code> | <code>vpc</code> | <code>vpn-connection</code> | <code>vpn-gateway</code>).</p> </li> <li> <p><code>value</code> - The tag value.</p> </li> </ul>
    */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /*
     <p>One or more filters.</p> <ul> <li> <p><code>key</code> - The tag key.</p> </li> <li> <p><code>resource-id</code> - The resource ID.</p> </li> <li> <p><code>resource-type</code> - The resource type (<code>customer-gateway</code> | <code>dhcp-options</code> | <code>image</code> | <code>instance</code> | <code>internet-gateway</code> | <code>network-acl</code> | <code>network-interface</code> | <code>reserved-instances</code> | <code>route-table</code> | <code>security-group</code> | <code>snapshot</code> | <code>spot-instances-request</code> | <code>subnet</code> | <code>volume</code> | <code>vpc</code> | <code>vpn-connection</code> | <code>vpn-gateway</code>).</p> </li> <li> <p><code>value</code> - The tag value.</p> </li> </ul>
    */
    inline DescribeTagsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /*
     <p>One or more filters.</p> <ul> <li> <p><code>key</code> - The tag key.</p> </li> <li> <p><code>resource-id</code> - The resource ID.</p> </li> <li> <p><code>resource-type</code> - The resource type (<code>customer-gateway</code> | <code>dhcp-options</code> | <code>image</code> | <code>instance</code> | <code>internet-gateway</code> | <code>network-acl</code> | <code>network-interface</code> | <code>reserved-instances</code> | <code>route-table</code> | <code>security-group</code> | <code>snapshot</code> | <code>spot-instances-request</code> | <code>subnet</code> | <code>volume</code> | <code>vpc</code> | <code>vpn-connection</code> | <code>vpn-gateway</code>).</p> </li> <li> <p><code>value</code> - The tag value.</p> </li> </ul>
    */
    inline DescribeTagsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(value); return *this;}

    /*
     <p>One or more filters.</p> <ul> <li> <p><code>key</code> - The tag key.</p> </li> <li> <p><code>resource-id</code> - The resource ID.</p> </li> <li> <p><code>resource-type</code> - The resource type (<code>customer-gateway</code> | <code>dhcp-options</code> | <code>image</code> | <code>instance</code> | <code>internet-gateway</code> | <code>network-acl</code> | <code>network-interface</code> | <code>reserved-instances</code> | <code>route-table</code> | <code>security-group</code> | <code>snapshot</code> | <code>spot-instances-request</code> | <code>subnet</code> | <code>volume</code> | <code>vpc</code> | <code>vpn-connection</code> | <code>vpn-gateway</code>).</p> </li> <li> <p><code>value</code> - The tag value.</p> </li> </ul>
    */
    inline DescribeTagsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /*
     <p>One or more filters.</p> <ul> <li> <p><code>key</code> - The tag key.</p> </li> <li> <p><code>resource-id</code> - The resource ID.</p> </li> <li> <p><code>resource-type</code> - The resource type (<code>customer-gateway</code> | <code>dhcp-options</code> | <code>image</code> | <code>instance</code> | <code>internet-gateway</code> | <code>network-acl</code> | <code>network-interface</code> | <code>reserved-instances</code> | <code>route-table</code> | <code>security-group</code> | <code>snapshot</code> | <code>spot-instances-request</code> | <code>subnet</code> | <code>volume</code> | <code>vpc</code> | <code>vpn-connection</code> | <code>vpn-gateway</code>).</p> </li> <li> <p><code>value</code> - The tag value.</p> </li> </ul>
    */
    inline DescribeTagsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /*
     <p>The maximum number of results to return for the request in a single page. The remaining results of the initial request can be seen by sending another request with the returned <code>NextToken</code> value. This value can be between 5 and 1000; if <code>MaxResults</code> is given a value larger than 1000, only 1000 results are returned. </p>
    */
    inline long GetMaxResults() const{ return m_maxResults; }

    /*
     <p>The maximum number of results to return for the request in a single page. The remaining results of the initial request can be seen by sending another request with the returned <code>NextToken</code> value. This value can be between 5 and 1000; if <code>MaxResults</code> is given a value larger than 1000, only 1000 results are returned. </p>
    */
    inline void SetMaxResults(long value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /*
     <p>The maximum number of results to return for the request in a single page. The remaining results of the initial request can be seen by sending another request with the returned <code>NextToken</code> value. This value can be between 5 and 1000; if <code>MaxResults</code> is given a value larger than 1000, only 1000 results are returned. </p>
    */
    inline DescribeTagsRequest& WithMaxResults(long value) { SetMaxResults(value); return *this;}

    /*
     <p>The token to retrieve the next page of results.</p>
    */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /*
     <p>The token to retrieve the next page of results.</p>
    */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /*
     <p>The token to retrieve the next page of results.</p>
    */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /*
     <p>The token to retrieve the next page of results.</p>
    */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /*
     <p>The token to retrieve the next page of results.</p>
    */
    inline DescribeTagsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /*
     <p>The token to retrieve the next page of results.</p>
    */
    inline DescribeTagsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /*
     <p>The token to retrieve the next page of results.</p>
    */
    inline DescribeTagsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;
    long m_maxResults;
    bool m_maxResultsHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
