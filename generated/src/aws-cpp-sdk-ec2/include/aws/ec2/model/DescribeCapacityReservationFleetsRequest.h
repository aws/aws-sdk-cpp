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
  class DescribeCapacityReservationFleetsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeCapacityReservationFleetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCapacityReservationFleets"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The IDs of the Capacity Reservation Fleets to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapacityReservationFleetIds() const{ return m_capacityReservationFleetIds; }
    inline bool CapacityReservationFleetIdsHasBeenSet() const { return m_capacityReservationFleetIdsHasBeenSet; }
    inline void SetCapacityReservationFleetIds(const Aws::Vector<Aws::String>& value) { m_capacityReservationFleetIdsHasBeenSet = true; m_capacityReservationFleetIds = value; }
    inline void SetCapacityReservationFleetIds(Aws::Vector<Aws::String>&& value) { m_capacityReservationFleetIdsHasBeenSet = true; m_capacityReservationFleetIds = std::move(value); }
    inline DescribeCapacityReservationFleetsRequest& WithCapacityReservationFleetIds(const Aws::Vector<Aws::String>& value) { SetCapacityReservationFleetIds(value); return *this;}
    inline DescribeCapacityReservationFleetsRequest& WithCapacityReservationFleetIds(Aws::Vector<Aws::String>&& value) { SetCapacityReservationFleetIds(std::move(value)); return *this;}
    inline DescribeCapacityReservationFleetsRequest& AddCapacityReservationFleetIds(const Aws::String& value) { m_capacityReservationFleetIdsHasBeenSet = true; m_capacityReservationFleetIds.push_back(value); return *this; }
    inline DescribeCapacityReservationFleetsRequest& AddCapacityReservationFleetIds(Aws::String&& value) { m_capacityReservationFleetIdsHasBeenSet = true; m_capacityReservationFleetIds.push_back(std::move(value)); return *this; }
    inline DescribeCapacityReservationFleetsRequest& AddCapacityReservationFleetIds(const char* value) { m_capacityReservationFleetIdsHasBeenSet = true; m_capacityReservationFleetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeCapacityReservationFleetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeCapacityReservationFleetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeCapacityReservationFleetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeCapacityReservationFleetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
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
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeCapacityReservationFleetsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline DescribeCapacityReservationFleetsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeCapacityReservationFleetsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeCapacityReservationFleetsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
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
    inline DescribeCapacityReservationFleetsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_capacityReservationFleetIds;
    bool m_capacityReservationFleetIdsHasBeenSet = false;

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
