/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/ebs/EBSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace EBS
{
namespace Model
{

  /**
   */
  class ListChangedBlocksRequest : public EBSRequest
  {
  public:
    AWS_EBS_API ListChangedBlocksRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListChangedBlocks"; }

    AWS_EBS_API Aws::String SerializePayload() const override;

    AWS_EBS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the first snapshot to use for the comparison.</p> 
     * <p>The <code>FirstSnapshotID</code> parameter must be specified with a
     * <code>SecondSnapshotId</code> parameter; otherwise, an error occurs.</p>
     * 
     */
    inline const Aws::String& GetFirstSnapshotId() const { return m_firstSnapshotId; }
    inline bool FirstSnapshotIdHasBeenSet() const { return m_firstSnapshotIdHasBeenSet; }
    template<typename FirstSnapshotIdT = Aws::String>
    void SetFirstSnapshotId(FirstSnapshotIdT&& value) { m_firstSnapshotIdHasBeenSet = true; m_firstSnapshotId = std::forward<FirstSnapshotIdT>(value); }
    template<typename FirstSnapshotIdT = Aws::String>
    ListChangedBlocksRequest& WithFirstSnapshotId(FirstSnapshotIdT&& value) { SetFirstSnapshotId(std::forward<FirstSnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the second snapshot to use for the comparison.</p> 
     * <p>The <code>SecondSnapshotId</code> parameter must be specified with a
     * <code>FirstSnapshotID</code> parameter; otherwise, an error occurs.</p>
     * 
     */
    inline const Aws::String& GetSecondSnapshotId() const { return m_secondSnapshotId; }
    inline bool SecondSnapshotIdHasBeenSet() const { return m_secondSnapshotIdHasBeenSet; }
    template<typename SecondSnapshotIdT = Aws::String>
    void SetSecondSnapshotId(SecondSnapshotIdT&& value) { m_secondSnapshotIdHasBeenSet = true; m_secondSnapshotId = std::forward<SecondSnapshotIdT>(value); }
    template<typename SecondSnapshotIdT = Aws::String>
    ListChangedBlocksRequest& WithSecondSnapshotId(SecondSnapshotIdT&& value) { SetSecondSnapshotId(std::forward<SecondSnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to request the next page of results.</p> <p>If you specify
     * <b>NextToken</b>, then <b>StartingBlockIndex</b> is ignored.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListChangedBlocksRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of blocks to be returned by the request.</p> <p>Even if
     * additional blocks can be retrieved from the snapshot, the request can return
     * less blocks than <b>MaxResults</b> or an empty array of blocks.</p> <p>To
     * retrieve the next set of blocks from the snapshot, make another request with the
     * returned <b>NextToken</b> value. The value of <b>NextToken</b> is
     * <code>null</code> when there are no more blocks to return.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListChangedBlocksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block index from which the comparison should start.</p> <p>The list in
     * the response will start from this block index or the next valid block index in
     * the snapshots.</p> <p>If you specify <b>NextToken</b>, then
     * <b>StartingBlockIndex</b> is ignored.</p>
     */
    inline int GetStartingBlockIndex() const { return m_startingBlockIndex; }
    inline bool StartingBlockIndexHasBeenSet() const { return m_startingBlockIndexHasBeenSet; }
    inline void SetStartingBlockIndex(int value) { m_startingBlockIndexHasBeenSet = true; m_startingBlockIndex = value; }
    inline ListChangedBlocksRequest& WithStartingBlockIndex(int value) { SetStartingBlockIndex(value); return *this;}
    ///@}
  private:

    Aws::String m_firstSnapshotId;
    bool m_firstSnapshotIdHasBeenSet = false;

    Aws::String m_secondSnapshotId;
    bool m_secondSnapshotIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    int m_startingBlockIndex{0};
    bool m_startingBlockIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace EBS
} // namespace Aws
