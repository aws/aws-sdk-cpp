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
  class AWS_EBS_API ListChangedBlocksRequest : public EBSRequest
  {
  public:
    ListChangedBlocksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListChangedBlocks"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
     * <p>The token to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline ListChangedBlocksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline ListChangedBlocksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline ListChangedBlocksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The number of results to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The number of results to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The number of results to return.</p>
     */
    inline ListChangedBlocksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The block index from which the comparison should start.</p> <p>The list in
     * the response will start from this block index or the next valid block index in
     * the snapshots.</p>
     */
    inline int GetStartingBlockIndex() const{ return m_startingBlockIndex; }

    /**
     * <p>The block index from which the comparison should start.</p> <p>The list in
     * the response will start from this block index or the next valid block index in
     * the snapshots.</p>
     */
    inline bool StartingBlockIndexHasBeenSet() const { return m_startingBlockIndexHasBeenSet; }

    /**
     * <p>The block index from which the comparison should start.</p> <p>The list in
     * the response will start from this block index or the next valid block index in
     * the snapshots.</p>
     */
    inline void SetStartingBlockIndex(int value) { m_startingBlockIndexHasBeenSet = true; m_startingBlockIndex = value; }

    /**
     * <p>The block index from which the comparison should start.</p> <p>The list in
     * the response will start from this block index or the next valid block index in
     * the snapshots.</p>
     */
    inline ListChangedBlocksRequest& WithStartingBlockIndex(int value) { SetStartingBlockIndex(value); return *this;}

  private:

    Aws::String m_firstSnapshotId;
    bool m_firstSnapshotIdHasBeenSet;

    Aws::String m_secondSnapshotId;
    bool m_secondSnapshotIdHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    int m_startingBlockIndex;
    bool m_startingBlockIndexHasBeenSet;
  };

} // namespace Model
} // namespace EBS
} // namespace Aws
