/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/UtteranceAggregationDuration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/AggregatedUtterancesSummary.h>
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
  class ListAggregatedUtterancesResult
  {
  public:
    AWS_LEXMODELSV2_API ListAggregatedUtterancesResult();
    AWS_LEXMODELSV2_API ListAggregatedUtterancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListAggregatedUtterancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the bot that contains the utterances.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot that contains the utterances.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The identifier of the bot that contains the utterances.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot that contains the utterances.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The identifier of the bot that contains the utterances.</p>
     */
    inline ListAggregatedUtterancesResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot that contains the utterances.</p>
     */
    inline ListAggregatedUtterancesResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot that contains the utterances.</p>
     */
    inline ListAggregatedUtterancesResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The identifier of the bot alias that contains the utterances. If you
     * specified the bot version, the bot alias ID isn't returned.</p>
     */
    inline const Aws::String& GetBotAliasId() const{ return m_botAliasId; }

    /**
     * <p>The identifier of the bot alias that contains the utterances. If you
     * specified the bot version, the bot alias ID isn't returned.</p>
     */
    inline void SetBotAliasId(const Aws::String& value) { m_botAliasId = value; }

    /**
     * <p>The identifier of the bot alias that contains the utterances. If you
     * specified the bot version, the bot alias ID isn't returned.</p>
     */
    inline void SetBotAliasId(Aws::String&& value) { m_botAliasId = std::move(value); }

    /**
     * <p>The identifier of the bot alias that contains the utterances. If you
     * specified the bot version, the bot alias ID isn't returned.</p>
     */
    inline void SetBotAliasId(const char* value) { m_botAliasId.assign(value); }

    /**
     * <p>The identifier of the bot alias that contains the utterances. If you
     * specified the bot version, the bot alias ID isn't returned.</p>
     */
    inline ListAggregatedUtterancesResult& WithBotAliasId(const Aws::String& value) { SetBotAliasId(value); return *this;}

    /**
     * <p>The identifier of the bot alias that contains the utterances. If you
     * specified the bot version, the bot alias ID isn't returned.</p>
     */
    inline ListAggregatedUtterancesResult& WithBotAliasId(Aws::String&& value) { SetBotAliasId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot alias that contains the utterances. If you
     * specified the bot version, the bot alias ID isn't returned.</p>
     */
    inline ListAggregatedUtterancesResult& WithBotAliasId(const char* value) { SetBotAliasId(value); return *this;}


    /**
     * <p>The identifier of the bot version that contains the utterances. If you
     * specified the bot alias, the bot version isn't returned.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The identifier of the bot version that contains the utterances. If you
     * specified the bot alias, the bot version isn't returned.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The identifier of the bot version that contains the utterances. If you
     * specified the bot alias, the bot version isn't returned.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The identifier of the bot version that contains the utterances. If you
     * specified the bot alias, the bot version isn't returned.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The identifier of the bot version that contains the utterances. If you
     * specified the bot alias, the bot version isn't returned.</p>
     */
    inline ListAggregatedUtterancesResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The identifier of the bot version that contains the utterances. If you
     * specified the bot alias, the bot version isn't returned.</p>
     */
    inline ListAggregatedUtterancesResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot version that contains the utterances. If you
     * specified the bot alias, the bot version isn't returned.</p>
     */
    inline ListAggregatedUtterancesResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The identifier of the language and locale that the utterances are in.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The identifier of the language and locale that the utterances are in.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }

    /**
     * <p>The identifier of the language and locale that the utterances are in.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }

    /**
     * <p>The identifier of the language and locale that the utterances are in.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }

    /**
     * <p>The identifier of the language and locale that the utterances are in.</p>
     */
    inline ListAggregatedUtterancesResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The identifier of the language and locale that the utterances are in.</p>
     */
    inline ListAggregatedUtterancesResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the language and locale that the utterances are in.</p>
     */
    inline ListAggregatedUtterancesResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The time period used to aggregate the utterance data.</p>
     */
    inline const UtteranceAggregationDuration& GetAggregationDuration() const{ return m_aggregationDuration; }

    /**
     * <p>The time period used to aggregate the utterance data.</p>
     */
    inline void SetAggregationDuration(const UtteranceAggregationDuration& value) { m_aggregationDuration = value; }

    /**
     * <p>The time period used to aggregate the utterance data.</p>
     */
    inline void SetAggregationDuration(UtteranceAggregationDuration&& value) { m_aggregationDuration = std::move(value); }

    /**
     * <p>The time period used to aggregate the utterance data.</p>
     */
    inline ListAggregatedUtterancesResult& WithAggregationDuration(const UtteranceAggregationDuration& value) { SetAggregationDuration(value); return *this;}

    /**
     * <p>The time period used to aggregate the utterance data.</p>
     */
    inline ListAggregatedUtterancesResult& WithAggregationDuration(UtteranceAggregationDuration&& value) { SetAggregationDuration(std::move(value)); return *this;}


    /**
     * <p>The date and time that the aggregation window begins. Only data collected
     * after this time is returned in the results.</p>
     */
    inline const Aws::Utils::DateTime& GetAggregationWindowStartTime() const{ return m_aggregationWindowStartTime; }

    /**
     * <p>The date and time that the aggregation window begins. Only data collected
     * after this time is returned in the results.</p>
     */
    inline void SetAggregationWindowStartTime(const Aws::Utils::DateTime& value) { m_aggregationWindowStartTime = value; }

    /**
     * <p>The date and time that the aggregation window begins. Only data collected
     * after this time is returned in the results.</p>
     */
    inline void SetAggregationWindowStartTime(Aws::Utils::DateTime&& value) { m_aggregationWindowStartTime = std::move(value); }

    /**
     * <p>The date and time that the aggregation window begins. Only data collected
     * after this time is returned in the results.</p>
     */
    inline ListAggregatedUtterancesResult& WithAggregationWindowStartTime(const Aws::Utils::DateTime& value) { SetAggregationWindowStartTime(value); return *this;}

    /**
     * <p>The date and time that the aggregation window begins. Only data collected
     * after this time is returned in the results.</p>
     */
    inline ListAggregatedUtterancesResult& WithAggregationWindowStartTime(Aws::Utils::DateTime&& value) { SetAggregationWindowStartTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the aggregation window ends. Only data collected
     * between the start time and the end time are returned in the results. </p>
     */
    inline const Aws::Utils::DateTime& GetAggregationWindowEndTime() const{ return m_aggregationWindowEndTime; }

    /**
     * <p>The date and time that the aggregation window ends. Only data collected
     * between the start time and the end time are returned in the results. </p>
     */
    inline void SetAggregationWindowEndTime(const Aws::Utils::DateTime& value) { m_aggregationWindowEndTime = value; }

    /**
     * <p>The date and time that the aggregation window ends. Only data collected
     * between the start time and the end time are returned in the results. </p>
     */
    inline void SetAggregationWindowEndTime(Aws::Utils::DateTime&& value) { m_aggregationWindowEndTime = std::move(value); }

    /**
     * <p>The date and time that the aggregation window ends. Only data collected
     * between the start time and the end time are returned in the results. </p>
     */
    inline ListAggregatedUtterancesResult& WithAggregationWindowEndTime(const Aws::Utils::DateTime& value) { SetAggregationWindowEndTime(value); return *this;}

    /**
     * <p>The date and time that the aggregation window ends. Only data collected
     * between the start time and the end time are returned in the results. </p>
     */
    inline ListAggregatedUtterancesResult& WithAggregationWindowEndTime(Aws::Utils::DateTime&& value) { SetAggregationWindowEndTime(std::move(value)); return *this;}


    /**
     * <p>The last date and time that the aggregated data was collected. The time
     * period depends on the length of the aggregation window.</p> <ul> <li> <p>
     * <b>Hours</b> - for 1 hour time window, every half hour; otherwise every
     * hour.</p> </li> <li> <p> <b>Days</b> - every 6 hours</p> </li> <li> <p>
     * <b>Weeks</b> - for a one week time window, every 12 hours; otherwise, every
     * day</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetAggregationLastRefreshedDateTime() const{ return m_aggregationLastRefreshedDateTime; }

    /**
     * <p>The last date and time that the aggregated data was collected. The time
     * period depends on the length of the aggregation window.</p> <ul> <li> <p>
     * <b>Hours</b> - for 1 hour time window, every half hour; otherwise every
     * hour.</p> </li> <li> <p> <b>Days</b> - every 6 hours</p> </li> <li> <p>
     * <b>Weeks</b> - for a one week time window, every 12 hours; otherwise, every
     * day</p> </li> </ul>
     */
    inline void SetAggregationLastRefreshedDateTime(const Aws::Utils::DateTime& value) { m_aggregationLastRefreshedDateTime = value; }

    /**
     * <p>The last date and time that the aggregated data was collected. The time
     * period depends on the length of the aggregation window.</p> <ul> <li> <p>
     * <b>Hours</b> - for 1 hour time window, every half hour; otherwise every
     * hour.</p> </li> <li> <p> <b>Days</b> - every 6 hours</p> </li> <li> <p>
     * <b>Weeks</b> - for a one week time window, every 12 hours; otherwise, every
     * day</p> </li> </ul>
     */
    inline void SetAggregationLastRefreshedDateTime(Aws::Utils::DateTime&& value) { m_aggregationLastRefreshedDateTime = std::move(value); }

    /**
     * <p>The last date and time that the aggregated data was collected. The time
     * period depends on the length of the aggregation window.</p> <ul> <li> <p>
     * <b>Hours</b> - for 1 hour time window, every half hour; otherwise every
     * hour.</p> </li> <li> <p> <b>Days</b> - every 6 hours</p> </li> <li> <p>
     * <b>Weeks</b> - for a one week time window, every 12 hours; otherwise, every
     * day</p> </li> </ul>
     */
    inline ListAggregatedUtterancesResult& WithAggregationLastRefreshedDateTime(const Aws::Utils::DateTime& value) { SetAggregationLastRefreshedDateTime(value); return *this;}

    /**
     * <p>The last date and time that the aggregated data was collected. The time
     * period depends on the length of the aggregation window.</p> <ul> <li> <p>
     * <b>Hours</b> - for 1 hour time window, every half hour; otherwise every
     * hour.</p> </li> <li> <p> <b>Days</b> - every 6 hours</p> </li> <li> <p>
     * <b>Weeks</b> - for a one week time window, every 12 hours; otherwise, every
     * day</p> </li> </ul>
     */
    inline ListAggregatedUtterancesResult& WithAggregationLastRefreshedDateTime(Aws::Utils::DateTime&& value) { SetAggregationLastRefreshedDateTime(std::move(value)); return *this;}


    /**
     * <p>Summaries of the aggregated utterance data. Each response contains
     * information about the number of times that the utterance was seen during the
     * time period, whether it was detected or missed, and when it was seen during the
     * time period.</p>
     */
    inline const Aws::Vector<AggregatedUtterancesSummary>& GetAggregatedUtterancesSummaries() const{ return m_aggregatedUtterancesSummaries; }

    /**
     * <p>Summaries of the aggregated utterance data. Each response contains
     * information about the number of times that the utterance was seen during the
     * time period, whether it was detected or missed, and when it was seen during the
     * time period.</p>
     */
    inline void SetAggregatedUtterancesSummaries(const Aws::Vector<AggregatedUtterancesSummary>& value) { m_aggregatedUtterancesSummaries = value; }

    /**
     * <p>Summaries of the aggregated utterance data. Each response contains
     * information about the number of times that the utterance was seen during the
     * time period, whether it was detected or missed, and when it was seen during the
     * time period.</p>
     */
    inline void SetAggregatedUtterancesSummaries(Aws::Vector<AggregatedUtterancesSummary>&& value) { m_aggregatedUtterancesSummaries = std::move(value); }

    /**
     * <p>Summaries of the aggregated utterance data. Each response contains
     * information about the number of times that the utterance was seen during the
     * time period, whether it was detected or missed, and when it was seen during the
     * time period.</p>
     */
    inline ListAggregatedUtterancesResult& WithAggregatedUtterancesSummaries(const Aws::Vector<AggregatedUtterancesSummary>& value) { SetAggregatedUtterancesSummaries(value); return *this;}

    /**
     * <p>Summaries of the aggregated utterance data. Each response contains
     * information about the number of times that the utterance was seen during the
     * time period, whether it was detected or missed, and when it was seen during the
     * time period.</p>
     */
    inline ListAggregatedUtterancesResult& WithAggregatedUtterancesSummaries(Aws::Vector<AggregatedUtterancesSummary>&& value) { SetAggregatedUtterancesSummaries(std::move(value)); return *this;}

    /**
     * <p>Summaries of the aggregated utterance data. Each response contains
     * information about the number of times that the utterance was seen during the
     * time period, whether it was detected or missed, and when it was seen during the
     * time period.</p>
     */
    inline ListAggregatedUtterancesResult& AddAggregatedUtterancesSummaries(const AggregatedUtterancesSummary& value) { m_aggregatedUtterancesSummaries.push_back(value); return *this; }

    /**
     * <p>Summaries of the aggregated utterance data. Each response contains
     * information about the number of times that the utterance was seen during the
     * time period, whether it was detected or missed, and when it was seen during the
     * time period.</p>
     */
    inline ListAggregatedUtterancesResult& AddAggregatedUtterancesSummaries(AggregatedUtterancesSummary&& value) { m_aggregatedUtterancesSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListAggregatedUtterances</code> operation. If the
     * <code>nextToken</code> field is present, you send the contents as the
     * <code>nextToken</code> parameter of a <code>ListAggregatedUtterances</code>
     * operation request to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListAggregatedUtterances</code> operation. If the
     * <code>nextToken</code> field is present, you send the contents as the
     * <code>nextToken</code> parameter of a <code>ListAggregatedUtterances</code>
     * operation request to get the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListAggregatedUtterances</code> operation. If the
     * <code>nextToken</code> field is present, you send the contents as the
     * <code>nextToken</code> parameter of a <code>ListAggregatedUtterances</code>
     * operation request to get the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListAggregatedUtterances</code> operation. If the
     * <code>nextToken</code> field is present, you send the contents as the
     * <code>nextToken</code> parameter of a <code>ListAggregatedUtterances</code>
     * operation request to get the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListAggregatedUtterances</code> operation. If the
     * <code>nextToken</code> field is present, you send the contents as the
     * <code>nextToken</code> parameter of a <code>ListAggregatedUtterances</code>
     * operation request to get the next page of results.</p>
     */
    inline ListAggregatedUtterancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListAggregatedUtterances</code> operation. If the
     * <code>nextToken</code> field is present, you send the contents as the
     * <code>nextToken</code> parameter of a <code>ListAggregatedUtterances</code>
     * operation request to get the next page of results.</p>
     */
    inline ListAggregatedUtterancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListAggregatedUtterances</code> operation. If the
     * <code>nextToken</code> field is present, you send the contents as the
     * <code>nextToken</code> parameter of a <code>ListAggregatedUtterances</code>
     * operation request to get the next page of results.</p>
     */
    inline ListAggregatedUtterancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_botId;

    Aws::String m_botAliasId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    UtteranceAggregationDuration m_aggregationDuration;

    Aws::Utils::DateTime m_aggregationWindowStartTime;

    Aws::Utils::DateTime m_aggregationWindowEndTime;

    Aws::Utils::DateTime m_aggregationLastRefreshedDateTime;

    Aws::Vector<AggregatedUtterancesSummary> m_aggregatedUtterancesSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
