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
    AWS_FSX_API DescribeSnapshotsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSnapshots"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The IDs of the snapshots that you want to retrieve. This parameter value
     * overrides any filters. If any IDs aren't found, a <code>SnapshotNotFound</code>
     * error occurs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSnapshotIds() const{ return m_snapshotIds; }

    /**
     * <p>The IDs of the snapshots that you want to retrieve. This parameter value
     * overrides any filters. If any IDs aren't found, a <code>SnapshotNotFound</code>
     * error occurs.</p>
     */
    inline bool SnapshotIdsHasBeenSet() const { return m_snapshotIdsHasBeenSet; }

    /**
     * <p>The IDs of the snapshots that you want to retrieve. This parameter value
     * overrides any filters. If any IDs aren't found, a <code>SnapshotNotFound</code>
     * error occurs.</p>
     */
    inline void SetSnapshotIds(const Aws::Vector<Aws::String>& value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds = value; }

    /**
     * <p>The IDs of the snapshots that you want to retrieve. This parameter value
     * overrides any filters. If any IDs aren't found, a <code>SnapshotNotFound</code>
     * error occurs.</p>
     */
    inline void SetSnapshotIds(Aws::Vector<Aws::String>&& value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds = std::move(value); }

    /**
     * <p>The IDs of the snapshots that you want to retrieve. This parameter value
     * overrides any filters. If any IDs aren't found, a <code>SnapshotNotFound</code>
     * error occurs.</p>
     */
    inline DescribeSnapshotsRequest& WithSnapshotIds(const Aws::Vector<Aws::String>& value) { SetSnapshotIds(value); return *this;}

    /**
     * <p>The IDs of the snapshots that you want to retrieve. This parameter value
     * overrides any filters. If any IDs aren't found, a <code>SnapshotNotFound</code>
     * error occurs.</p>
     */
    inline DescribeSnapshotsRequest& WithSnapshotIds(Aws::Vector<Aws::String>&& value) { SetSnapshotIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the snapshots that you want to retrieve. This parameter value
     * overrides any filters. If any IDs aren't found, a <code>SnapshotNotFound</code>
     * error occurs.</p>
     */
    inline DescribeSnapshotsRequest& AddSnapshotIds(const Aws::String& value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the snapshots that you want to retrieve. This parameter value
     * overrides any filters. If any IDs aren't found, a <code>SnapshotNotFound</code>
     * error occurs.</p>
     */
    inline DescribeSnapshotsRequest& AddSnapshotIds(Aws::String&& value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the snapshots that you want to retrieve. This parameter value
     * overrides any filters. If any IDs aren't found, a <code>SnapshotNotFound</code>
     * error occurs.</p>
     */
    inline DescribeSnapshotsRequest& AddSnapshotIds(const char* value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds.push_back(value); return *this; }


    /**
     * <p>The filters structure. The supported names are <code>file-system-id</code> or
     * <code>volume-id</code>.</p>
     */
    inline const Aws::Vector<SnapshotFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters structure. The supported names are <code>file-system-id</code> or
     * <code>volume-id</code>.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters structure. The supported names are <code>file-system-id</code> or
     * <code>volume-id</code>.</p>
     */
    inline void SetFilters(const Aws::Vector<SnapshotFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters structure. The supported names are <code>file-system-id</code> or
     * <code>volume-id</code>.</p>
     */
    inline void SetFilters(Aws::Vector<SnapshotFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters structure. The supported names are <code>file-system-id</code> or
     * <code>volume-id</code>.</p>
     */
    inline DescribeSnapshotsRequest& WithFilters(const Aws::Vector<SnapshotFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters structure. The supported names are <code>file-system-id</code> or
     * <code>volume-id</code>.</p>
     */
    inline DescribeSnapshotsRequest& WithFilters(Aws::Vector<SnapshotFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters structure. The supported names are <code>file-system-id</code> or
     * <code>volume-id</code>.</p>
     */
    inline DescribeSnapshotsRequest& AddFilters(const SnapshotFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters structure. The supported names are <code>file-system-id</code> or
     * <code>volume-id</code>.</p>
     */
    inline DescribeSnapshotsRequest& AddFilters(SnapshotFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline DescribeSnapshotsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline DescribeSnapshotsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeSnapshotsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeSnapshotsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_snapshotIds;
    bool m_snapshotIdsHasBeenSet = false;

    Aws::Vector<SnapshotFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
