/**
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
  class DescribeLocalGatewayRouteTableVpcAssociationsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeLocalGatewayRouteTableVpcAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLocalGatewayRouteTableVpcAssociations"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The IDs of the associations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLocalGatewayRouteTableVpcAssociationIds() const{ return m_localGatewayRouteTableVpcAssociationIds; }
    inline bool LocalGatewayRouteTableVpcAssociationIdsHasBeenSet() const { return m_localGatewayRouteTableVpcAssociationIdsHasBeenSet; }
    inline void SetLocalGatewayRouteTableVpcAssociationIds(const Aws::Vector<Aws::String>& value) { m_localGatewayRouteTableVpcAssociationIdsHasBeenSet = true; m_localGatewayRouteTableVpcAssociationIds = value; }
    inline void SetLocalGatewayRouteTableVpcAssociationIds(Aws::Vector<Aws::String>&& value) { m_localGatewayRouteTableVpcAssociationIdsHasBeenSet = true; m_localGatewayRouteTableVpcAssociationIds = std::move(value); }
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& WithLocalGatewayRouteTableVpcAssociationIds(const Aws::Vector<Aws::String>& value) { SetLocalGatewayRouteTableVpcAssociationIds(value); return *this;}
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& WithLocalGatewayRouteTableVpcAssociationIds(Aws::Vector<Aws::String>&& value) { SetLocalGatewayRouteTableVpcAssociationIds(std::move(value)); return *this;}
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& AddLocalGatewayRouteTableVpcAssociationIds(const Aws::String& value) { m_localGatewayRouteTableVpcAssociationIdsHasBeenSet = true; m_localGatewayRouteTableVpcAssociationIds.push_back(value); return *this; }
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& AddLocalGatewayRouteTableVpcAssociationIds(Aws::String&& value) { m_localGatewayRouteTableVpcAssociationIdsHasBeenSet = true; m_localGatewayRouteTableVpcAssociationIds.push_back(std::move(value)); return *this; }
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& AddLocalGatewayRouteTableVpcAssociationIds(const char* value) { m_localGatewayRouteTableVpcAssociationIdsHasBeenSet = true; m_localGatewayRouteTableVpcAssociationIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>local-gateway-id</code> - The ID
     * of a local gateway.</p> </li> <li> <p>
     * <code>local-gateway-route-table-arn</code> - The Amazon Resource Name (ARN) of
     * the local gateway route table for the association.</p> </li> <li> <p>
     * <code>local-gateway-route-table-id</code> - The ID of the local gateway route
     * table.</p> </li> <li> <p>
     * <code>local-gateway-route-table-vpc-association-id</code> - The ID of the
     * association.</p> </li> <li> <p> <code>owner-id</code> - The ID of the Amazon Web
     * Services account that owns the local gateway route table for the
     * association.</p> </li> <li> <p> <code>state</code> - The state of the
     * association.</p> </li> <li> <p> <code>vpc-id</code> - The ID of the VPC.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
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
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeLocalGatewayRouteTableVpcAssociationsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_localGatewayRouteTableVpcAssociationIds;
    bool m_localGatewayRouteTableVpcAssociationIdsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
