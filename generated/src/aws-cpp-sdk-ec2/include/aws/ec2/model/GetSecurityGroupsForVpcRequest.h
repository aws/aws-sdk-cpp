/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class GetSecurityGroupsForVpcRequest : public EC2Request
  {
  public:
    AWS_EC2_API GetSecurityGroupsForVpcRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSecurityGroupsForVpc"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The VPC ID where the security group can be used.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The VPC ID where the security group can be used.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The VPC ID where the security group can be used.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The VPC ID where the security group can be used.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The VPC ID where the security group can be used.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The VPC ID where the security group can be used.</p>
     */
    inline GetSecurityGroupsForVpcRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The VPC ID where the security group can be used.</p>
     */
    inline GetSecurityGroupsForVpcRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The VPC ID where the security group can be used.</p>
     */
    inline GetSecurityGroupsForVpcRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline GetSecurityGroupsForVpcRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline GetSecurityGroupsForVpcRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline GetSecurityGroupsForVpcRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline GetSecurityGroupsForVpcRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The filters. If using multiple filters, the results include security groups
     * which match all filters.</p> <ul> <li> <p> <code>group-id</code>: The security
     * group ID.</p> </li> <li> <p> <code>description</code>: The security group's
     * description.</p> </li> <li> <p> <code>group-name</code>: The security group
     * name.</p> </li> <li> <p> <code>owner-id</code>: The security group owner ID.</p>
     * </li> <li> <p> <code>primary-vpc-id</code>: The VPC ID in which the security
     * group was created.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters. If using multiple filters, the results include security groups
     * which match all filters.</p> <ul> <li> <p> <code>group-id</code>: The security
     * group ID.</p> </li> <li> <p> <code>description</code>: The security group's
     * description.</p> </li> <li> <p> <code>group-name</code>: The security group
     * name.</p> </li> <li> <p> <code>owner-id</code>: The security group owner ID.</p>
     * </li> <li> <p> <code>primary-vpc-id</code>: The VPC ID in which the security
     * group was created.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters. If using multiple filters, the results include security groups
     * which match all filters.</p> <ul> <li> <p> <code>group-id</code>: The security
     * group ID.</p> </li> <li> <p> <code>description</code>: The security group's
     * description.</p> </li> <li> <p> <code>group-name</code>: The security group
     * name.</p> </li> <li> <p> <code>owner-id</code>: The security group owner ID.</p>
     * </li> <li> <p> <code>primary-vpc-id</code>: The VPC ID in which the security
     * group was created.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters. If using multiple filters, the results include security groups
     * which match all filters.</p> <ul> <li> <p> <code>group-id</code>: The security
     * group ID.</p> </li> <li> <p> <code>description</code>: The security group's
     * description.</p> </li> <li> <p> <code>group-name</code>: The security group
     * name.</p> </li> <li> <p> <code>owner-id</code>: The security group owner ID.</p>
     * </li> <li> <p> <code>primary-vpc-id</code>: The VPC ID in which the security
     * group was created.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters. If using multiple filters, the results include security groups
     * which match all filters.</p> <ul> <li> <p> <code>group-id</code>: The security
     * group ID.</p> </li> <li> <p> <code>description</code>: The security group's
     * description.</p> </li> <li> <p> <code>group-name</code>: The security group
     * name.</p> </li> <li> <p> <code>owner-id</code>: The security group owner ID.</p>
     * </li> <li> <p> <code>primary-vpc-id</code>: The VPC ID in which the security
     * group was created.</p> </li> </ul>
     */
    inline GetSecurityGroupsForVpcRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters. If using multiple filters, the results include security groups
     * which match all filters.</p> <ul> <li> <p> <code>group-id</code>: The security
     * group ID.</p> </li> <li> <p> <code>description</code>: The security group's
     * description.</p> </li> <li> <p> <code>group-name</code>: The security group
     * name.</p> </li> <li> <p> <code>owner-id</code>: The security group owner ID.</p>
     * </li> <li> <p> <code>primary-vpc-id</code>: The VPC ID in which the security
     * group was created.</p> </li> </ul>
     */
    inline GetSecurityGroupsForVpcRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters. If using multiple filters, the results include security groups
     * which match all filters.</p> <ul> <li> <p> <code>group-id</code>: The security
     * group ID.</p> </li> <li> <p> <code>description</code>: The security group's
     * description.</p> </li> <li> <p> <code>group-name</code>: The security group
     * name.</p> </li> <li> <p> <code>owner-id</code>: The security group owner ID.</p>
     * </li> <li> <p> <code>primary-vpc-id</code>: The VPC ID in which the security
     * group was created.</p> </li> </ul>
     */
    inline GetSecurityGroupsForVpcRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters. If using multiple filters, the results include security groups
     * which match all filters.</p> <ul> <li> <p> <code>group-id</code>: The security
     * group ID.</p> </li> <li> <p> <code>description</code>: The security group's
     * description.</p> </li> <li> <p> <code>group-name</code>: The security group
     * name.</p> </li> <li> <p> <code>owner-id</code>: The security group owner ID.</p>
     * </li> <li> <p> <code>primary-vpc-id</code>: The VPC ID in which the security
     * group was created.</p> </li> </ul>
     */
    inline GetSecurityGroupsForVpcRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


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
    inline GetSecurityGroupsForVpcRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
