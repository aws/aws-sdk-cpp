﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class ListRecommendedIntentsRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API ListRecommendedIntentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRecommendedIntents"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the bot associated with the recommended intents.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }
    inline ListRecommendedIntentsRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline ListRecommendedIntentsRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline ListRecommendedIntentsRequest& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot that contains the recommended intents.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }
    inline ListRecommendedIntentsRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline ListRecommendedIntentsRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline ListRecommendedIntentsRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the language and locale of the recommended intents.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }
    inline ListRecommendedIntentsRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline ListRecommendedIntentsRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline ListRecommendedIntentsRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bot recommendation that contains the recommended
     * intents.</p>
     */
    inline const Aws::String& GetBotRecommendationId() const{ return m_botRecommendationId; }
    inline bool BotRecommendationIdHasBeenSet() const { return m_botRecommendationIdHasBeenSet; }
    inline void SetBotRecommendationId(const Aws::String& value) { m_botRecommendationIdHasBeenSet = true; m_botRecommendationId = value; }
    inline void SetBotRecommendationId(Aws::String&& value) { m_botRecommendationIdHasBeenSet = true; m_botRecommendationId = std::move(value); }
    inline void SetBotRecommendationId(const char* value) { m_botRecommendationIdHasBeenSet = true; m_botRecommendationId.assign(value); }
    inline ListRecommendedIntentsRequest& WithBotRecommendationId(const Aws::String& value) { SetBotRecommendationId(value); return *this;}
    inline ListRecommendedIntentsRequest& WithBotRecommendationId(Aws::String&& value) { SetBotRecommendationId(std::move(value)); return *this;}
    inline ListRecommendedIntentsRequest& WithBotRecommendationId(const char* value) { SetBotRecommendationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the response from the ListRecommendedIntents operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response. Use that token in the nextToken parameter to return the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListRecommendedIntentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRecommendedIntentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRecommendedIntentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of bot recommendations to return in each page of results.
     * If there are fewer results than the max page size, only the actual number of
     * results are returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRecommendedIntentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    Aws::String m_botRecommendationId;
    bool m_botRecommendationIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
