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
  class DescribeFleetsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeFleetsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFleets"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline DescribeFleetsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
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
    inline DescribeFleetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeFleetsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the EC2 Fleets.</p>  <p>If a fleet is of type
     * <code>instant</code>, you must specify the fleet ID, otherwise it does not
     * appear in the response.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetFleetIds() const { return m_fleetIds; }
    inline bool FleetIdsHasBeenSet() const { return m_fleetIdsHasBeenSet; }
    template<typename FleetIdsT = Aws::Vector<Aws::String>>
    void SetFleetIds(FleetIdsT&& value) { m_fleetIdsHasBeenSet = true; m_fleetIds = std::forward<FleetIdsT>(value); }
    template<typename FleetIdsT = Aws::Vector<Aws::String>>
    DescribeFleetsRequest& WithFleetIds(FleetIdsT&& value) { SetFleetIds(std::forward<FleetIdsT>(value)); return *this;}
    template<typename FleetIdsT = Aws::String>
    DescribeFleetsRequest& AddFleetIds(FleetIdsT&& value) { m_fleetIdsHasBeenSet = true; m_fleetIds.emplace_back(std::forward<FleetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filters.</p> <ul> <li> <p> <code>activity-status</code> - The progress of
     * the EC2 Fleet ( <code>error</code> | <code>pending-fulfillment</code> |
     * <code>pending-termination</code> | <code>fulfilled</code>).</p> </li> <li> <p>
     * <code>excess-capacity-termination-policy</code> - Indicates whether to terminate
     * running instances if the target capacity is decreased below the current EC2
     * Fleet size (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>fleet-state</code> - The state of the EC2 Fleet (<code>submitted</code> |
     * <code>active</code> | <code>deleted</code> | <code>failed</code> |
     * <code>deleted-running</code> | <code>deleted-terminating</code> |
     * <code>modifying</code>).</p> </li> <li> <p>
     * <code>replace-unhealthy-instances</code> - Indicates whether EC2 Fleet should
     * replace unhealthy instances (<code>true</code> | <code>false</code>).</p> </li>
     * <li> <p> <code>type</code> - The type of request (<code>instant</code> |
     * <code>request</code> | <code>maintain</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeFleetsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeFleetsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_fleetIds;
    bool m_fleetIdsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
