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
    AWS_EBS_API ListChangedBlocksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListChangedBlocks"; }

    AWS_EBS_API Aws::String SerializePayload() const override;

    AWS_EBS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the first snapshot to use for the comparison.</p> 
     * <p>The <code>FirstSnapshotID</code> parameter must be specified with a
     * <code>SecondSnapshotId</code> parameter; otherwise, an error occurs.</p>
     * 
     */
    inline const Aws::String& GetFirstSnapshotId() const{ return m_firstSnapshotId; }

    /**
     * <p>The ID of the first snapshot to use for the comparison.</p> 
     * <p>The <code>FirstSnapshotID</code> parameter must be specified with a
     * <code>SecondSnapshotId</code> parameter; otherwise, an error occurs.</p>
     * 
     */
    inline bool FirstSnapshotIdHasBeenSet() const { return m_firstSnapshotIdHasBeenSet; }

    /**
     * <p>The ID of the first snapshot to use for the comparison.</p> 
     * <p>The <code>FirstSnapshotID</code> parameter must be specified with a
     * <code>SecondSnapshotId</code> parameter; otherwise, an error occurs.</p>
     * 
     */
    inline void SetFirstSnapshotId(const Aws::String& value) { m_firstSnapshotIdHasBeenSet = true; m_firstSnapshotId = value; }

    /**
     * <p>The ID of the first snapshot to use for the comparison.</p> 
     * <p>The <code>FirstSnapshotID</code> parameter must be specified with a
     * <code>SecondSnapshotId</code> parameter; otherwise, an error occurs.</p>
     * 
     */
    inline void SetFirstSnapshotId(Aws::String&& value) { m_firstSnapshotIdHasBeenSet = true; m_firstSnapshotId = std::move(value); }

    /**
     * <p>The ID of the first snapshot to use for the comparison.</p> 
     * <p>The <code>FirstSnapshotID</code> parameter must be specified with a
     * <code>SecondSnapshotId</code> parameter; otherwise, an error occurs.</p>
     * 
     */
    inline void SetFirstSnapshotId(const char* value) { m_firstSnapshotIdHasBeenSet = true; m_firstSnapshotId.assign(value); }

    /**
     * <p>The ID of the first snapshot to use for the comparison.</p> 
     * <p>The <code>FirstSnapshotID</code> parameter must be specified with a
     * <code>SecondSnapshotId</code> parameter; otherwise, an error occurs.</p>
     * 
     */
    inline ListChangedBlocksRequest& WithFirstSnapshotId(const Aws::String& value) { SetFirstSnapshotId(value); return *this;}

    /**
     * <p>The ID of the first snapshot to use for the comparison.</p> 
     * <p>The <code>FirstSnapshotID</code> parameter must be specified with a
     * <code>SecondSnapshotId</code> parameter; otherwise, an error occurs.</p>
     * 
     */
    inline ListChangedBlocksRequest& WithFirstSnapshotId(Aws::String&& value) { SetFirstSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the first snapshot to use for the comparison.</p> 
     * <p>The <code>FirstSnapshotID</code> parameter must be specified with a
     * <code>SecondSnapshotId</code> parameter; otherwise, an error occurs.</p>
     * 
     */
    inline ListChangedBlocksRequest& WithFirstSnapshotId(const char* value) { SetFirstSnapshotId(value); return *this;}


    /**
     * <p>The ID of the second snapshot to use for the comparison.</p> 
     * <p>The <code>SecondSnapshotId</code> parameter must be specified with a
     * <code>FirstSnapshotID</code> parameter; otherwise, an error occurs.</p>
     * 
     */
    inline const Aws::String& GetSecondSnapshotId() const{ return m_secondSnapshotId; }

    /**
     * <p>The ID of the second snapshot to use for the comparison.</p> 
     * <p>The <code>SecondSnapshotId</code> parameter must be specified with a
     * <code>FirstSnapshotID</code> parameter; otherwise, an error occurs.</p>
     * 
     */
    inline bool SecondSnapshotIdHasBeenSet() const { return m_secondSnapshotIdHasBeenSet; }

    /**
     * <p>The ID of the second snapshot to use for the comparison.</p> 
     * <p>The <code>SecondSnapshotId</code> parameter must be specified with a
     * <code>FirstSnapshotID</code> parameter; otherwise, an error occurs.</p>
     * 
     */
    inline void SetSecondSnapshotId(const Aws::String& value) { m_secondSnapshotIdHasBeenSet = true; m_secondSnapshotId = value; }

    /**
     * <p>The ID of the second snapshot to use for the comparison.</p> 
     * <p>The <code>SecondSnapshotId</code> parameter must be specified with a
     * <code>FirstSnapshotID</code> parameter; otherwise, an error occurs.</p>
     * 
     */
    inline void SetSecondSnapshotId(Aws::String&& value) { m_secondSnapshotIdHasBeenSet = true; m_secondSnapshotId = std::move(value); }

    /**
     * <p>The ID of the second snapshot to use for the comparison.</p> 
     * <p>The <code>SecondSnapshotId</code> parameter must be specified with a
     * <code>FirstSnapshotID</code> parameter; otherwise, an error occurs.</p>
     * 
     */
    inline void SetSecondSnapshotId(const char* value) { m_secondSnapshotIdHasBeenSet = true; m_secondSnapshotId.assign(value); }

    /**
     * <p>The ID of the second snapshot to use for the comparison.</p> 
     * <p>The <code>SecondSnapshotId</code> parameter must be specified with a
     * <code>FirstSnapshotID</code> parameter; otherwise, an error occurs.</p>
     * 
     */
    inline ListChangedBlocksRequest& WithSecondSnapshotId(const Aws::String& value) { SetSecondSnapshotId(value); return *this;}

    /**
     * <p>The ID of the second snapshot to use for the comparison.</p> 
     * <p>The <code>SecondSnapshotId</code> parameter must be specified with a
     * <code>FirstSnapshotID</code> parameter; otherwise, an error occurs.</p>
     * 
     */
    inline ListChangedBlocksRequest& WithSecondSnapshotId(Aws::String&& value) { SetSecondSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the second snapshot to use for the comparison.</p> 
     * <p>The <code>SecondSnapshotId</code> parameter must be specified with a
     * <code>FirstSnapshotID</code> parameter; otherwise, an error occurs.</p>
     * 
     */
    inline ListChangedBlocksRequest& WithSecondSnapshotId(const char* value) { SetSecondSnapshotId(value); return *this;}


    /**
     * <p>The token to request the next page of results.</p> <p>If you specify
     * <b>NextToken</b>, then <b>StartingBlockIndex</b> is ignored.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to request the next page of results.</p> <p>If you specify
     * <b>NextToken</b>, then <b>StartingBlockIndex</b> is ignored.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to request the next page of results.</p> <p>If you specify
     * <b>NextToken</b>, then <b>StartingBlockIndex</b> is ignored.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to request the next page of results.</p> <p>If you specify
     * <b>NextToken</b>, then <b>StartingBlockIndex</b> is ignored.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to request the next page of results.</p> <p>If you specify
     * <b>NextToken</b>, then <b>StartingBlockIndex</b> is ignored.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to request the next page of results.</p> <p>If you specify
     * <b>NextToken</b>, then <b>StartingBlockIndex</b> is ignored.</p>
     */
    inline ListChangedBlocksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to request the next page of results.</p> <p>If you specify
     * <b>NextToken</b>, then <b>StartingBlockIndex</b> is ignored.</p>
     */
    inline ListChangedBlocksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to request the next page of results.</p> <p>If you specify
     * <b>NextToken</b>, then <b>StartingBlockIndex</b> is ignored.</p>
     */
    inline ListChangedBlocksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of blocks to be returned by the request.</p> <p>Even if
     * additional blocks can be retrieved from the snapshot, the request can return
     * less blocks than <b>MaxResults</b> or an empty array of blocks.</p> <p>To
     * retrieve the next set of blocks from the snapshot, make another request with the
     * returned <b>NextToken</b> value. The value of <b>NextToken</b> is
     * <code>null</code> when there are no more blocks to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of blocks to be returned by the request.</p> <p>Even if
     * additional blocks can be retrieved from the snapshot, the request can return
     * less blocks than <b>MaxResults</b> or an empty array of blocks.</p> <p>To
     * retrieve the next set of blocks from the snapshot, make another request with the
     * returned <b>NextToken</b> value. The value of <b>NextToken</b> is
     * <code>null</code> when there are no more blocks to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of blocks to be returned by the request.</p> <p>Even if
     * additional blocks can be retrieved from the snapshot, the request can return
     * less blocks than <b>MaxResults</b> or an empty array of blocks.</p> <p>To
     * retrieve the next set of blocks from the snapshot, make another request with the
     * returned <b>NextToken</b> value. The value of <b>NextToken</b> is
     * <code>null</code> when there are no more blocks to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of blocks to be returned by the request.</p> <p>Even if
     * additional blocks can be retrieved from the snapshot, the request can return
     * less blocks than <b>MaxResults</b> or an empty array of blocks.</p> <p>To
     * retrieve the next set of blocks from the snapshot, make another request with the
     * returned <b>NextToken</b> value. The value of <b>NextToken</b> is
     * <code>null</code> when there are no more blocks to return.</p>
     */
    inline ListChangedBlocksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The block index from which the comparison should start.</p> <p>The list in
     * the response will start from this block index or the next valid block index in
     * the snapshots.</p> <p>If you specify <b>NextToken</b>, then
     * <b>StartingBlockIndex</b> is ignored.</p>
     */
    inline int GetStartingBlockIndex() const{ return m_startingBlockIndex; }

    /**
     * <p>The block index from which the comparison should start.</p> <p>The list in
     * the response will start from this block index or the next valid block index in
     * the snapshots.</p> <p>If you specify <b>NextToken</b>, then
     * <b>StartingBlockIndex</b> is ignored.</p>
     */
    inline bool StartingBlockIndexHasBeenSet() const { return m_startingBlockIndexHasBeenSet; }

    /**
     * <p>The block index from which the comparison should start.</p> <p>The list in
     * the response will start from this block index or the next valid block index in
     * the snapshots.</p> <p>If you specify <b>NextToken</b>, then
     * <b>StartingBlockIndex</b> is ignored.</p>
     */
    inline void SetStartingBlockIndex(int value) { m_startingBlockIndexHasBeenSet = true; m_startingBlockIndex = value; }

    /**
     * <p>The block index from which the comparison should start.</p> <p>The list in
     * the response will start from this block index or the next valid block index in
     * the snapshots.</p> <p>If you specify <b>NextToken</b>, then
     * <b>StartingBlockIndex</b> is ignored.</p>
     */
    inline ListChangedBlocksRequest& WithStartingBlockIndex(int value) { SetStartingBlockIndex(value); return *this;}

  private:

    Aws::String m_firstSnapshotId;
    bool m_firstSnapshotIdHasBeenSet = false;

    Aws::String m_secondSnapshotId;
    bool m_secondSnapshotIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    int m_startingBlockIndex;
    bool m_startingBlockIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace EBS
} // namespace Aws
