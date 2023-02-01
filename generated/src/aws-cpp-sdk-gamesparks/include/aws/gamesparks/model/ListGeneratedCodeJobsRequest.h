/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/gamesparks/GameSparksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace GameSparks
{
namespace Model
{

  /**
   */
  class ListGeneratedCodeJobsRequest : public GameSparksRequest
  {
  public:
    AWS_GAMESPARKS_API ListGeneratedCodeJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListGeneratedCodeJobs"; }

    AWS_GAMESPARKS_API Aws::String SerializePayload() const override;

    AWS_GAMESPARKS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the game.</p>
     */
    inline const Aws::String& GetGameName() const{ return m_gameName; }

    /**
     * <p>The name of the game.</p>
     */
    inline bool GameNameHasBeenSet() const { return m_gameNameHasBeenSet; }

    /**
     * <p>The name of the game.</p>
     */
    inline void SetGameName(const Aws::String& value) { m_gameNameHasBeenSet = true; m_gameName = value; }

    /**
     * <p>The name of the game.</p>
     */
    inline void SetGameName(Aws::String&& value) { m_gameNameHasBeenSet = true; m_gameName = std::move(value); }

    /**
     * <p>The name of the game.</p>
     */
    inline void SetGameName(const char* value) { m_gameNameHasBeenSet = true; m_gameName.assign(value); }

    /**
     * <p>The name of the game.</p>
     */
    inline ListGeneratedCodeJobsRequest& WithGameName(const Aws::String& value) { SetGameName(value); return *this;}

    /**
     * <p>The name of the game.</p>
     */
    inline ListGeneratedCodeJobsRequest& WithGameName(Aws::String&& value) { SetGameName(std::move(value)); return *this;}

    /**
     * <p>The name of the game.</p>
     */
    inline ListGeneratedCodeJobsRequest& WithGameName(const char* value) { SetGameName(value); return *this;}


    /**
     * <p>The maximum number of results to return.</p> <p> Use this parameter with
     * NextToken to get results as a set of sequential pages. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return.</p> <p> Use this parameter with
     * NextToken to get results as a set of sequential pages. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return.</p> <p> Use this parameter with
     * NextToken to get results as a set of sequential pages. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return.</p> <p> Use this parameter with
     * NextToken to get results as a set of sequential pages. </p>
     */
    inline ListGeneratedCodeJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use the token that is returned with a previous call to this
     * operation. To start at the beginning of the result set, do not specify a value.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use the token that is returned with a previous call to this
     * operation. To start at the beginning of the result set, do not specify a value.
     * </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use the token that is returned with a previous call to this
     * operation. To start at the beginning of the result set, do not specify a value.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use the token that is returned with a previous call to this
     * operation. To start at the beginning of the result set, do not specify a value.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use the token that is returned with a previous call to this
     * operation. To start at the beginning of the result set, do not specify a value.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use the token that is returned with a previous call to this
     * operation. To start at the beginning of the result set, do not specify a value.
     * </p>
     */
    inline ListGeneratedCodeJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use the token that is returned with a previous call to this
     * operation. To start at the beginning of the result set, do not specify a value.
     * </p>
     */
    inline ListGeneratedCodeJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use the token that is returned with a previous call to this
     * operation. To start at the beginning of the result set, do not specify a value.
     * </p>
     */
    inline ListGeneratedCodeJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The identifier of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The identifier of the snapshot.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The identifier of the snapshot.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The identifier of the snapshot.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The identifier of the snapshot.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The identifier of the snapshot.</p>
     */
    inline ListGeneratedCodeJobsRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The identifier of the snapshot.</p>
     */
    inline ListGeneratedCodeJobsRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the snapshot.</p>
     */
    inline ListGeneratedCodeJobsRequest& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}

  private:

    Aws::String m_gameName;
    bool m_gameNameHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
