﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BotVersionSortBy.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class AWS_LEXMODELSV2_API ListBotVersionsRequest : public LexModelsV2Request
  {
  public:
    ListBotVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBotVersions"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the bot to list versions for.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot to list versions for.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The identifier of the bot to list versions for.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The identifier of the bot to list versions for.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot to list versions for.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The identifier of the bot to list versions for.</p>
     */
    inline ListBotVersionsRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot to list versions for.</p>
     */
    inline ListBotVersionsRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot to list versions for.</p>
     */
    inline ListBotVersionsRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>Specifies sorting parameters for the list of versions. You can specify that
     * the list be sorted by version name in either ascending or descending order.</p>
     */
    inline const BotVersionSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>Specifies sorting parameters for the list of versions. You can specify that
     * the list be sorted by version name in either ascending or descending order.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>Specifies sorting parameters for the list of versions. You can specify that
     * the list be sorted by version name in either ascending or descending order.</p>
     */
    inline void SetSortBy(const BotVersionSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>Specifies sorting parameters for the list of versions. You can specify that
     * the list be sorted by version name in either ascending or descending order.</p>
     */
    inline void SetSortBy(BotVersionSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>Specifies sorting parameters for the list of versions. You can specify that
     * the list be sorted by version name in either ascending or descending order.</p>
     */
    inline ListBotVersionsRequest& WithSortBy(const BotVersionSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>Specifies sorting parameters for the list of versions. You can specify that
     * the list be sorted by version name in either ascending or descending order.</p>
     */
    inline ListBotVersionsRequest& WithSortBy(BotVersionSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The maximum number of versions to return in each page of results. If there
     * are fewer results than the max page size, only the actual number of results are
     * returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of versions to return in each page of results. If there
     * are fewer results than the max page size, only the actual number of results are
     * returned.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of versions to return in each page of results. If there
     * are fewer results than the max page size, only the actual number of results are
     * returned.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of versions to return in each page of results. If there
     * are fewer results than the max page size, only the actual number of results are
     * returned.</p>
     */
    inline ListBotVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the response to the <code>ListBotVersion</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token in the <code>nextToken</code> parameter
     * to return the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response to the <code>ListBotVersion</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token in the <code>nextToken</code> parameter
     * to return the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the response to the <code>ListBotVersion</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token in the <code>nextToken</code> parameter
     * to return the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the response to the <code>ListBotVersion</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token in the <code>nextToken</code> parameter
     * to return the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the response to the <code>ListBotVersion</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token in the <code>nextToken</code> parameter
     * to return the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the response to the <code>ListBotVersion</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token in the <code>nextToken</code> parameter
     * to return the next page of results.</p>
     */
    inline ListBotVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response to the <code>ListBotVersion</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token in the <code>nextToken</code> parameter
     * to return the next page of results.</p>
     */
    inline ListBotVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response to the <code>ListBotVersion</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token in the <code>nextToken</code> parameter
     * to return the next page of results.</p>
     */
    inline ListBotVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet;

    BotVersionSortBy m_sortBy;
    bool m_sortByHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
