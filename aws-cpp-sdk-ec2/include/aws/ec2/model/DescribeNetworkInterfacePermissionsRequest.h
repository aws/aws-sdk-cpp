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
   * <p>Contains the parameters for
   * DescribeNetworkInterfacePermissions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInterfacePermissionsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeNetworkInterfacePermissionsRequest : public EC2Request
  {
  public:
    DescribeNetworkInterfacePermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNetworkInterfacePermissions"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>One or more network interface permission IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInterfacePermissionIds() const{ return m_networkInterfacePermissionIds; }

    /**
     * <p>One or more network interface permission IDs.</p>
     */
    inline bool NetworkInterfacePermissionIdsHasBeenSet() const { return m_networkInterfacePermissionIdsHasBeenSet; }

    /**
     * <p>One or more network interface permission IDs.</p>
     */
    inline void SetNetworkInterfacePermissionIds(const Aws::Vector<Aws::String>& value) { m_networkInterfacePermissionIdsHasBeenSet = true; m_networkInterfacePermissionIds = value; }

    /**
     * <p>One or more network interface permission IDs.</p>
     */
    inline void SetNetworkInterfacePermissionIds(Aws::Vector<Aws::String>&& value) { m_networkInterfacePermissionIdsHasBeenSet = true; m_networkInterfacePermissionIds = std::move(value); }

    /**
     * <p>One or more network interface permission IDs.</p>
     */
    inline DescribeNetworkInterfacePermissionsRequest& WithNetworkInterfacePermissionIds(const Aws::Vector<Aws::String>& value) { SetNetworkInterfacePermissionIds(value); return *this;}

    /**
     * <p>One or more network interface permission IDs.</p>
     */
    inline DescribeNetworkInterfacePermissionsRequest& WithNetworkInterfacePermissionIds(Aws::Vector<Aws::String>&& value) { SetNetworkInterfacePermissionIds(std::move(value)); return *this;}

    /**
     * <p>One or more network interface permission IDs.</p>
     */
    inline DescribeNetworkInterfacePermissionsRequest& AddNetworkInterfacePermissionIds(const Aws::String& value) { m_networkInterfacePermissionIdsHasBeenSet = true; m_networkInterfacePermissionIds.push_back(value); return *this; }

    /**
     * <p>One or more network interface permission IDs.</p>
     */
    inline DescribeNetworkInterfacePermissionsRequest& AddNetworkInterfacePermissionIds(Aws::String&& value) { m_networkInterfacePermissionIdsHasBeenSet = true; m_networkInterfacePermissionIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more network interface permission IDs.</p>
     */
    inline DescribeNetworkInterfacePermissionsRequest& AddNetworkInterfacePermissionIds(const char* value) { m_networkInterfacePermissionIdsHasBeenSet = true; m_networkInterfacePermissionIds.push_back(value); return *this; }


    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>network-interface-permission.network-interface-permission-id</code> - The
     * ID of the permission.</p> </li> <li> <p>
     * <code>network-interface-permission.network-interface-id</code> - The ID of the
     * network interface.</p> </li> <li> <p>
     * <code>network-interface-permission.aws-account-id</code> - The AWS account
     * ID.</p> </li> <li> <p> <code>network-interface-permission.aws-service</code> -
     * The AWS service.</p> </li> <li> <p>
     * <code>network-interface-permission.permission</code> - The type of permission
     * (<code>INSTANCE-ATTACH</code> | <code>EIP-ASSOCIATE</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>network-interface-permission.network-interface-permission-id</code> - The
     * ID of the permission.</p> </li> <li> <p>
     * <code>network-interface-permission.network-interface-id</code> - The ID of the
     * network interface.</p> </li> <li> <p>
     * <code>network-interface-permission.aws-account-id</code> - The AWS account
     * ID.</p> </li> <li> <p> <code>network-interface-permission.aws-service</code> -
     * The AWS service.</p> </li> <li> <p>
     * <code>network-interface-permission.permission</code> - The type of permission
     * (<code>INSTANCE-ATTACH</code> | <code>EIP-ASSOCIATE</code>).</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>network-interface-permission.network-interface-permission-id</code> - The
     * ID of the permission.</p> </li> <li> <p>
     * <code>network-interface-permission.network-interface-id</code> - The ID of the
     * network interface.</p> </li> <li> <p>
     * <code>network-interface-permission.aws-account-id</code> - The AWS account
     * ID.</p> </li> <li> <p> <code>network-interface-permission.aws-service</code> -
     * The AWS service.</p> </li> <li> <p>
     * <code>network-interface-permission.permission</code> - The type of permission
     * (<code>INSTANCE-ATTACH</code> | <code>EIP-ASSOCIATE</code>).</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>network-interface-permission.network-interface-permission-id</code> - The
     * ID of the permission.</p> </li> <li> <p>
     * <code>network-interface-permission.network-interface-id</code> - The ID of the
     * network interface.</p> </li> <li> <p>
     * <code>network-interface-permission.aws-account-id</code> - The AWS account
     * ID.</p> </li> <li> <p> <code>network-interface-permission.aws-service</code> -
     * The AWS service.</p> </li> <li> <p>
     * <code>network-interface-permission.permission</code> - The type of permission
     * (<code>INSTANCE-ATTACH</code> | <code>EIP-ASSOCIATE</code>).</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>network-interface-permission.network-interface-permission-id</code> - The
     * ID of the permission.</p> </li> <li> <p>
     * <code>network-interface-permission.network-interface-id</code> - The ID of the
     * network interface.</p> </li> <li> <p>
     * <code>network-interface-permission.aws-account-id</code> - The AWS account
     * ID.</p> </li> <li> <p> <code>network-interface-permission.aws-service</code> -
     * The AWS service.</p> </li> <li> <p>
     * <code>network-interface-permission.permission</code> - The type of permission
     * (<code>INSTANCE-ATTACH</code> | <code>EIP-ASSOCIATE</code>).</p> </li> </ul>
     */
    inline DescribeNetworkInterfacePermissionsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>network-interface-permission.network-interface-permission-id</code> - The
     * ID of the permission.</p> </li> <li> <p>
     * <code>network-interface-permission.network-interface-id</code> - The ID of the
     * network interface.</p> </li> <li> <p>
     * <code>network-interface-permission.aws-account-id</code> - The AWS account
     * ID.</p> </li> <li> <p> <code>network-interface-permission.aws-service</code> -
     * The AWS service.</p> </li> <li> <p>
     * <code>network-interface-permission.permission</code> - The type of permission
     * (<code>INSTANCE-ATTACH</code> | <code>EIP-ASSOCIATE</code>).</p> </li> </ul>
     */
    inline DescribeNetworkInterfacePermissionsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>network-interface-permission.network-interface-permission-id</code> - The
     * ID of the permission.</p> </li> <li> <p>
     * <code>network-interface-permission.network-interface-id</code> - The ID of the
     * network interface.</p> </li> <li> <p>
     * <code>network-interface-permission.aws-account-id</code> - The AWS account
     * ID.</p> </li> <li> <p> <code>network-interface-permission.aws-service</code> -
     * The AWS service.</p> </li> <li> <p>
     * <code>network-interface-permission.permission</code> - The type of permission
     * (<code>INSTANCE-ATTACH</code> | <code>EIP-ASSOCIATE</code>).</p> </li> </ul>
     */
    inline DescribeNetworkInterfacePermissionsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>network-interface-permission.network-interface-permission-id</code> - The
     * ID of the permission.</p> </li> <li> <p>
     * <code>network-interface-permission.network-interface-id</code> - The ID of the
     * network interface.</p> </li> <li> <p>
     * <code>network-interface-permission.aws-account-id</code> - The AWS account
     * ID.</p> </li> <li> <p> <code>network-interface-permission.aws-service</code> -
     * The AWS service.</p> </li> <li> <p>
     * <code>network-interface-permission.permission</code> - The type of permission
     * (<code>INSTANCE-ATTACH</code> | <code>EIP-ASSOCIATE</code>).</p> </li> </ul>
     */
    inline DescribeNetworkInterfacePermissionsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeNetworkInterfacePermissionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeNetworkInterfacePermissionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeNetworkInterfacePermissionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. If this parameter is not specified, up to 50 results are returned by
     * default.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. If this parameter is not specified, up to 50 results are returned by
     * default.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. If this parameter is not specified, up to 50 results are returned by
     * default.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. If this parameter is not specified, up to 50 results are returned by
     * default.</p>
     */
    inline DescribeNetworkInterfacePermissionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_networkInterfacePermissionIds;
    bool m_networkInterfacePermissionIdsHasBeenSet;

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
