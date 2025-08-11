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
  class DescribeVolumesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeVolumesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVolumes"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The volume IDs. If not specified, then all volumes are included in the
     * response.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVolumeIds() const { return m_volumeIds; }
    inline bool VolumeIdsHasBeenSet() const { return m_volumeIdsHasBeenSet; }
    template<typename VolumeIdsT = Aws::Vector<Aws::String>>
    void SetVolumeIds(VolumeIdsT&& value) { m_volumeIdsHasBeenSet = true; m_volumeIds = std::forward<VolumeIdsT>(value); }
    template<typename VolumeIdsT = Aws::Vector<Aws::String>>
    DescribeVolumesRequest& WithVolumeIds(VolumeIdsT&& value) { SetVolumeIds(std::forward<VolumeIdsT>(value)); return *this;}
    template<typename VolumeIdsT = Aws::String>
    DescribeVolumesRequest& AddVolumeIds(VolumeIdsT&& value) { m_volumeIdsHasBeenSet = true; m_volumeIds.emplace_back(std::forward<VolumeIdsT>(value)); return *this; }
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
    inline DescribeVolumesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filters.</p> <ul> <li> <p> <code>attachment.attach-time</code> - The time
     * stamp when the attachment initiated.</p> </li> <li> <p>
     * <code>attachment.delete-on-termination</code> - Whether the volume is deleted on
     * instance termination.</p> </li> <li> <p> <code>attachment.device</code> - The
     * device name specified in the block device mapping (for example,
     * <code>/dev/sda1</code>).</p> </li> <li> <p> <code>attachment.instance-id</code>
     * - The ID of the instance the volume is attached to.</p> </li> <li> <p>
     * <code>attachment.status</code> - The attachment state (<code>attaching</code> |
     * <code>attached</code> | <code>detaching</code>).</p> </li> <li> <p>
     * <code>availability-zone</code> - The Availability Zone in which the volume was
     * created.</p> </li> <li> <p> <code>availability-zone-id</code> - The ID of the
     * Availability Zone in which the volume was created.</p> </li> <li> <p>
     * <code>create-time</code> - The time stamp when the volume was created.</p> </li>
     * <li> <p> <code>encrypted</code> - Indicates whether the volume is encrypted
     * (<code>true</code> | <code>false</code>)</p> </li> <li> <p>
     * <code>fast-restored</code> - Indicates whether the volume was created from a
     * snapshot that is enabled for fast snapshot restore (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p> <code>multi-attach-enabled</code> -
     * Indicates whether the volume is enabled for Multi-Attach (<code>true</code> |
     * <code>false</code>)</p> </li> <li> <p> <code>operator.managed</code> - A Boolean
     * that indicates whether this is a managed volume.</p> </li> <li> <p>
     * <code>operator.principal</code> - The principal that manages the volume. Only
     * valid for managed volumes, where <code>managed</code> is <code>true</code>.</p>
     * </li> <li> <p> <code>size</code> - The size of the volume, in GiB.</p> </li>
     * <li> <p> <code>snapshot-id</code> - The snapshot from which the volume was
     * created.</p> </li> <li> <p> <code>status</code> - The state of the volume
     * (<code>creating</code> | <code>available</code> | <code>in-use</code> |
     * <code>deleting</code> | <code>deleted</code> | <code>error</code>).</p> </li>
     * <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>volume-id</code> - The volume ID.</p> </li> <li> <p>
     * <code>volume-type</code> - The Amazon EBS volume type (<code>gp2</code> |
     * <code>gp3</code> | <code>io1</code> | <code>io2</code> | <code>st1</code> |
     * <code>sc1</code>| <code>standard</code>)</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeVolumesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeVolumesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
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
    DescribeVolumesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
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
    inline DescribeVolumesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_volumeIds;
    bool m_volumeIdsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

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
