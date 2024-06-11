﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Provides summary information for aggregated utterances. The
   * <code>ListAggregatedUtterances</code> operations combines all instances of the
   * same utterance into a single aggregated summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AggregatedUtterancesSummary">AWS
   * API Reference</a></p>
   */
  class AggregatedUtterancesSummary
  {
  public:
    AWS_LEXMODELSV2_API AggregatedUtterancesSummary();
    AWS_LEXMODELSV2_API AggregatedUtterancesSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AggregatedUtterancesSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text of the utterance. If the utterance was used with the
     * <code>RecognizeUtterance</code> operation, the text is the transcription of the
     * audio utterance.</p>
     */
    inline const Aws::String& GetUtterance() const{ return m_utterance; }
    inline bool UtteranceHasBeenSet() const { return m_utteranceHasBeenSet; }
    inline void SetUtterance(const Aws::String& value) { m_utteranceHasBeenSet = true; m_utterance = value; }
    inline void SetUtterance(Aws::String&& value) { m_utteranceHasBeenSet = true; m_utterance = std::move(value); }
    inline void SetUtterance(const char* value) { m_utteranceHasBeenSet = true; m_utterance.assign(value); }
    inline AggregatedUtterancesSummary& WithUtterance(const Aws::String& value) { SetUtterance(value); return *this;}
    inline AggregatedUtterancesSummary& WithUtterance(Aws::String&& value) { SetUtterance(std::move(value)); return *this;}
    inline AggregatedUtterancesSummary& WithUtterance(const char* value) { SetUtterance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times that the utterance was detected by Amazon Lex during the
     * time period. When an utterance is detected, it activates an intent or a
     * slot.</p>
     */
    inline int GetHitCount() const{ return m_hitCount; }
    inline bool HitCountHasBeenSet() const { return m_hitCountHasBeenSet; }
    inline void SetHitCount(int value) { m_hitCountHasBeenSet = true; m_hitCount = value; }
    inline AggregatedUtterancesSummary& WithHitCount(int value) { SetHitCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times that the utterance was missed by Amazon Lex An utterance
     * is missed when it doesn't activate an intent or slot.</p>
     */
    inline int GetMissedCount() const{ return m_missedCount; }
    inline bool MissedCountHasBeenSet() const { return m_missedCountHasBeenSet; }
    inline void SetMissedCount(int value) { m_missedCountHasBeenSet = true; m_missedCount = value; }
    inline AggregatedUtterancesSummary& WithMissedCount(int value) { SetMissedCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the utterance was first recorded in the time window
     * for aggregation. An utterance may have been sent to Amazon Lex before that time,
     * but only utterances within the time window are counted.</p>
     */
    inline const Aws::Utils::DateTime& GetUtteranceFirstRecordedInAggregationDuration() const{ return m_utteranceFirstRecordedInAggregationDuration; }
    inline bool UtteranceFirstRecordedInAggregationDurationHasBeenSet() const { return m_utteranceFirstRecordedInAggregationDurationHasBeenSet; }
    inline void SetUtteranceFirstRecordedInAggregationDuration(const Aws::Utils::DateTime& value) { m_utteranceFirstRecordedInAggregationDurationHasBeenSet = true; m_utteranceFirstRecordedInAggregationDuration = value; }
    inline void SetUtteranceFirstRecordedInAggregationDuration(Aws::Utils::DateTime&& value) { m_utteranceFirstRecordedInAggregationDurationHasBeenSet = true; m_utteranceFirstRecordedInAggregationDuration = std::move(value); }
    inline AggregatedUtterancesSummary& WithUtteranceFirstRecordedInAggregationDuration(const Aws::Utils::DateTime& value) { SetUtteranceFirstRecordedInAggregationDuration(value); return *this;}
    inline AggregatedUtterancesSummary& WithUtteranceFirstRecordedInAggregationDuration(Aws::Utils::DateTime&& value) { SetUtteranceFirstRecordedInAggregationDuration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last date and time that an utterance was recorded in the time window for
     * aggregation. An utterance may be sent to Amazon Lex after that time, but only
     * utterances within the time window are counted.</p>
     */
    inline const Aws::Utils::DateTime& GetUtteranceLastRecordedInAggregationDuration() const{ return m_utteranceLastRecordedInAggregationDuration; }
    inline bool UtteranceLastRecordedInAggregationDurationHasBeenSet() const { return m_utteranceLastRecordedInAggregationDurationHasBeenSet; }
    inline void SetUtteranceLastRecordedInAggregationDuration(const Aws::Utils::DateTime& value) { m_utteranceLastRecordedInAggregationDurationHasBeenSet = true; m_utteranceLastRecordedInAggregationDuration = value; }
    inline void SetUtteranceLastRecordedInAggregationDuration(Aws::Utils::DateTime&& value) { m_utteranceLastRecordedInAggregationDurationHasBeenSet = true; m_utteranceLastRecordedInAggregationDuration = std::move(value); }
    inline AggregatedUtterancesSummary& WithUtteranceLastRecordedInAggregationDuration(const Aws::Utils::DateTime& value) { SetUtteranceLastRecordedInAggregationDuration(value); return *this;}
    inline AggregatedUtterancesSummary& WithUtteranceLastRecordedInAggregationDuration(Aws::Utils::DateTime&& value) { SetUtteranceLastRecordedInAggregationDuration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Aggregated utterance data may contain utterances from versions of your bot
     * that have since been deleted. When the aggregated contains this kind of data,
     * this field is set to true.</p>
     */
    inline bool GetContainsDataFromDeletedResources() const{ return m_containsDataFromDeletedResources; }
    inline bool ContainsDataFromDeletedResourcesHasBeenSet() const { return m_containsDataFromDeletedResourcesHasBeenSet; }
    inline void SetContainsDataFromDeletedResources(bool value) { m_containsDataFromDeletedResourcesHasBeenSet = true; m_containsDataFromDeletedResources = value; }
    inline AggregatedUtterancesSummary& WithContainsDataFromDeletedResources(bool value) { SetContainsDataFromDeletedResources(value); return *this;}
    ///@}
  private:

    Aws::String m_utterance;
    bool m_utteranceHasBeenSet = false;

    int m_hitCount;
    bool m_hitCountHasBeenSet = false;

    int m_missedCount;
    bool m_missedCountHasBeenSet = false;

    Aws::Utils::DateTime m_utteranceFirstRecordedInAggregationDuration;
    bool m_utteranceFirstRecordedInAggregationDurationHasBeenSet = false;

    Aws::Utils::DateTime m_utteranceLastRecordedInAggregationDuration;
    bool m_utteranceLastRecordedInAggregationDurationHasBeenSet = false;

    bool m_containsDataFromDeletedResources;
    bool m_containsDataFromDeletedResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
