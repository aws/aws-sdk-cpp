/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/GenerationSortBy.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class ListBotResourceGenerationsRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API ListBotResourceGenerationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBotResourceGenerations"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the bot whose generation requests you want to
     * view.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier of the bot whose generation requests you want to
     * view.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The unique identifier of the bot whose generation requests you want to
     * view.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The unique identifier of the bot whose generation requests you want to
     * view.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The unique identifier of the bot whose generation requests you want to
     * view.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The unique identifier of the bot whose generation requests you want to
     * view.</p>
     */
    inline ListBotResourceGenerationsRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier of the bot whose generation requests you want to
     * view.</p>
     */
    inline ListBotResourceGenerationsRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot whose generation requests you want to
     * view.</p>
     */
    inline ListBotResourceGenerationsRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot whose generation requests you want to view.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot whose generation requests you want to view.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The version of the bot whose generation requests you want to view.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The version of the bot whose generation requests you want to view.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot whose generation requests you want to view.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The version of the bot whose generation requests you want to view.</p>
     */
    inline ListBotResourceGenerationsRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot whose generation requests you want to view.</p>
     */
    inline ListBotResourceGenerationsRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot whose generation requests you want to view.</p>
     */
    inline ListBotResourceGenerationsRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The locale of the bot whose generation requests you want to view.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The locale of the bot whose generation requests you want to view.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>The locale of the bot whose generation requests you want to view.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>The locale of the bot whose generation requests you want to view.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>The locale of the bot whose generation requests you want to view.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>The locale of the bot whose generation requests you want to view.</p>
     */
    inline ListBotResourceGenerationsRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The locale of the bot whose generation requests you want to view.</p>
     */
    inline ListBotResourceGenerationsRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The locale of the bot whose generation requests you want to view.</p>
     */
    inline ListBotResourceGenerationsRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>An object containing information about the attribute and the method by which
     * to sort the results</p>
     */
    inline const GenerationSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>An object containing information about the attribute and the method by which
     * to sort the results</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>An object containing information about the attribute and the method by which
     * to sort the results</p>
     */
    inline void SetSortBy(const GenerationSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>An object containing information about the attribute and the method by which
     * to sort the results</p>
     */
    inline void SetSortBy(GenerationSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>An object containing information about the attribute and the method by which
     * to sort the results</p>
     */
    inline ListBotResourceGenerationsRequest& WithSortBy(const GenerationSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>An object containing information about the attribute and the method by which
     * to sort the results</p>
     */
    inline ListBotResourceGenerationsRequest& WithSortBy(GenerationSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline ListBotResourceGenerationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the total number of results is greater than the number specified in the
     * <code>maxResults</code>, the response returns a token in the
     * <code>nextToken</code> field. Use this token when making a request to return the
     * next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the total number of results is greater than the number specified in the
     * <code>maxResults</code>, the response returns a token in the
     * <code>nextToken</code> field. Use this token when making a request to return the
     * next batch of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the total number of results is greater than the number specified in the
     * <code>maxResults</code>, the response returns a token in the
     * <code>nextToken</code> field. Use this token when making a request to return the
     * next batch of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the total number of results is greater than the number specified in the
     * <code>maxResults</code>, the response returns a token in the
     * <code>nextToken</code> field. Use this token when making a request to return the
     * next batch of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the total number of results is greater than the number specified in the
     * <code>maxResults</code>, the response returns a token in the
     * <code>nextToken</code> field. Use this token when making a request to return the
     * next batch of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the total number of results is greater than the number specified in the
     * <code>maxResults</code>, the response returns a token in the
     * <code>nextToken</code> field. Use this token when making a request to return the
     * next batch of results.</p>
     */
    inline ListBotResourceGenerationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the total number of results is greater than the number specified in the
     * <code>maxResults</code>, the response returns a token in the
     * <code>nextToken</code> field. Use this token when making a request to return the
     * next batch of results.</p>
     */
    inline ListBotResourceGenerationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the total number of results is greater than the number specified in the
     * <code>maxResults</code>, the response returns a token in the
     * <code>nextToken</code> field. Use this token when making a request to return the
     * next batch of results.</p>
     */
    inline ListBotResourceGenerationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    GenerationSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
