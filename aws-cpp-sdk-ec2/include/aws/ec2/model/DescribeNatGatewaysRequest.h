/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeNatGateways.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNatGatewaysRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeNatGatewaysRequest : public EC2Request
  {
  public:
    DescribeNatGatewaysRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNatGateways"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>nat-gateway-id</code> - The ID
     * of the NAT gateway.</p> </li> <li> <p> <code>state</code> - The state of the NAT
     * gateway (<code>pending</code> | <code>failed</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet in which the NAT gateway
     * resides.</p> </li> <li> <p> <code>tag</code>:<i>key</i>=<i>value</i> - The
     * key/value combination of a tag assigned to the resource. Specify the key of the
     * tag in the filter name and the value of the tag in the filter value. For
     * example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter
     * name and <code>X</code> for the filter value.</p> </li> <li> <p>
     * <code>tag-key</code> - The key of a tag assigned to the resource. This filter is
     * independent of the <code>tag-value</code> filter. For example, if you use both
     * the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources
     * assigned both the tag key Purpose (regardless of what the tag's value is), and
     * the tag value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>vpc-id</code> - The ID of the VPC in which the
     * NAT gateway resides.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilter() const{ return m_filter; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>nat-gateway-id</code> - The ID
     * of the NAT gateway.</p> </li> <li> <p> <code>state</code> - The state of the NAT
     * gateway (<code>pending</code> | <code>failed</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet in which the NAT gateway
     * resides.</p> </li> <li> <p> <code>tag</code>:<i>key</i>=<i>value</i> - The
     * key/value combination of a tag assigned to the resource. Specify the key of the
     * tag in the filter name and the value of the tag in the filter value. For
     * example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter
     * name and <code>X</code> for the filter value.</p> </li> <li> <p>
     * <code>tag-key</code> - The key of a tag assigned to the resource. This filter is
     * independent of the <code>tag-value</code> filter. For example, if you use both
     * the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources
     * assigned both the tag key Purpose (regardless of what the tag's value is), and
     * the tag value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>vpc-id</code> - The ID of the VPC in which the
     * NAT gateway resides.</p> </li> </ul>
     */
    inline void SetFilter(const Aws::Vector<Filter>& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>nat-gateway-id</code> - The ID
     * of the NAT gateway.</p> </li> <li> <p> <code>state</code> - The state of the NAT
     * gateway (<code>pending</code> | <code>failed</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet in which the NAT gateway
     * resides.</p> </li> <li> <p> <code>tag</code>:<i>key</i>=<i>value</i> - The
     * key/value combination of a tag assigned to the resource. Specify the key of the
     * tag in the filter name and the value of the tag in the filter value. For
     * example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter
     * name and <code>X</code> for the filter value.</p> </li> <li> <p>
     * <code>tag-key</code> - The key of a tag assigned to the resource. This filter is
     * independent of the <code>tag-value</code> filter. For example, if you use both
     * the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources
     * assigned both the tag key Purpose (regardless of what the tag's value is), and
     * the tag value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>vpc-id</code> - The ID of the VPC in which the
     * NAT gateway resides.</p> </li> </ul>
     */
    inline void SetFilter(Aws::Vector<Filter>&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>nat-gateway-id</code> - The ID
     * of the NAT gateway.</p> </li> <li> <p> <code>state</code> - The state of the NAT
     * gateway (<code>pending</code> | <code>failed</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet in which the NAT gateway
     * resides.</p> </li> <li> <p> <code>tag</code>:<i>key</i>=<i>value</i> - The
     * key/value combination of a tag assigned to the resource. Specify the key of the
     * tag in the filter name and the value of the tag in the filter value. For
     * example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter
     * name and <code>X</code> for the filter value.</p> </li> <li> <p>
     * <code>tag-key</code> - The key of a tag assigned to the resource. This filter is
     * independent of the <code>tag-value</code> filter. For example, if you use both
     * the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources
     * assigned both the tag key Purpose (regardless of what the tag's value is), and
     * the tag value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>vpc-id</code> - The ID of the VPC in which the
     * NAT gateway resides.</p> </li> </ul>
     */
    inline DescribeNatGatewaysRequest& WithFilter(const Aws::Vector<Filter>& value) { SetFilter(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>nat-gateway-id</code> - The ID
     * of the NAT gateway.</p> </li> <li> <p> <code>state</code> - The state of the NAT
     * gateway (<code>pending</code> | <code>failed</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet in which the NAT gateway
     * resides.</p> </li> <li> <p> <code>tag</code>:<i>key</i>=<i>value</i> - The
     * key/value combination of a tag assigned to the resource. Specify the key of the
     * tag in the filter name and the value of the tag in the filter value. For
     * example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter
     * name and <code>X</code> for the filter value.</p> </li> <li> <p>
     * <code>tag-key</code> - The key of a tag assigned to the resource. This filter is
     * independent of the <code>tag-value</code> filter. For example, if you use both
     * the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources
     * assigned both the tag key Purpose (regardless of what the tag's value is), and
     * the tag value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>vpc-id</code> - The ID of the VPC in which the
     * NAT gateway resides.</p> </li> </ul>
     */
    inline DescribeNatGatewaysRequest& WithFilter(Aws::Vector<Filter>&& value) { SetFilter(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>nat-gateway-id</code> - The ID
     * of the NAT gateway.</p> </li> <li> <p> <code>state</code> - The state of the NAT
     * gateway (<code>pending</code> | <code>failed</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet in which the NAT gateway
     * resides.</p> </li> <li> <p> <code>tag</code>:<i>key</i>=<i>value</i> - The
     * key/value combination of a tag assigned to the resource. Specify the key of the
     * tag in the filter name and the value of the tag in the filter value. For
     * example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter
     * name and <code>X</code> for the filter value.</p> </li> <li> <p>
     * <code>tag-key</code> - The key of a tag assigned to the resource. This filter is
     * independent of the <code>tag-value</code> filter. For example, if you use both
     * the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources
     * assigned both the tag key Purpose (regardless of what the tag's value is), and
     * the tag value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>vpc-id</code> - The ID of the VPC in which the
     * NAT gateway resides.</p> </li> </ul>
     */
    inline DescribeNatGatewaysRequest& AddFilter(const Filter& value) { m_filterHasBeenSet = true; m_filter.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>nat-gateway-id</code> - The ID
     * of the NAT gateway.</p> </li> <li> <p> <code>state</code> - The state of the NAT
     * gateway (<code>pending</code> | <code>failed</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet in which the NAT gateway
     * resides.</p> </li> <li> <p> <code>tag</code>:<i>key</i>=<i>value</i> - The
     * key/value combination of a tag assigned to the resource. Specify the key of the
     * tag in the filter name and the value of the tag in the filter value. For
     * example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter
     * name and <code>X</code> for the filter value.</p> </li> <li> <p>
     * <code>tag-key</code> - The key of a tag assigned to the resource. This filter is
     * independent of the <code>tag-value</code> filter. For example, if you use both
     * the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources
     * assigned both the tag key Purpose (regardless of what the tag's value is), and
     * the tag value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>vpc-id</code> - The ID of the VPC in which the
     * NAT gateway resides.</p> </li> </ul>
     */
    inline DescribeNatGatewaysRequest& AddFilter(Filter&& value) { m_filterHasBeenSet = true; m_filter.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of items to return for this request. The request returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p> <p>Constraint: If the value specified is greater than 1000, we
     * return only 1000 items.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this request. The request returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p> <p>Constraint: If the value specified is greater than 1000, we
     * return only 1000 items.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this request. The request returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p> <p>Constraint: If the value specified is greater than 1000, we
     * return only 1000 items.</p>
     */
    inline DescribeNatGatewaysRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>One or more NAT gateway IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNatGatewayIds() const{ return m_natGatewayIds; }

    /**
     * <p>One or more NAT gateway IDs.</p>
     */
    inline void SetNatGatewayIds(const Aws::Vector<Aws::String>& value) { m_natGatewayIdsHasBeenSet = true; m_natGatewayIds = value; }

    /**
     * <p>One or more NAT gateway IDs.</p>
     */
    inline void SetNatGatewayIds(Aws::Vector<Aws::String>&& value) { m_natGatewayIdsHasBeenSet = true; m_natGatewayIds = std::move(value); }

    /**
     * <p>One or more NAT gateway IDs.</p>
     */
    inline DescribeNatGatewaysRequest& WithNatGatewayIds(const Aws::Vector<Aws::String>& value) { SetNatGatewayIds(value); return *this;}

    /**
     * <p>One or more NAT gateway IDs.</p>
     */
    inline DescribeNatGatewaysRequest& WithNatGatewayIds(Aws::Vector<Aws::String>&& value) { SetNatGatewayIds(std::move(value)); return *this;}

    /**
     * <p>One or more NAT gateway IDs.</p>
     */
    inline DescribeNatGatewaysRequest& AddNatGatewayIds(const Aws::String& value) { m_natGatewayIdsHasBeenSet = true; m_natGatewayIds.push_back(value); return *this; }

    /**
     * <p>One or more NAT gateway IDs.</p>
     */
    inline DescribeNatGatewaysRequest& AddNatGatewayIds(Aws::String&& value) { m_natGatewayIdsHasBeenSet = true; m_natGatewayIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more NAT gateway IDs.</p>
     */
    inline DescribeNatGatewaysRequest& AddNatGatewayIds(const char* value) { m_natGatewayIdsHasBeenSet = true; m_natGatewayIds.push_back(value); return *this; }


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
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeNatGatewaysRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeNatGatewaysRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeNatGatewaysRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Filter> m_filter;
    bool m_filterHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::Vector<Aws::String> m_natGatewayIds;
    bool m_natGatewayIdsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
