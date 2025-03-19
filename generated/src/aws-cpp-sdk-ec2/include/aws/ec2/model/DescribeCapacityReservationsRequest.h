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
  class DescribeCapacityReservationsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeCapacityReservationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCapacityReservations"; }

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
    DescribeCapacityReservationsRequest& WithCapacityReservationIds(CapacityReservationIdsT&& value) { SetCapacityReservationIds(std::forward<CapacityReservationIdsT>(value)); return *this;}
    template<typename CapacityReservationIdsT = Aws::String>
    DescribeCapacityReservationsRequest& AddCapacityReservationIds(CapacityReservationIdsT&& value) { m_capacityReservationIdsHasBeenSet = true; m_capacityReservationIds.emplace_back(std::forward<CapacityReservationIdsT>(value)); return *this; }
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
    DescribeCapacityReservationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
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
    inline DescribeCapacityReservationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>instance-type</code> - The type
     * of instance for which the Capacity Reservation reserves capacity.</p> </li> <li>
     * <p> <code>owner-id</code> - The ID of the Amazon Web Services account that owns
     * the Capacity Reservation.</p> </li> <li> <p> <code>instance-platform</code> -
     * The type of operating system for which the Capacity Reservation reserves
     * capacity.</p> </li> <li> <p> <code>availability-zone</code> - The Availability
     * Zone of the Capacity Reservation.</p> </li> <li> <p> <code>tenancy</code> -
     * Indicates the tenancy of the Capacity Reservation. A Capacity Reservation can
     * have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation is created on hardware that is
     * shared with other Amazon Web Services accounts.</p> </li> <li> <p>
     * <code>dedicated</code> - The Capacity Reservation is created on single-tenant
     * hardware that is dedicated to a single Amazon Web Services account.</p> </li>
     * </ul> </li> <li> <p> <code>outpost-arn</code> - The Amazon Resource Name (ARN)
     * of the Outpost on which the Capacity Reservation was created.</p> </li> <li> <p>
     * <code>state</code> - The current state of the Capacity Reservation. A Capacity
     * Reservation can be in one of the following states:</p> <ul> <li> <p>
     * <code>active</code>- The Capacity Reservation is active and the capacity is
     * available for your use.</p> </li> <li> <p> <code>expired</code> - The Capacity
     * Reservation expired automatically at the date and time specified in your
     * request. The reserved capacity is no longer available for your use.</p> </li>
     * <li> <p> <code>cancelled</code> - The Capacity Reservation was cancelled. The
     * reserved capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>pending</code> - The Capacity Reservation request was successful but the
     * capacity provisioning is still pending.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation request has failed. A request might fail due to invalid
     * request parameters, capacity constraints, or instance limit constraints. Failed
     * requests are retained for 60 minutes.</p> </li> </ul> </li> <li> <p>
     * <code>start-date</code> - The date and time at which the Capacity Reservation
     * was started.</p> </li> <li> <p> <code>end-date</code> - The date and time at
     * which the Capacity Reservation expires. When a Capacity Reservation expires, the
     * reserved capacity is released and you can no longer launch instances into it.
     * The Capacity Reservation's state changes to expired when it reaches its end date
     * and time.</p> </li> <li> <p> <code>end-date-type</code> - Indicates the way in
     * which the Capacity Reservation ends. A Capacity Reservation can have one of the
     * following end types:</p> <ul> <li> <p> <code>unlimited</code> - The Capacity
     * Reservation remains active until you explicitly cancel it.</p> </li> <li> <p>
     * <code>limited</code> - The Capacity Reservation expires automatically at a
     * specified date and time.</p> </li> </ul> </li> <li> <p>
     * <code>instance-match-criteria</code> - Indicates the type of instance launches
     * that the Capacity Reservation accepts. The options include:</p> <ul> <li> <p>
     * <code>open</code> - The Capacity Reservation accepts all instances that have
     * matching attributes (instance type, platform, and Availability Zone). Instances
     * that have matching attributes launch into the Capacity Reservation automatically
     * without specifying any additional parameters.</p> </li> <li> <p>
     * <code>targeted</code> - The Capacity Reservation only accepts instances that
     * have matching attributes (instance type, platform, and Availability Zone), and
     * explicitly target the Capacity Reservation. This ensures that only permitted
     * instances can use the reserved capacity.</p> </li> </ul> </li> <li> <p>
     * <code>placement-group-arn</code> - The ARN of the cluster placement group in
     * which the Capacity Reservation was created.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeCapacityReservationsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeCapacityReservationsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
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
    inline DescribeCapacityReservationsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_capacityReservationIds;
    bool m_capacityReservationIdsHasBeenSet = false;

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
