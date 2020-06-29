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
  class AWS_EBS_API ListSnapshotBlocksRequest : public EBSRequest
  {
  public:
    ListSnapshotBlocksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSnapshotBlocks"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the snapshot from which to get block indexes and block tokens.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the snapshot from which to get block indexes and block tokens.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The ID of the snapshot from which to get block indexes and block tokens.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The ID of the snapshot from which to get block indexes and block tokens.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The ID of the snapshot from which to get block indexes and block tokens.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The ID of the snapshot from which to get block indexes and block tokens.</p>
     */
    inline ListSnapshotBlocksRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot from which to get block indexes and block tokens.</p>
     */
    inline ListSnapshotBlocksRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot from which to get block indexes and block tokens.</p>
     */
    inline ListSnapshotBlocksRequest& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


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
    inline ListSnapshotBlocksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline ListSnapshotBlocksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline ListSnapshotBlocksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListSnapshotBlocksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The block index from which the list should start. The list in the response
     * will start from this block index or the next valid block index in the
     * snapshot.</p>
     */
    inline int GetStartingBlockIndex() const{ return m_startingBlockIndex; }

    /**
     * <p>The block index from which the list should start. The list in the response
     * will start from this block index or the next valid block index in the
     * snapshot.</p>
     */
    inline bool StartingBlockIndexHasBeenSet() const { return m_startingBlockIndexHasBeenSet; }

    /**
     * <p>The block index from which the list should start. The list in the response
     * will start from this block index or the next valid block index in the
     * snapshot.</p>
     */
    inline void SetStartingBlockIndex(int value) { m_startingBlockIndexHasBeenSet = true; m_startingBlockIndex = value; }

    /**
     * <p>The block index from which the list should start. The list in the response
     * will start from this block index or the next valid block index in the
     * snapshot.</p>
     */
    inline ListSnapshotBlocksRequest& WithStartingBlockIndex(int value) { SetStartingBlockIndex(value); return *this;}

  private:

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet;

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
