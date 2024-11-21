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
  class DescribeCapacityBlockExtensionHistoryRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeCapacityBlockExtensionHistoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCapacityBlockExtensionHistory"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The IDs of Capacity Block reservations that you want to display the history
     * for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapacityReservationIds() const{ return m_capacityReservationIds; }
    inline bool CapacityReservationIdsHasBeenSet() const { return m_capacityReservationIdsHasBeenSet; }
    inline void SetCapacityReservationIds(const Aws::Vector<Aws::String>& value) { m_capacityReservationIdsHasBeenSet = true; m_capacityReservationIds = value; }
    inline void SetCapacityReservationIds(Aws::Vector<Aws::String>&& value) { m_capacityReservationIdsHasBeenSet = true; m_capacityReservationIds = std::move(value); }
    inline DescribeCapacityBlockExtensionHistoryRequest& WithCapacityReservationIds(const Aws::Vector<Aws::String>& value) { SetCapacityReservationIds(value); return *this;}
    inline DescribeCapacityBlockExtensionHistoryRequest& WithCapacityReservationIds(Aws::Vector<Aws::String>&& value) { SetCapacityReservationIds(std::move(value)); return *this;}
    inline DescribeCapacityBlockExtensionHistoryRequest& AddCapacityReservationIds(const Aws::String& value) { m_capacityReservationIdsHasBeenSet = true; m_capacityReservationIds.push_back(value); return *this; }
    inline DescribeCapacityBlockExtensionHistoryRequest& AddCapacityReservationIds(Aws::String&& value) { m_capacityReservationIdsHasBeenSet = true; m_capacityReservationIds.push_back(std::move(value)); return *this; }
    inline DescribeCapacityBlockExtensionHistoryRequest& AddCapacityReservationIds(const char* value) { m_capacityReservationIdsHasBeenSet = true; m_capacityReservationIds.push_back(value); return *this; }
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
    inline DescribeCapacityBlockExtensionHistoryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeCapacityBlockExtensionHistoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeCapacityBlockExtensionHistoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
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
    inline DescribeCapacityBlockExtensionHistoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more filters</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone of the extension.</p> </li> <li> <p>
     * <code>availability-zone-id</code> - The Availability Zone ID of the
     * extension.</p> </li> <li> <p> <code>capacity-block-extension-offering-id</code>
     * - The ID of the extension offering.</p> </li> <li> <p>
     * <code>capacity-block-extension-status</code> - The status of the extension
     * (<code>payment-pending</code> | <code>payment-failed</code> |
     * <code>payment-succeeded</code>).</p> </li> <li> <p>
     * <code>capacity-reservation-id</code> - The reservation ID of the extension.</p>
     * </li> <li> <p> <code>instance-type</code> - The instance type of the
     * extension.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeCapacityBlockExtensionHistoryRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline DescribeCapacityBlockExtensionHistoryRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeCapacityBlockExtensionHistoryRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeCapacityBlockExtensionHistoryRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
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
    inline DescribeCapacityBlockExtensionHistoryRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_capacityReservationIds;
    bool m_capacityReservationIdsHasBeenSet = false;

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
