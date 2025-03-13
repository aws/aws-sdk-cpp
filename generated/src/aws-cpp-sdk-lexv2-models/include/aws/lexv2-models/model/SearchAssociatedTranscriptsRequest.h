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
    AWS_LEXMODELSV2_API SearchAssociatedTranscriptsRequest() = default;

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
    inline const Aws::String& GetBotId() const { return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    SearchAssociatedTranscriptsRequest& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot containing the transcripts that you are searching.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    SearchAssociatedTranscriptsRequest& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the language and locale of the transcripts to search. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    SearchAssociatedTranscriptsRequest& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the bot recommendation associated with the
     * transcripts to search.</p>
     */
    inline const Aws::String& GetBotRecommendationId() const { return m_botRecommendationId; }
    inline bool BotRecommendationIdHasBeenSet() const { return m_botRecommendationIdHasBeenSet; }
    template<typename BotRecommendationIdT = Aws::String>
    void SetBotRecommendationId(BotRecommendationIdT&& value) { m_botRecommendationIdHasBeenSet = true; m_botRecommendationId = std::forward<BotRecommendationIdT>(value); }
    template<typename BotRecommendationIdT = Aws::String>
    SearchAssociatedTranscriptsRequest& WithBotRecommendationId(BotRecommendationIdT&& value) { SetBotRecommendationId(std::forward<BotRecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How SearchResults are ordered. Valid values are Ascending or Descending. The
     * default is Descending.</p>
     */
    inline SearchOrder GetSearchOrder() const { return m_searchOrder; }
    inline bool SearchOrderHasBeenSet() const { return m_searchOrderHasBeenSet; }
    inline void SetSearchOrder(SearchOrder value) { m_searchOrderHasBeenSet = true; m_searchOrder = value; }
    inline SearchAssociatedTranscriptsRequest& WithSearchOrder(SearchOrder value) { SetSearchOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of filter objects.</p>
     */
    inline const Aws::Vector<AssociatedTranscriptFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<AssociatedTranscriptFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<AssociatedTranscriptFilter>>
    SearchAssociatedTranscriptsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = AssociatedTranscriptFilter>
    SearchAssociatedTranscriptsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of bot recommendations to return in each page of results.
     * If there are fewer results than the max page size, only the actual number of
     * results are returned.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
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
    inline int GetNextIndex() const { return m_nextIndex; }
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

    SearchOrder m_searchOrder{SearchOrder::NOT_SET};
    bool m_searchOrderHasBeenSet = false;

    Aws::Vector<AssociatedTranscriptFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    int m_nextIndex{0};
    bool m_nextIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
