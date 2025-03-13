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
    AWS_LEXMODELSV2_API ListAggregatedUtterancesResult() = default;
    AWS_LEXMODELSV2_API ListAggregatedUtterancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListAggregatedUtterancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the bot that contains the utterances.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    ListAggregatedUtterancesResult& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bot alias that contains the utterances. If you
     * specified the bot version, the bot alias ID isn't returned.</p>
     */
    inline const Aws::String& GetBotAliasId() const { return m_botAliasId; }
    template<typename BotAliasIdT = Aws::String>
    void SetBotAliasId(BotAliasIdT&& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = std::forward<BotAliasIdT>(value); }
    template<typename BotAliasIdT = Aws::String>
    ListAggregatedUtterancesResult& WithBotAliasId(BotAliasIdT&& value) { SetBotAliasId(std::forward<BotAliasIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bot version that contains the utterances. If you
     * specified the bot alias, the bot version isn't returned.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    ListAggregatedUtterancesResult& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the language and locale that the utterances are in.</p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    ListAggregatedUtterancesResult& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time period used to aggregate the utterance data.</p>
     */
    inline const UtteranceAggregationDuration& GetAggregationDuration() const { return m_aggregationDuration; }
    template<typename AggregationDurationT = UtteranceAggregationDuration>
    void SetAggregationDuration(AggregationDurationT&& value) { m_aggregationDurationHasBeenSet = true; m_aggregationDuration = std::forward<AggregationDurationT>(value); }
    template<typename AggregationDurationT = UtteranceAggregationDuration>
    ListAggregatedUtterancesResult& WithAggregationDuration(AggregationDurationT&& value) { SetAggregationDuration(std::forward<AggregationDurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the aggregation window begins. Only data collected
     * after this time is returned in the results.</p>
     */
    inline const Aws::Utils::DateTime& GetAggregationWindowStartTime() const { return m_aggregationWindowStartTime; }
    template<typename AggregationWindowStartTimeT = Aws::Utils::DateTime>
    void SetAggregationWindowStartTime(AggregationWindowStartTimeT&& value) { m_aggregationWindowStartTimeHasBeenSet = true; m_aggregationWindowStartTime = std::forward<AggregationWindowStartTimeT>(value); }
    template<typename AggregationWindowStartTimeT = Aws::Utils::DateTime>
    ListAggregatedUtterancesResult& WithAggregationWindowStartTime(AggregationWindowStartTimeT&& value) { SetAggregationWindowStartTime(std::forward<AggregationWindowStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the aggregation window ends. Only data collected
     * between the start time and the end time are returned in the results. </p>
     */
    inline const Aws::Utils::DateTime& GetAggregationWindowEndTime() const { return m_aggregationWindowEndTime; }
    template<typename AggregationWindowEndTimeT = Aws::Utils::DateTime>
    void SetAggregationWindowEndTime(AggregationWindowEndTimeT&& value) { m_aggregationWindowEndTimeHasBeenSet = true; m_aggregationWindowEndTime = std::forward<AggregationWindowEndTimeT>(value); }
    template<typename AggregationWindowEndTimeT = Aws::Utils::DateTime>
    ListAggregatedUtterancesResult& WithAggregationWindowEndTime(AggregationWindowEndTimeT&& value) { SetAggregationWindowEndTime(std::forward<AggregationWindowEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last date and time that the aggregated data was collected. The time
     * period depends on the length of the aggregation window.</p> <ul> <li> <p>
     * <b>Hours</b> - for 1 hour time window, every half hour; otherwise every
     * hour.</p> </li> <li> <p> <b>Days</b> - every 6 hours</p> </li> <li> <p>
     * <b>Weeks</b> - for a one week time window, every 12 hours; otherwise, every
     * day</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetAggregationLastRefreshedDateTime() const { return m_aggregationLastRefreshedDateTime; }
    template<typename AggregationLastRefreshedDateTimeT = Aws::Utils::DateTime>
    void SetAggregationLastRefreshedDateTime(AggregationLastRefreshedDateTimeT&& value) { m_aggregationLastRefreshedDateTimeHasBeenSet = true; m_aggregationLastRefreshedDateTime = std::forward<AggregationLastRefreshedDateTimeT>(value); }
    template<typename AggregationLastRefreshedDateTimeT = Aws::Utils::DateTime>
    ListAggregatedUtterancesResult& WithAggregationLastRefreshedDateTime(AggregationLastRefreshedDateTimeT&& value) { SetAggregationLastRefreshedDateTime(std::forward<AggregationLastRefreshedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summaries of the aggregated utterance data. Each response contains
     * information about the number of times that the utterance was seen during the
     * time period, whether it was detected or missed, and when it was seen during the
     * time period.</p>
     */
    inline const Aws::Vector<AggregatedUtterancesSummary>& GetAggregatedUtterancesSummaries() const { return m_aggregatedUtterancesSummaries; }
    template<typename AggregatedUtterancesSummariesT = Aws::Vector<AggregatedUtterancesSummary>>
    void SetAggregatedUtterancesSummaries(AggregatedUtterancesSummariesT&& value) { m_aggregatedUtterancesSummariesHasBeenSet = true; m_aggregatedUtterancesSummaries = std::forward<AggregatedUtterancesSummariesT>(value); }
    template<typename AggregatedUtterancesSummariesT = Aws::Vector<AggregatedUtterancesSummary>>
    ListAggregatedUtterancesResult& WithAggregatedUtterancesSummaries(AggregatedUtterancesSummariesT&& value) { SetAggregatedUtterancesSummaries(std::forward<AggregatedUtterancesSummariesT>(value)); return *this;}
    template<typename AggregatedUtterancesSummariesT = AggregatedUtterancesSummary>
    ListAggregatedUtterancesResult& AddAggregatedUtterancesSummaries(AggregatedUtterancesSummariesT&& value) { m_aggregatedUtterancesSummariesHasBeenSet = true; m_aggregatedUtterancesSummaries.emplace_back(std::forward<AggregatedUtterancesSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListAggregatedUtterances</code> operation. If the
     * <code>nextToken</code> field is present, you send the contents as the
     * <code>nextToken</code> parameter of a <code>ListAggregatedUtterances</code>
     * operation request to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAggregatedUtterancesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAggregatedUtterancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botAliasId;
    bool m_botAliasIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    UtteranceAggregationDuration m_aggregationDuration;
    bool m_aggregationDurationHasBeenSet = false;

    Aws::Utils::DateTime m_aggregationWindowStartTime{};
    bool m_aggregationWindowStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_aggregationWindowEndTime{};
    bool m_aggregationWindowEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_aggregationLastRefreshedDateTime{};
    bool m_aggregationLastRefreshedDateTimeHasBeenSet = false;

    Aws::Vector<AggregatedUtterancesSummary> m_aggregatedUtterancesSummaries;
    bool m_aggregatedUtterancesSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
