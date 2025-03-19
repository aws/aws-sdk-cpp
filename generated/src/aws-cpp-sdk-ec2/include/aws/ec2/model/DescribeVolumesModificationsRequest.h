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
  class DescribeVolumesModificationsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeVolumesModificationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVolumesModifications"; }

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
    inline DescribeVolumesModificationsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the volumes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVolumeIds() const { return m_volumeIds; }
    inline bool VolumeIdsHasBeenSet() const { return m_volumeIdsHasBeenSet; }
    template<typename VolumeIdsT = Aws::Vector<Aws::String>>
    void SetVolumeIds(VolumeIdsT&& value) { m_volumeIdsHasBeenSet = true; m_volumeIds = std::forward<VolumeIdsT>(value); }
    template<typename VolumeIdsT = Aws::Vector<Aws::String>>
    DescribeVolumesModificationsRequest& WithVolumeIds(VolumeIdsT&& value) { SetVolumeIds(std::forward<VolumeIdsT>(value)); return *this;}
    template<typename VolumeIdsT = Aws::String>
    DescribeVolumesModificationsRequest& AddVolumeIds(VolumeIdsT&& value) { m_volumeIdsHasBeenSet = true; m_volumeIds.emplace_back(std::forward<VolumeIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filters.</p> <ul> <li> <p> <code>modification-state</code> - The current
     * modification state (modifying | optimizing | completed | failed).</p> </li> <li>
     * <p> <code>original-iops</code> - The original IOPS rate of the volume.</p> </li>
     * <li> <p> <code>original-size</code> - The original size of the volume, in
     * GiB.</p> </li> <li> <p> <code>original-volume-type</code> - The original volume
     * type of the volume (standard | io1 | io2 | gp2 | sc1 | st1).</p> </li> <li> <p>
     * <code>originalMultiAttachEnabled</code> - Indicates whether Multi-Attach support
     * was enabled (true | false).</p> </li> <li> <p> <code>start-time</code> - The
     * modification start time.</p> </li> <li> <p> <code>target-iops</code> - The
     * target IOPS rate of the volume.</p> </li> <li> <p> <code>target-size</code> -
     * The target size of the volume, in GiB.</p> </li> <li> <p>
     * <code>target-volume-type</code> - The target volume type of the volume (standard
     * | io1 | io2 | gp2 | sc1 | st1).</p> </li> <li> <p>
     * <code>targetMultiAttachEnabled</code> - Indicates whether Multi-Attach support
     * is to be enabled (true | false).</p> </li> <li> <p> <code>volume-id</code> - The
     * ID of the volume.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeVolumesModificationsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeVolumesModificationsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
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
    DescribeVolumesModificationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results (up to a limit of 500) to be returned in a
     * paginated request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeVolumesModificationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_volumeIds;
    bool m_volumeIdsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
