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
  class DescribeLocalGatewayRouteTablesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeLocalGatewayRouteTablesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLocalGatewayRouteTables"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The IDs of the local gateway route tables.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLocalGatewayRouteTableIds() const { return m_localGatewayRouteTableIds; }
    inline bool LocalGatewayRouteTableIdsHasBeenSet() const { return m_localGatewayRouteTableIdsHasBeenSet; }
    template<typename LocalGatewayRouteTableIdsT = Aws::Vector<Aws::String>>
    void SetLocalGatewayRouteTableIds(LocalGatewayRouteTableIdsT&& value) { m_localGatewayRouteTableIdsHasBeenSet = true; m_localGatewayRouteTableIds = std::forward<LocalGatewayRouteTableIdsT>(value); }
    template<typename LocalGatewayRouteTableIdsT = Aws::Vector<Aws::String>>
    DescribeLocalGatewayRouteTablesRequest& WithLocalGatewayRouteTableIds(LocalGatewayRouteTableIdsT&& value) { SetLocalGatewayRouteTableIds(std::forward<LocalGatewayRouteTableIdsT>(value)); return *this;}
    template<typename LocalGatewayRouteTableIdsT = Aws::String>
    DescribeLocalGatewayRouteTablesRequest& AddLocalGatewayRouteTableIds(LocalGatewayRouteTableIdsT&& value) { m_localGatewayRouteTableIdsHasBeenSet = true; m_localGatewayRouteTableIds.emplace_back(std::forward<LocalGatewayRouteTableIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>local-gateway-id</code> - The ID
     * of a local gateway.</p> </li> <li> <p>
     * <code>local-gateway-route-table-arn</code> - The Amazon Resource Name (ARN) of
     * the local gateway route table.</p> </li> <li> <p>
     * <code>local-gateway-route-table-id</code> - The ID of a local gateway route
     * table.</p> </li> <li> <p> <code>outpost-arn</code> - The Amazon Resource Name
     * (ARN) of the Outpost.</p> </li> <li> <p> <code>owner-id</code> - The ID of the
     * Amazon Web Services account that owns the local gateway route table.</p> </li>
     * <li> <p> <code>state</code> - The state of the local gateway route table.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeLocalGatewayRouteTablesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeLocalGatewayRouteTablesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeLocalGatewayRouteTablesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeLocalGatewayRouteTablesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeLocalGatewayRouteTablesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_localGatewayRouteTableIds;
    bool m_localGatewayRouteTableIdsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
