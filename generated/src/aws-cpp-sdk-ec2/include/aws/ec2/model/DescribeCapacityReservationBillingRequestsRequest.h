/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/CallerRole.h>
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
  class DescribeCapacityReservationBillingRequestsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeCapacityReservationBillingRequestsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCapacityReservationBillingRequests"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapacityReservationIds() const { return m_capacityReservationIds; }
    inline bool CapacityReservationIdsHasBeenSet() const { return m_capacityReservationIdsHasBeenSet; }
    template<typename CapacityReservationIdsT = Aws::Vector<Aws::String>>
    void SetCapacityReservationIds(CapacityReservationIdsT&& value) { m_capacityReservationIdsHasBeenSet = true; m_capacityReservationIds = std::forward<CapacityReservationIdsT>(value); }
    template<typename CapacityReservationIdsT = Aws::Vector<Aws::String>>
    DescribeCapacityReservationBillingRequestsRequest& WithCapacityReservationIds(CapacityReservationIdsT&& value) { SetCapacityReservationIds(std::forward<CapacityReservationIdsT>(value)); return *this;}
    template<typename CapacityReservationIdsT = Aws::String>
    DescribeCapacityReservationBillingRequestsRequest& AddCapacityReservationIds(CapacityReservationIdsT&& value) { m_capacityReservationIdsHasBeenSet = true; m_capacityReservationIds.emplace_back(std::forward<CapacityReservationIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify one of the following:</p> <ul> <li> <p> <code>odcr-owner</code> - If
     * you are the Capacity Reservation owner, specify this value to view requests that
     * you have initiated. Not supported with the <code>requested-by</code> filter.</p>
     * </li> <li> <p> <code>unused-reservation-billing-owner</code> - If you are the
     * consumer account, specify this value to view requests that have been sent to
     * you. Not supported with the <code>unused-reservation-billing-owner</code>
     * filter.</p> </li> </ul>
     */
    inline CallerRole GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(CallerRole value) { m_roleHasBeenSet = true; m_role = value; }
    inline DescribeCapacityReservationBillingRequestsRequest& WithRole(CallerRole value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeCapacityReservationBillingRequestsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeCapacityReservationBillingRequestsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>status</code> - The state of the
     * request (<code>pending</code> | <code>accepted</code> | <code>rejected</code> |
     * <code>cancelled</code> | <code>revoked</code> | <code>expired</code>).</p> </li>
     * <li> <p> <code>requested-by</code> - The account ID of the Capacity Reservation
     * owner that initiated the request. Not supported if you specify
     * <code>requested-by</code> for <b>Role</b>.</p> </li> <li> <p>
     * <code>unused-reservation-billing-owner</code> - The ID of the consumer account
     * to which the request was sent. Not supported if you specify
     * <code>unused-reservation-billing-owner</code> for <b>Role</b>.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeCapacityReservationBillingRequestsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeCapacityReservationBillingRequestsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
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
    inline DescribeCapacityReservationBillingRequestsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_capacityReservationIds;
    bool m_capacityReservationIdsHasBeenSet = false;

    CallerRole m_role{CallerRole::NOT_SET};
    bool m_roleHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
