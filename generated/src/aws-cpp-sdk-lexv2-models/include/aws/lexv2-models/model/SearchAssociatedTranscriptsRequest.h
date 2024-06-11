/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/SearchOrder.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/AssociatedTranscriptFilter.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class SearchAssociatedTranscriptsRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API SearchAssociatedTranscriptsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchAssociatedTranscripts"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the bot associated with the transcripts that you are
     * searching.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }
    inline SearchAssociatedTranscriptsRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline SearchAssociatedTranscriptsRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline SearchAssociatedTranscriptsRequest& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot containing the transcripts that you are searching.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }
    inline SearchAssociatedTranscriptsRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline SearchAssociatedTranscriptsRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline SearchAssociatedTranscriptsRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the language and locale of the transcripts to search. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }
    inline SearchAssociatedTranscriptsRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline SearchAssociatedTranscriptsRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline SearchAssociatedTranscriptsRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the bot recommendation associated with the
     * transcripts to search.</p>
     */
    inline const Aws::String& GetBotRecommendationId() const{ return m_botRecommendationId; }
    inline bool BotRecommendationIdHasBeenSet() const { return m_botRecommendationIdHasBeenSet; }
    inline void SetBotRecommendationId(const Aws::String& value) { m_botRecommendationIdHasBeenSet = true; m_botRecommendationId = value; }
    inline void SetBotRecommendationId(Aws::String&& value) { m_botRecommendationIdHasBeenSet = true; m_botRecommendationId = std::move(value); }
    inline void SetBotRecommendationId(const char* value) { m_botRecommendationIdHasBeenSet = true; m_botRecommendationId.assign(value); }
    inline SearchAssociatedTranscriptsRequest& WithBotRecommendationId(const Aws::String& value) { SetBotRecommendationId(value); return *this;}
    inline SearchAssociatedTranscriptsRequest& WithBotRecommendationId(Aws::String&& value) { SetBotRecommendationId(std::move(value)); return *this;}
    inline SearchAssociatedTranscriptsRequest& WithBotRecommendationId(const char* value) { SetBotRecommendationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How SearchResults are ordered. Valid values are Ascending or Descending. The
     * default is Descending.</p>
     */
    inline const SearchOrder& GetSearchOrder() const{ return m_searchOrder; }
    inline bool SearchOrderHasBeenSet() const { return m_searchOrderHasBeenSet; }
    inline void SetSearchOrder(const SearchOrder& value) { m_searchOrderHasBeenSet = true; m_searchOrder = value; }
    inline void SetSearchOrder(SearchOrder&& value) { m_searchOrderHasBeenSet = true; m_searchOrder = std::move(value); }
    inline SearchAssociatedTranscriptsRequest& WithSearchOrder(const SearchOrder& value) { SetSearchOrder(value); return *this;}
    inline SearchAssociatedTranscriptsRequest& WithSearchOrder(SearchOrder&& value) { SetSearchOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of filter objects.</p>
     */
    inline const Aws::Vector<AssociatedTranscriptFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<AssociatedTranscriptFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<AssociatedTranscriptFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline SearchAssociatedTranscriptsRequest& WithFilters(const Aws::Vector<AssociatedTranscriptFilter>& value) { SetFilters(value); return *this;}
    inline SearchAssociatedTranscriptsRequest& WithFilters(Aws::Vector<AssociatedTranscriptFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline SearchAssociatedTranscriptsRequest& AddFilters(const AssociatedTranscriptFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline SearchAssociatedTranscriptsRequest& AddFilters(AssociatedTranscriptFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
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
    inline SearchAssociatedTranscriptsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the response from the SearchAssociatedTranscriptsRequest operation
     * contains more results than specified in the maxResults parameter, an index is
     * returned in the response. Use that index in the nextIndex parameter to return
     * the next page of results.</p>
     */
    inline int GetNextIndex() const{ return m_nextIndex; }
    inline bool NextIndexHasBeenSet() const { return m_nextIndexHasBeenSet; }
    inline void SetNextIndex(int value) { m_nextIndexHasBeenSet = true; m_nextIndex = value; }
    inline SearchAssociatedTranscriptsRequest& WithNextIndex(int value) { SetNextIndex(value); return *this;}
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

    SearchOrder m_searchOrder;
    bool m_searchOrderHasBeenSet = false;

    Aws::Vector<AssociatedTranscriptFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    int m_nextIndex;
    bool m_nextIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
