/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains the inputs for the <a>DescribeSnapshots</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeSnapshotsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeSnapshotsRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeSnapshotsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSnapshots"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the directory for which to retrieve snapshot
     * information.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the directory for which to retrieve snapshot
     * information.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the directory for which to retrieve snapshot
     * information.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the directory for which to retrieve snapshot
     * information.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the directory for which to retrieve snapshot
     * information.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the directory for which to retrieve snapshot
     * information.</p>
     */
    inline DescribeSnapshotsRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory for which to retrieve snapshot
     * information.</p>
     */
    inline DescribeSnapshotsRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory for which to retrieve snapshot
     * information.</p>
     */
    inline DescribeSnapshotsRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>A list of identifiers of the snapshots to obtain the information for. If this
     * member is null or empty, all snapshots are returned using the <i>Limit</i> and
     * <i>NextToken</i> members.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSnapshotIds() const{ return m_snapshotIds; }

    /**
     * <p>A list of identifiers of the snapshots to obtain the information for. If this
     * member is null or empty, all snapshots are returned using the <i>Limit</i> and
     * <i>NextToken</i> members.</p>
     */
    inline bool SnapshotIdsHasBeenSet() const { return m_snapshotIdsHasBeenSet; }

    /**
     * <p>A list of identifiers of the snapshots to obtain the information for. If this
     * member is null or empty, all snapshots are returned using the <i>Limit</i> and
     * <i>NextToken</i> members.</p>
     */
    inline void SetSnapshotIds(const Aws::Vector<Aws::String>& value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds = value; }

    /**
     * <p>A list of identifiers of the snapshots to obtain the information for. If this
     * member is null or empty, all snapshots are returned using the <i>Limit</i> and
     * <i>NextToken</i> members.</p>
     */
    inline void SetSnapshotIds(Aws::Vector<Aws::String>&& value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds = std::move(value); }

    /**
     * <p>A list of identifiers of the snapshots to obtain the information for. If this
     * member is null or empty, all snapshots are returned using the <i>Limit</i> and
     * <i>NextToken</i> members.</p>
     */
    inline DescribeSnapshotsRequest& WithSnapshotIds(const Aws::Vector<Aws::String>& value) { SetSnapshotIds(value); return *this;}

    /**
     * <p>A list of identifiers of the snapshots to obtain the information for. If this
     * member is null or empty, all snapshots are returned using the <i>Limit</i> and
     * <i>NextToken</i> members.</p>
     */
    inline DescribeSnapshotsRequest& WithSnapshotIds(Aws::Vector<Aws::String>&& value) { SetSnapshotIds(std::move(value)); return *this;}

    /**
     * <p>A list of identifiers of the snapshots to obtain the information for. If this
     * member is null or empty, all snapshots are returned using the <i>Limit</i> and
     * <i>NextToken</i> members.</p>
     */
    inline DescribeSnapshotsRequest& AddSnapshotIds(const Aws::String& value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds.push_back(value); return *this; }

    /**
     * <p>A list of identifiers of the snapshots to obtain the information for. If this
     * member is null or empty, all snapshots are returned using the <i>Limit</i> and
     * <i>NextToken</i> members.</p>
     */
    inline DescribeSnapshotsRequest& AddSnapshotIds(Aws::String&& value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of identifiers of the snapshots to obtain the information for. If this
     * member is null or empty, all snapshots are returned using the <i>Limit</i> and
     * <i>NextToken</i> members.</p>
     */
    inline DescribeSnapshotsRequest& AddSnapshotIds(const char* value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds.push_back(value); return *this; }


    /**
     * <p>The <i>DescribeSnapshotsResult.NextToken</i> value from a previous call to
     * <a>DescribeSnapshots</a>. Pass null if this is the first call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <i>DescribeSnapshotsResult.NextToken</i> value from a previous call to
     * <a>DescribeSnapshots</a>. Pass null if this is the first call.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <i>DescribeSnapshotsResult.NextToken</i> value from a previous call to
     * <a>DescribeSnapshots</a>. Pass null if this is the first call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <i>DescribeSnapshotsResult.NextToken</i> value from a previous call to
     * <a>DescribeSnapshots</a>. Pass null if this is the first call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <i>DescribeSnapshotsResult.NextToken</i> value from a previous call to
     * <a>DescribeSnapshots</a>. Pass null if this is the first call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <i>DescribeSnapshotsResult.NextToken</i> value from a previous call to
     * <a>DescribeSnapshots</a>. Pass null if this is the first call.</p>
     */
    inline DescribeSnapshotsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <i>DescribeSnapshotsResult.NextToken</i> value from a previous call to
     * <a>DescribeSnapshots</a>. Pass null if this is the first call.</p>
     */
    inline DescribeSnapshotsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <i>DescribeSnapshotsResult.NextToken</i> value from a previous call to
     * <a>DescribeSnapshots</a>. Pass null if this is the first call.</p>
     */
    inline DescribeSnapshotsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of objects to return.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of objects to return.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of objects to return.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of objects to return.</p>
     */
    inline DescribeSnapshotsRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_snapshotIds;
    bool m_snapshotIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
