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
    inline ListSnapshotsInRecycleBinRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListSnapshotsInRecycleBinRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSnapshotsInRecycleBinRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSnapshotsInRecycleBinRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the snapshots to list. Omit this parameter to list all of the
     * snapshots that are in the Recycle Bin.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSnapshotIds() const{ return m_snapshotIds; }
    inline bool SnapshotIdsHasBeenSet() const { return m_snapshotIdsHasBeenSet; }
    inline void SetSnapshotIds(const Aws::Vector<Aws::String>& value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds = value; }
    inline void SetSnapshotIds(Aws::Vector<Aws::String>&& value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds = std::move(value); }
    inline ListSnapshotsInRecycleBinRequest& WithSnapshotIds(const Aws::Vector<Aws::String>& value) { SetSnapshotIds(value); return *this;}
    inline ListSnapshotsInRecycleBinRequest& WithSnapshotIds(Aws::Vector<Aws::String>&& value) { SetSnapshotIds(std::move(value)); return *this;}
    inline ListSnapshotsInRecycleBinRequest& AddSnapshotIds(const Aws::String& value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds.push_back(value); return *this; }
    inline ListSnapshotsInRecycleBinRequest& AddSnapshotIds(Aws::String&& value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds.push_back(std::move(value)); return *this; }
    inline ListSnapshotsInRecycleBinRequest& AddSnapshotIds(const char* value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds.push_back(value); return *this; }
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
    inline ListSnapshotsInRecycleBinRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
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
