/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/SnapshotFilter.h>
#include <utility>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   */
  class DescribeSnapshotsRequest : public FSxRequest
  {
  public:
    AWS_FSX_API DescribeSnapshotsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSnapshots"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The IDs of the snapshots that you want to retrieve. This parameter value
     * overrides any filters. If any IDs aren't found, a <code>SnapshotNotFound</code>
     * error occurs.</p>
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
     * <p>The filters structure. The supported names are <code>file-system-id</code> or
     * <code>volume-id</code>.</p>
     */
    inline const Aws::Vector<SnapshotFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<SnapshotFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<SnapshotFilter>>
    DescribeSnapshotsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = SnapshotFilter>
    DescribeSnapshotsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeSnapshotsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeSnapshotsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>false</code> (default) if you want to only see the snapshots
     * owned by your Amazon Web Services account. Set to <code>true</code> if you want
     * to see the snapshots in your account and the ones shared with you from another
     * account.</p>
     */
    inline bool GetIncludeShared() const { return m_includeShared; }
    inline bool IncludeSharedHasBeenSet() const { return m_includeSharedHasBeenSet; }
    inline void SetIncludeShared(bool value) { m_includeSharedHasBeenSet = true; m_includeShared = value; }
    inline DescribeSnapshotsRequest& WithIncludeShared(bool value) { SetIncludeShared(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_snapshotIds;
    bool m_snapshotIdsHasBeenSet = false;

    Aws::Vector<SnapshotFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_includeShared{false};
    bool m_includeSharedHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
