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
  class DescribeSnapshotsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeSnapshotsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSnapshots"; }

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
    inline DescribeSnapshotsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    DescribeSnapshotsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Scopes the results to snapshots with the specified owners. You can specify a
     * combination of Amazon Web Services account IDs, <code>self</code>, and
     * <code>amazon</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOwnerIds() const { return m_ownerIds; }
    inline bool OwnerIdsHasBeenSet() const { return m_ownerIdsHasBeenSet; }
    template<typename OwnerIdsT = Aws::Vector<Aws::String>>
    void SetOwnerIds(OwnerIdsT&& value) { m_ownerIdsHasBeenSet = true; m_ownerIds = std::forward<OwnerIdsT>(value); }
    template<typename OwnerIdsT = Aws::Vector<Aws::String>>
    DescribeSnapshotsRequest& WithOwnerIds(OwnerIdsT&& value) { SetOwnerIds(std::forward<OwnerIdsT>(value)); return *this;}
    template<typename OwnerIdsT = Aws::String>
    DescribeSnapshotsRequest& AddOwnerIds(OwnerIdsT&& value) { m_ownerIdsHasBeenSet = true; m_ownerIds.emplace_back(std::forward<OwnerIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the Amazon Web Services accounts that can create volumes from the
     * snapshot.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRestorableByUserIds() const { return m_restorableByUserIds; }
    inline bool RestorableByUserIdsHasBeenSet() const { return m_restorableByUserIdsHasBeenSet; }
    template<typename RestorableByUserIdsT = Aws::Vector<Aws::String>>
    void SetRestorableByUserIds(RestorableByUserIdsT&& value) { m_restorableByUserIdsHasBeenSet = true; m_restorableByUserIds = std::forward<RestorableByUserIdsT>(value); }
    template<typename RestorableByUserIdsT = Aws::Vector<Aws::String>>
    DescribeSnapshotsRequest& WithRestorableByUserIds(RestorableByUserIdsT&& value) { SetRestorableByUserIds(std::forward<RestorableByUserIdsT>(value)); return *this;}
    template<typename RestorableByUserIdsT = Aws::String>
    DescribeSnapshotsRequest& AddRestorableByUserIds(RestorableByUserIdsT&& value) { m_restorableByUserIdsHasBeenSet = true; m_restorableByUserIds.emplace_back(std::forward<RestorableByUserIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The snapshot IDs.</p> <p>Default: Describes the snapshots for which you have
     * create volume permissions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSnapshotIds() const { return m_snapshotIds; }
    inline bool SnapshotIdsHasBeenSet() const { return m_snapshotIdsHasBeenSet; }
    template<typename SnapshotIdsT = Aws::Vector<Aws::String>>
    void SetSnapshotIds(SnapshotIdsT&& value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds = std::forward<SnapshotIdsT>(value); }
    template<typename SnapshotIdsT = Aws::Vector<Aws::String>>
    DescribeSnapshotsRequest& WithSnapshotIds(SnapshotIdsT&& value) { SetSnapshotIds(std::forward<SnapshotIdsT>(value)); return *this;}
    template<typename SnapshotIdsT = Aws::String>
    DescribeSnapshotsRequest& AddSnapshotIds(SnapshotIdsT&& value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds.emplace_back(std::forward<SnapshotIdsT>(value)); return *this; }
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
    inline DescribeSnapshotsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filters.</p> <ul> <li> <p> <code>description</code> - A description of
     * the snapshot.</p> </li> <li> <p> <code>encrypted</code> - Indicates whether the
     * snapshot is encrypted (<code>true</code> | <code>false</code>)</p> </li> <li>
     * <p> <code>owner-alias</code> - The owner alias, from an Amazon-maintained list
     * (<code>amazon</code>). This is not the user-configured Amazon Web Services
     * account alias set using the IAM console. We recommend that you use the related
     * parameter instead of this filter.</p> </li> <li> <p> <code>owner-id</code> - The
     * Amazon Web Services account ID of the owner. We recommend that you use the
     * related parameter instead of this filter.</p> </li> <li> <p>
     * <code>progress</code> - The progress of the snapshot, as a percentage (for
     * example, 80%).</p> </li> <li> <p> <code>snapshot-id</code> - The snapshot
     * ID.</p> </li> <li> <p> <code>start-time</code> - The time stamp when the
     * snapshot was initiated.</p> </li> <li> <p> <code>status</code> - The status of
     * the snapshot (<code>pending</code> | <code>completed</code> |
     * <code>error</code>).</p> </li> <li> <p> <code>storage-tier</code> - The storage
     * tier of the snapshot (<code>archive</code> | <code>standard</code>).</p> </li>
     * <li> <p> <code>transfer-type</code> - The type of operation used to create the
     * snapshot (<code>time-based</code> | <code>standard</code>).</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>volume-id</code> - The ID of the volume the snapshot is for.</p> </li>
     * <li> <p> <code>volume-size</code> - The size of the volume, in GiB.</p> </li>
     * </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeSnapshotsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeSnapshotsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_ownerIds;
    bool m_ownerIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_restorableByUserIds;
    bool m_restorableByUserIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_snapshotIds;
    bool m_snapshotIdsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
