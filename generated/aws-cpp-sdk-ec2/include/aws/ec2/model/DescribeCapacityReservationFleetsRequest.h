﻿/**
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
  class AWS_EC2_API DescribeCapacityReservationFleetsRequest : public EC2Request
  {
  public:
    DescribeCapacityReservationFleetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCapacityReservationFleets"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The IDs of the Capacity Reservation Fleets to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapacityReservationFleetIds() const{ return m_capacityReservationFleetIds; }

    /**
     * <p>The IDs of the Capacity Reservation Fleets to describe.</p>
     */
    inline bool CapacityReservationFleetIdsHasBeenSet() const { return m_capacityReservationFleetIdsHasBeenSet; }

    /**
     * <p>The IDs of the Capacity Reservation Fleets to describe.</p>
     */
    inline void SetCapacityReservationFleetIds(const Aws::Vector<Aws::String>& value) { m_capacityReservationFleetIdsHasBeenSet = true; m_capacityReservationFleetIds = value; }

    /**
     * <p>The IDs of the Capacity Reservation Fleets to describe.</p>
     */
    inline void SetCapacityReservationFleetIds(Aws::Vector<Aws::String>&& value) { m_capacityReservationFleetIdsHasBeenSet = true; m_capacityReservationFleetIds = std::move(value); }

    /**
     * <p>The IDs of the Capacity Reservation Fleets to describe.</p>
     */
    inline DescribeCapacityReservationFleetsRequest& WithCapacityReservationFleetIds(const Aws::Vector<Aws::String>& value) { SetCapacityReservationFleetIds(value); return *this;}

    /**
     * <p>The IDs of the Capacity Reservation Fleets to describe.</p>
     */
    inline DescribeCapacityReservationFleetsRequest& WithCapacityReservationFleetIds(Aws::Vector<Aws::String>&& value) { SetCapacityReservationFleetIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Capacity Reservation Fleets to describe.</p>
     */
    inline DescribeCapacityReservationFleetsRequest& AddCapacityReservationFleetIds(const Aws::String& value) { m_capacityReservationFleetIdsHasBeenSet = true; m_capacityReservationFleetIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the Capacity Reservation Fleets to describe.</p>
     */
    inline DescribeCapacityReservationFleetsRequest& AddCapacityReservationFleetIds(Aws::String&& value) { m_capacityReservationFleetIdsHasBeenSet = true; m_capacityReservationFleetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Capacity Reservation Fleets to describe.</p>
     */
    inline DescribeCapacityReservationFleetsRequest& AddCapacityReservationFleetIds(const char* value) { m_capacityReservationFleetIdsHasBeenSet = true; m_capacityReservationFleetIds.push_back(value); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline DescribeCapacityReservationFleetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline DescribeCapacityReservationFleetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline DescribeCapacityReservationFleetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the returned
     * <code>nextToken</code> value. This value can be between 5 and 500. If
     * <code>maxResults</code> is given a larger value than 500, you receive an
     * error.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the returned
     * <code>nextToken</code> value. This value can be between 5 and 500. If
     * <code>maxResults</code> is given a larger value than 500, you receive an
     * error.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the returned
     * <code>nextToken</code> value. This value can be between 5 and 500. If
     * <code>maxResults</code> is given a larger value than 500, you receive an
     * error.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the returned
     * <code>nextToken</code> value. This value can be between 5 and 500. If
     * <code>maxResults</code> is given a larger value than 500, you receive an
     * error.</p>
     */
    inline DescribeCapacityReservationFleetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>state</code> - The state of the
     * Fleet (<code>submitted</code> | <code>modifying</code> | <code>active</code> |
     * <code>partially_fulfilled</code> | <code>expiring</code> | <code>expired</code>
     * | <code>cancelling</code> | <code>cancelled</code> | <code>failed</code>).</p>
     * </li> <li> <p> <code>instance-match-criteria</code> - The instance matching
     * criteria for the Fleet. Only <code>open</code> is supported.</p> </li> <li> <p>
     * <code>tenancy</code> - The tenancy of the Fleet (<code>default</code> |
     * <code>dedicated</code>).</p> </li> <li> <p> <code>allocation-strategy</code> -
     * The allocation strategy used by the Fleet. Only <code>prioritized</code> is
     * supported.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>state</code> - The state of the
     * Fleet (<code>submitted</code> | <code>modifying</code> | <code>active</code> |
     * <code>partially_fulfilled</code> | <code>expiring</code> | <code>expired</code>
     * | <code>cancelling</code> | <code>cancelled</code> | <code>failed</code>).</p>
     * </li> <li> <p> <code>instance-match-criteria</code> - The instance matching
     * criteria for the Fleet. Only <code>open</code> is supported.</p> </li> <li> <p>
     * <code>tenancy</code> - The tenancy of the Fleet (<code>default</code> |
     * <code>dedicated</code>).</p> </li> <li> <p> <code>allocation-strategy</code> -
     * The allocation strategy used by the Fleet. Only <code>prioritized</code> is
     * supported.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>state</code> - The state of the
     * Fleet (<code>submitted</code> | <code>modifying</code> | <code>active</code> |
     * <code>partially_fulfilled</code> | <code>expiring</code> | <code>expired</code>
     * | <code>cancelling</code> | <code>cancelled</code> | <code>failed</code>).</p>
     * </li> <li> <p> <code>instance-match-criteria</code> - The instance matching
     * criteria for the Fleet. Only <code>open</code> is supported.</p> </li> <li> <p>
     * <code>tenancy</code> - The tenancy of the Fleet (<code>default</code> |
     * <code>dedicated</code>).</p> </li> <li> <p> <code>allocation-strategy</code> -
     * The allocation strategy used by the Fleet. Only <code>prioritized</code> is
     * supported.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>state</code> - The state of the
     * Fleet (<code>submitted</code> | <code>modifying</code> | <code>active</code> |
     * <code>partially_fulfilled</code> | <code>expiring</code> | <code>expired</code>
     * | <code>cancelling</code> | <code>cancelled</code> | <code>failed</code>).</p>
     * </li> <li> <p> <code>instance-match-criteria</code> - The instance matching
     * criteria for the Fleet. Only <code>open</code> is supported.</p> </li> <li> <p>
     * <code>tenancy</code> - The tenancy of the Fleet (<code>default</code> |
     * <code>dedicated</code>).</p> </li> <li> <p> <code>allocation-strategy</code> -
     * The allocation strategy used by the Fleet. Only <code>prioritized</code> is
     * supported.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>state</code> - The state of the
     * Fleet (<code>submitted</code> | <code>modifying</code> | <code>active</code> |
     * <code>partially_fulfilled</code> | <code>expiring</code> | <code>expired</code>
     * | <code>cancelling</code> | <code>cancelled</code> | <code>failed</code>).</p>
     * </li> <li> <p> <code>instance-match-criteria</code> - The instance matching
     * criteria for the Fleet. Only <code>open</code> is supported.</p> </li> <li> <p>
     * <code>tenancy</code> - The tenancy of the Fleet (<code>default</code> |
     * <code>dedicated</code>).</p> </li> <li> <p> <code>allocation-strategy</code> -
     * The allocation strategy used by the Fleet. Only <code>prioritized</code> is
     * supported.</p> </li> </ul>
     */
    inline DescribeCapacityReservationFleetsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>state</code> - The state of the
     * Fleet (<code>submitted</code> | <code>modifying</code> | <code>active</code> |
     * <code>partially_fulfilled</code> | <code>expiring</code> | <code>expired</code>
     * | <code>cancelling</code> | <code>cancelled</code> | <code>failed</code>).</p>
     * </li> <li> <p> <code>instance-match-criteria</code> - The instance matching
     * criteria for the Fleet. Only <code>open</code> is supported.</p> </li> <li> <p>
     * <code>tenancy</code> - The tenancy of the Fleet (<code>default</code> |
     * <code>dedicated</code>).</p> </li> <li> <p> <code>allocation-strategy</code> -
     * The allocation strategy used by the Fleet. Only <code>prioritized</code> is
     * supported.</p> </li> </ul>
     */
    inline DescribeCapacityReservationFleetsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>state</code> - The state of the
     * Fleet (<code>submitted</code> | <code>modifying</code> | <code>active</code> |
     * <code>partially_fulfilled</code> | <code>expiring</code> | <code>expired</code>
     * | <code>cancelling</code> | <code>cancelled</code> | <code>failed</code>).</p>
     * </li> <li> <p> <code>instance-match-criteria</code> - The instance matching
     * criteria for the Fleet. Only <code>open</code> is supported.</p> </li> <li> <p>
     * <code>tenancy</code> - The tenancy of the Fleet (<code>default</code> |
     * <code>dedicated</code>).</p> </li> <li> <p> <code>allocation-strategy</code> -
     * The allocation strategy used by the Fleet. Only <code>prioritized</code> is
     * supported.</p> </li> </ul>
     */
    inline DescribeCapacityReservationFleetsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>state</code> - The state of the
     * Fleet (<code>submitted</code> | <code>modifying</code> | <code>active</code> |
     * <code>partially_fulfilled</code> | <code>expiring</code> | <code>expired</code>
     * | <code>cancelling</code> | <code>cancelled</code> | <code>failed</code>).</p>
     * </li> <li> <p> <code>instance-match-criteria</code> - The instance matching
     * criteria for the Fleet. Only <code>open</code> is supported.</p> </li> <li> <p>
     * <code>tenancy</code> - The tenancy of the Fleet (<code>default</code> |
     * <code>dedicated</code>).</p> </li> <li> <p> <code>allocation-strategy</code> -
     * The allocation strategy used by the Fleet. Only <code>prioritized</code> is
     * supported.</p> </li> </ul>
     */
    inline DescribeCapacityReservationFleetsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


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
    inline DescribeCapacityReservationFleetsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_capacityReservationFleetIds;
    bool m_capacityReservationFleetIdsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
