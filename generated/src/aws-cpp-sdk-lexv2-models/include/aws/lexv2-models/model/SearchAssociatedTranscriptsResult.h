/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/AssociatedTranscript.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{
  class SearchAssociatedTranscriptsResult
  {
  public:
    AWS_LEXMODELSV2_API SearchAssociatedTranscriptsResult() = default;
    AWS_LEXMODELSV2_API SearchAssociatedTranscriptsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API SearchAssociatedTranscriptsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the bot associated with the transcripts that you are
     * searching.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    SearchAssociatedTranscriptsResult& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot containing the transcripts that you are searching.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    SearchAssociatedTranscriptsResult& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the language and locale of the transcripts to search. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    SearchAssociatedTranscriptsResult& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the bot recommendation associated with the
     * transcripts to search.</p>
     */
    inline const Aws::String& GetBotRecommendationId() const { return m_botRecommendationId; }
    template<typename BotRecommendationIdT = Aws::String>
    void SetBotRecommendationId(BotRecommendationIdT&& value) { m_botRecommendationIdHasBeenSet = true; m_botRecommendationId = std::forward<BotRecommendationIdT>(value); }
    template<typename BotRecommendationIdT = Aws::String>
    SearchAssociatedTranscriptsResult& WithBotRecommendationId(BotRecommendationIdT&& value) { SetBotRecommendationId(std::forward<BotRecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A index that indicates whether there are more results to return in a response
     * to the SearchAssociatedTranscripts operation. If the nextIndex field is present,
     * you send the contents as the nextIndex parameter of a
     * SearchAssociatedTranscriptsRequest operation to get the next page of
     * results.</p>
     */
    inline int GetNextIndex() const { return m_nextIndex; }
    inline void SetNextIndex(int value) { m_nextIndexHasBeenSet = true; m_nextIndex = value; }
    inline SearchAssociatedTranscriptsResult& WithNextIndex(int value) { SetNextIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object that contains the associated transcript that meet the criteria you
     * specified.</p>
     */
    inline const Aws::Vector<AssociatedTranscript>& GetAssociatedTranscripts() const { return m_associatedTranscripts; }
    template<typename AssociatedTranscriptsT = Aws::Vector<AssociatedTranscript>>
    void SetAssociatedTranscripts(AssociatedTranscriptsT&& value) { m_associatedTranscriptsHasBeenSet = true; m_associatedTranscripts = std::forward<AssociatedTranscriptsT>(value); }
    template<typename AssociatedTranscriptsT = Aws::Vector<AssociatedTranscript>>
    SearchAssociatedTranscriptsResult& WithAssociatedTranscripts(AssociatedTranscriptsT&& value) { SetAssociatedTranscripts(std::forward<AssociatedTranscriptsT>(value)); return *this;}
    template<typename AssociatedTranscriptsT = AssociatedTranscript>
    SearchAssociatedTranscriptsResult& AddAssociatedTranscripts(AssociatedTranscriptsT&& value) { m_associatedTranscriptsHasBeenSet = true; m_associatedTranscripts.emplace_back(std::forward<AssociatedTranscriptsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total number of transcripts returned by the search.</p>
     */
    inline int GetTotalResults() const { return m_totalResults; }
    inline void SetTotalResults(int value) { m_totalResultsHasBeenSet = true; m_totalResults = value; }
    inline SearchAssociatedTranscriptsResult& WithTotalResults(int value) { SetTotalResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchAssociatedTranscriptsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    int m_nextIndex{0};
    bool m_nextIndexHasBeenSet = false;

    Aws::Vector<AssociatedTranscript> m_associatedTranscripts;
    bool m_associatedTranscriptsHasBeenSet = false;

    int m_totalResults{0};
    bool m_totalResultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
