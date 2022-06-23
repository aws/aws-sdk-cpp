/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/NonTalkTimeFilter.h>
#include <aws/transcribe/model/InterruptionFilter.h>
#include <aws/transcribe/model/TranscriptFilter.h>
#include <aws/transcribe/model/SentimentFilter.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>A condition in the call between the customer and the agent that you want to
   * filter for.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/Rule">AWS API
   * Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API Rule
  {
  public:
    Rule();
    Rule(Aws::Utils::Json::JsonView jsonValue);
    Rule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A condition for a time period when neither the customer nor the agent was
     * talking.</p>
     */
    inline const NonTalkTimeFilter& GetNonTalkTimeFilter() const{ return m_nonTalkTimeFilter; }

    /**
     * <p>A condition for a time period when neither the customer nor the agent was
     * talking.</p>
     */
    inline bool NonTalkTimeFilterHasBeenSet() const { return m_nonTalkTimeFilterHasBeenSet; }

    /**
     * <p>A condition for a time period when neither the customer nor the agent was
     * talking.</p>
     */
    inline void SetNonTalkTimeFilter(const NonTalkTimeFilter& value) { m_nonTalkTimeFilterHasBeenSet = true; m_nonTalkTimeFilter = value; }

    /**
     * <p>A condition for a time period when neither the customer nor the agent was
     * talking.</p>
     */
    inline void SetNonTalkTimeFilter(NonTalkTimeFilter&& value) { m_nonTalkTimeFilterHasBeenSet = true; m_nonTalkTimeFilter = std::move(value); }

    /**
     * <p>A condition for a time period when neither the customer nor the agent was
     * talking.</p>
     */
    inline Rule& WithNonTalkTimeFilter(const NonTalkTimeFilter& value) { SetNonTalkTimeFilter(value); return *this;}

    /**
     * <p>A condition for a time period when neither the customer nor the agent was
     * talking.</p>
     */
    inline Rule& WithNonTalkTimeFilter(NonTalkTimeFilter&& value) { SetNonTalkTimeFilter(std::move(value)); return *this;}


    /**
     * <p>A condition for a time period when either the customer or agent was
     * interrupting the other person. </p>
     */
    inline const InterruptionFilter& GetInterruptionFilter() const{ return m_interruptionFilter; }

    /**
     * <p>A condition for a time period when either the customer or agent was
     * interrupting the other person. </p>
     */
    inline bool InterruptionFilterHasBeenSet() const { return m_interruptionFilterHasBeenSet; }

    /**
     * <p>A condition for a time period when either the customer or agent was
     * interrupting the other person. </p>
     */
    inline void SetInterruptionFilter(const InterruptionFilter& value) { m_interruptionFilterHasBeenSet = true; m_interruptionFilter = value; }

    /**
     * <p>A condition for a time period when either the customer or agent was
     * interrupting the other person. </p>
     */
    inline void SetInterruptionFilter(InterruptionFilter&& value) { m_interruptionFilterHasBeenSet = true; m_interruptionFilter = std::move(value); }

    /**
     * <p>A condition for a time period when either the customer or agent was
     * interrupting the other person. </p>
     */
    inline Rule& WithInterruptionFilter(const InterruptionFilter& value) { SetInterruptionFilter(value); return *this;}

    /**
     * <p>A condition for a time period when either the customer or agent was
     * interrupting the other person. </p>
     */
    inline Rule& WithInterruptionFilter(InterruptionFilter&& value) { SetInterruptionFilter(std::move(value)); return *this;}


    /**
     * <p>A condition that catches particular words or phrases based on a exact match.
     * For example, if you set the phrase "I want to speak to the manager", only that
     * exact phrase will be returned.</p>
     */
    inline const TranscriptFilter& GetTranscriptFilter() const{ return m_transcriptFilter; }

    /**
     * <p>A condition that catches particular words or phrases based on a exact match.
     * For example, if you set the phrase "I want to speak to the manager", only that
     * exact phrase will be returned.</p>
     */
    inline bool TranscriptFilterHasBeenSet() const { return m_transcriptFilterHasBeenSet; }

    /**
     * <p>A condition that catches particular words or phrases based on a exact match.
     * For example, if you set the phrase "I want to speak to the manager", only that
     * exact phrase will be returned.</p>
     */
    inline void SetTranscriptFilter(const TranscriptFilter& value) { m_transcriptFilterHasBeenSet = true; m_transcriptFilter = value; }

    /**
     * <p>A condition that catches particular words or phrases based on a exact match.
     * For example, if you set the phrase "I want to speak to the manager", only that
     * exact phrase will be returned.</p>
     */
    inline void SetTranscriptFilter(TranscriptFilter&& value) { m_transcriptFilterHasBeenSet = true; m_transcriptFilter = std::move(value); }

    /**
     * <p>A condition that catches particular words or phrases based on a exact match.
     * For example, if you set the phrase "I want to speak to the manager", only that
     * exact phrase will be returned.</p>
     */
    inline Rule& WithTranscriptFilter(const TranscriptFilter& value) { SetTranscriptFilter(value); return *this;}

    /**
     * <p>A condition that catches particular words or phrases based on a exact match.
     * For example, if you set the phrase "I want to speak to the manager", only that
     * exact phrase will be returned.</p>
     */
    inline Rule& WithTranscriptFilter(TranscriptFilter&& value) { SetTranscriptFilter(std::move(value)); return *this;}


    /**
     * <p>A condition that is applied to a particular customer sentiment.</p>
     */
    inline const SentimentFilter& GetSentimentFilter() const{ return m_sentimentFilter; }

    /**
     * <p>A condition that is applied to a particular customer sentiment.</p>
     */
    inline bool SentimentFilterHasBeenSet() const { return m_sentimentFilterHasBeenSet; }

    /**
     * <p>A condition that is applied to a particular customer sentiment.</p>
     */
    inline void SetSentimentFilter(const SentimentFilter& value) { m_sentimentFilterHasBeenSet = true; m_sentimentFilter = value; }

    /**
     * <p>A condition that is applied to a particular customer sentiment.</p>
     */
    inline void SetSentimentFilter(SentimentFilter&& value) { m_sentimentFilterHasBeenSet = true; m_sentimentFilter = std::move(value); }

    /**
     * <p>A condition that is applied to a particular customer sentiment.</p>
     */
    inline Rule& WithSentimentFilter(const SentimentFilter& value) { SetSentimentFilter(value); return *this;}

    /**
     * <p>A condition that is applied to a particular customer sentiment.</p>
     */
    inline Rule& WithSentimentFilter(SentimentFilter&& value) { SetSentimentFilter(std::move(value)); return *this;}

  private:

    NonTalkTimeFilter m_nonTalkTimeFilter;
    bool m_nonTalkTimeFilterHasBeenSet;

    InterruptionFilter m_interruptionFilter;
    bool m_interruptionFilterHasBeenSet;

    TranscriptFilter m_transcriptFilter;
    bool m_transcriptFilterHasBeenSet;

    SentimentFilter m_sentimentFilter;
    bool m_sentimentFilterHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
