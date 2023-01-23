/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ListSnapshotsInRecycleBinRequest : public EC2Request
  {
  public:
    AWS_EC2_API ListSnapshotsInRecycleBinRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSnapshotsInRecycleBin"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline ListSnapshotsInRecycleBinRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListSnapshotsInRecycleBinRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListSnapshotsInRecycleBinRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListSnapshotsInRecycleBinRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The IDs of the snapshots to list. Omit this parameter to list all of the
     * snapshots that are in the Recycle Bin.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSnapshotIds() const{ return m_snapshotIds; }

    /**
     * <p>The IDs of the snapshots to list. Omit this parameter to list all of the
     * snapshots that are in the Recycle Bin.</p>
     */
    inline bool SnapshotIdsHasBeenSet() const { return m_snapshotIdsHasBeenSet; }

    /**
     * <p>The IDs of the snapshots to list. Omit this parameter to list all of the
     * snapshots that are in the Recycle Bin.</p>
     */
    inline void SetSnapshotIds(const Aws::Vector<Aws::String>& value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds = value; }

    /**
     * <p>The IDs of the snapshots to list. Omit this parameter to list all of the
     * snapshots that are in the Recycle Bin.</p>
     */
    inline void SetSnapshotIds(Aws::Vector<Aws::String>&& value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds = std::move(value); }

    /**
     * <p>The IDs of the snapshots to list. Omit this parameter to list all of the
     * snapshots that are in the Recycle Bin.</p>
     */
    inline ListSnapshotsInRecycleBinRequest& WithSnapshotIds(const Aws::Vector<Aws::String>& value) { SetSnapshotIds(value); return *this;}

    /**
     * <p>The IDs of the snapshots to list. Omit this parameter to list all of the
     * snapshots that are in the Recycle Bin.</p>
     */
    inline ListSnapshotsInRecycleBinRequest& WithSnapshotIds(Aws::Vector<Aws::String>&& value) { SetSnapshotIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the snapshots to list. Omit this parameter to list all of the
     * snapshots that are in the Recycle Bin.</p>
     */
    inline ListSnapshotsInRecycleBinRequest& AddSnapshotIds(const Aws::String& value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the snapshots to list. Omit this parameter to list all of the
     * snapshots that are in the Recycle Bin.</p>
     */
    inline ListSnapshotsInRecycleBinRequest& AddSnapshotIds(Aws::String&& value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the snapshots to list. Omit this parameter to list all of the
     * snapshots that are in the Recycle Bin.</p>
     */
    inline ListSnapshotsInRecycleBinRequest& AddSnapshotIds(const char* value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds.push_back(value); return *this; }


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
    inline ListSnapshotsInRecycleBinRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_snapshotIds;
    bool m_snapshotIdsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
