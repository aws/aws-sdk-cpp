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
  class DescribeVolumeStatusRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeVolumeStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVolumeStatus"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline DescribeVolumeStatusRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    DescribeVolumeStatusRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the volumes.</p> <p>Default: Describes all your volumes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVolumeIds() const { return m_volumeIds; }
    inline bool VolumeIdsHasBeenSet() const { return m_volumeIdsHasBeenSet; }
    template<typename VolumeIdsT = Aws::Vector<Aws::String>>
    void SetVolumeIds(VolumeIdsT&& value) { m_volumeIdsHasBeenSet = true; m_volumeIds = std::forward<VolumeIdsT>(value); }
    template<typename VolumeIdsT = Aws::Vector<Aws::String>>
    DescribeVolumeStatusRequest& WithVolumeIds(VolumeIdsT&& value) { SetVolumeIds(std::forward<VolumeIdsT>(value)); return *this;}
    template<typename VolumeIdsT = Aws::String>
    DescribeVolumeStatusRequest& AddVolumeIds(VolumeIdsT&& value) { m_volumeIdsHasBeenSet = true; m_volumeIds.emplace_back(std::forward<VolumeIdsT>(value)); return *this; }
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
    inline DescribeVolumeStatusRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filters.</p> <ul> <li> <p> <code>action.code</code> - The action code for
     * the event (for example, <code>enable-volume-io</code>).</p> </li> <li> <p>
     * <code>action.description</code> - A description of the action.</p> </li> <li>
     * <p> <code>action.event-id</code> - The event ID associated with the action.</p>
     * </li> <li> <p> <code>availability-zone</code> - The Availability Zone of the
     * instance.</p> </li> <li> <p> <code>event.description</code> - A description of
     * the event.</p> </li> <li> <p> <code>event.event-id</code> - The event ID.</p>
     * </li> <li> <p> <code>event.event-type</code> - The event type (for
     * <code>io-enabled</code>: <code>passed</code> | <code>failed</code>; for
     * <code>io-performance</code>: <code>io-performance:degraded</code> |
     * <code>io-performance:severely-degraded</code> |
     * <code>io-performance:stalled</code>).</p> </li> <li> <p>
     * <code>event.not-after</code> - The latest end time for the event.</p> </li> <li>
     * <p> <code>event.not-before</code> - The earliest start time for the event.</p>
     * </li> <li> <p> <code>volume-status.details-name</code> - The cause for
     * <code>volume-status.status</code> (<code>io-enabled</code> |
     * <code>io-performance</code>).</p> </li> <li> <p>
     * <code>volume-status.details-status</code> - The status of
     * <code>volume-status.details-name</code> (for <code>io-enabled</code>:
     * <code>passed</code> | <code>failed</code>; for <code>io-performance</code>:
     * <code>normal</code> | <code>degraded</code> | <code>severely-degraded</code> |
     * <code>stalled</code>).</p> </li> <li> <p> <code>volume-status.status</code> -
     * The status of the volume (<code>ok</code> | <code>impaired</code> |
     * <code>warning</code> | <code>insufficient-data</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeVolumeStatusRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeVolumeStatusRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_volumeIds;
    bool m_volumeIdsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
