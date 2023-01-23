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
    AWS_LEXMODELSV2_API SearchAssociatedTranscriptsResult();
    AWS_LEXMODELSV2_API SearchAssociatedTranscriptsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API SearchAssociatedTranscriptsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the bot associated with the transcripts that you are
     * searching.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier of the bot associated with the transcripts that you are
     * searching.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The unique identifier of the bot associated with the transcripts that you are
     * searching.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The unique identifier of the bot associated with the transcripts that you are
     * searching.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The unique identifier of the bot associated with the transcripts that you are
     * searching.</p>
     */
    inline SearchAssociatedTranscriptsResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier of the bot associated with the transcripts that you are
     * searching.</p>
     */
    inline SearchAssociatedTranscriptsResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot associated with the transcripts that you are
     * searching.</p>
     */
    inline SearchAssociatedTranscriptsResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot containing the transcripts that you are searching.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot containing the transcripts that you are searching.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The version of the bot containing the transcripts that you are searching.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot containing the transcripts that you are searching.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The version of the bot containing the transcripts that you are searching.</p>
     */
    inline SearchAssociatedTranscriptsResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot containing the transcripts that you are searching.</p>
     */
    inline SearchAssociatedTranscriptsResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot containing the transcripts that you are searching.</p>
     */
    inline SearchAssociatedTranscriptsResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The identifier of the language and locale of the transcripts to search. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The identifier of the language and locale of the transcripts to search. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }

    /**
     * <p>The identifier of the language and locale of the transcripts to search. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }

    /**
     * <p>The identifier of the language and locale of the transcripts to search. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }

    /**
     * <p>The identifier of the language and locale of the transcripts to search. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline SearchAssociatedTranscriptsResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The identifier of the language and locale of the transcripts to search. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline SearchAssociatedTranscriptsResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the language and locale of the transcripts to search. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline SearchAssociatedTranscriptsResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p> The unique identifier of the bot recommendation associated with the
     * transcripts to search.</p>
     */
    inline const Aws::String& GetBotRecommendationId() const{ return m_botRecommendationId; }

    /**
     * <p> The unique identifier of the bot recommendation associated with the
     * transcripts to search.</p>
     */
    inline void SetBotRecommendationId(const Aws::String& value) { m_botRecommendationId = value; }

    /**
     * <p> The unique identifier of the bot recommendation associated with the
     * transcripts to search.</p>
     */
    inline void SetBotRecommendationId(Aws::String&& value) { m_botRecommendationId = std::move(value); }

    /**
     * <p> The unique identifier of the bot recommendation associated with the
     * transcripts to search.</p>
     */
    inline void SetBotRecommendationId(const char* value) { m_botRecommendationId.assign(value); }

    /**
     * <p> The unique identifier of the bot recommendation associated with the
     * transcripts to search.</p>
     */
    inline SearchAssociatedTranscriptsResult& WithBotRecommendationId(const Aws::String& value) { SetBotRecommendationId(value); return *this;}

    /**
     * <p> The unique identifier of the bot recommendation associated with the
     * transcripts to search.</p>
     */
    inline SearchAssociatedTranscriptsResult& WithBotRecommendationId(Aws::String&& value) { SetBotRecommendationId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier of the bot recommendation associated with the
     * transcripts to search.</p>
     */
    inline SearchAssociatedTranscriptsResult& WithBotRecommendationId(const char* value) { SetBotRecommendationId(value); return *this;}


    /**
     * <p>A index that indicates whether there are more results to return in a response
     * to the SearchAssociatedTranscripts operation. If the nextIndex field is present,
     * you send the contents as the nextIndex parameter of a
     * SearchAssociatedTranscriptsRequest operation to get the next page of
     * results.</p>
     */
    inline int GetNextIndex() const{ return m_nextIndex; }

    /**
     * <p>A index that indicates whether there are more results to return in a response
     * to the SearchAssociatedTranscripts operation. If the nextIndex field is present,
     * you send the contents as the nextIndex parameter of a
     * SearchAssociatedTranscriptsRequest operation to get the next page of
     * results.</p>
     */
    inline void SetNextIndex(int value) { m_nextIndex = value; }

    /**
     * <p>A index that indicates whether there are more results to return in a response
     * to the SearchAssociatedTranscripts operation. If the nextIndex field is present,
     * you send the contents as the nextIndex parameter of a
     * SearchAssociatedTranscriptsRequest operation to get the next page of
     * results.</p>
     */
    inline SearchAssociatedTranscriptsResult& WithNextIndex(int value) { SetNextIndex(value); return *this;}


    /**
     * <p>The object that contains the associated transcript that meet the criteria you
     * specified.</p>
     */
    inline const Aws::Vector<AssociatedTranscript>& GetAssociatedTranscripts() const{ return m_associatedTranscripts; }

    /**
     * <p>The object that contains the associated transcript that meet the criteria you
     * specified.</p>
     */
    inline void SetAssociatedTranscripts(const Aws::Vector<AssociatedTranscript>& value) { m_associatedTranscripts = value; }

    /**
     * <p>The object that contains the associated transcript that meet the criteria you
     * specified.</p>
     */
    inline void SetAssociatedTranscripts(Aws::Vector<AssociatedTranscript>&& value) { m_associatedTranscripts = std::move(value); }

    /**
     * <p>The object that contains the associated transcript that meet the criteria you
     * specified.</p>
     */
    inline SearchAssociatedTranscriptsResult& WithAssociatedTranscripts(const Aws::Vector<AssociatedTranscript>& value) { SetAssociatedTranscripts(value); return *this;}

    /**
     * <p>The object that contains the associated transcript that meet the criteria you
     * specified.</p>
     */
    inline SearchAssociatedTranscriptsResult& WithAssociatedTranscripts(Aws::Vector<AssociatedTranscript>&& value) { SetAssociatedTranscripts(std::move(value)); return *this;}

    /**
     * <p>The object that contains the associated transcript that meet the criteria you
     * specified.</p>
     */
    inline SearchAssociatedTranscriptsResult& AddAssociatedTranscripts(const AssociatedTranscript& value) { m_associatedTranscripts.push_back(value); return *this; }

    /**
     * <p>The object that contains the associated transcript that meet the criteria you
     * specified.</p>
     */
    inline SearchAssociatedTranscriptsResult& AddAssociatedTranscripts(AssociatedTranscript&& value) { m_associatedTranscripts.push_back(std::move(value)); return *this; }


    /**
     * <p>The total number of transcripts returned by the search.</p>
     */
    inline int GetTotalResults() const{ return m_totalResults; }

    /**
     * <p>The total number of transcripts returned by the search.</p>
     */
    inline void SetTotalResults(int value) { m_totalResults = value; }

    /**
     * <p>The total number of transcripts returned by the search.</p>
     */
    inline SearchAssociatedTranscriptsResult& WithTotalResults(int value) { SetTotalResults(value); return *this;}

  private:

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    Aws::String m_botRecommendationId;

    int m_nextIndex;

    Aws::Vector<AssociatedTranscript> m_associatedTranscripts;

    int m_totalResults;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
