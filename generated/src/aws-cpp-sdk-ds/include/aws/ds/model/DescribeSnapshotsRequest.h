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
    AWS_DIRECTORYSERVICE_API DescribeSnapshotsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSnapshots"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the directory for which to retrieve snapshot
     * information.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    DescribeSnapshotsRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of identifiers of the snapshots to obtain the information for. If this
     * member is null or empty, all snapshots are returned using the <i>Limit</i> and
     * <i>NextToken</i> members.</p>
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
     * <p>The <i>DescribeSnapshotsResult.NextToken</i> value from a previous call to
     * <a>DescribeSnapshots</a>. Pass null if this is the first call.</p>
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
     * <p>The maximum number of objects to return.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeSnapshotsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_snapshotIds;
    bool m_snapshotIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
