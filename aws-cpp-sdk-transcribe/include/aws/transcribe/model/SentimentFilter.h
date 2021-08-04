/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/AbsoluteTimeRange.h>
#include <aws/transcribe/model/RelativeTimeRange.h>
#include <aws/transcribe/model/ParticipantRole.h>
#include <aws/transcribe/model/SentimentValue.h>
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
   * <p>An object that enables you to specify a particular customer or agent
   * sentiment. If at least 50 percent of the conversation turns (the back-and-forth
   * between two speakers) in a specified time period match the specified sentiment,
   * Amazon Transcribe will consider the sentiment a match.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/SentimentFilter">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API SentimentFilter
  {
  public:
    SentimentFilter();
    SentimentFilter(Aws::Utils::Json::JsonView jsonValue);
    SentimentFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array that enables you to specify sentiments for the customer or agent.
     * You can specify one or more values.</p>
     */
    inline const Aws::Vector<SentimentValue>& GetSentiments() const{ return m_sentiments; }

    /**
     * <p>An array that enables you to specify sentiments for the customer or agent.
     * You can specify one or more values.</p>
     */
    inline bool SentimentsHasBeenSet() const { return m_sentimentsHasBeenSet; }

    /**
     * <p>An array that enables you to specify sentiments for the customer or agent.
     * You can specify one or more values.</p>
     */
    inline void SetSentiments(const Aws::Vector<SentimentValue>& value) { m_sentimentsHasBeenSet = true; m_sentiments = value; }

    /**
     * <p>An array that enables you to specify sentiments for the customer or agent.
     * You can specify one or more values.</p>
     */
    inline void SetSentiments(Aws::Vector<SentimentValue>&& value) { m_sentimentsHasBeenSet = true; m_sentiments = std::move(value); }

    /**
     * <p>An array that enables you to specify sentiments for the customer or agent.
     * You can specify one or more values.</p>
     */
    inline SentimentFilter& WithSentiments(const Aws::Vector<SentimentValue>& value) { SetSentiments(value); return *this;}

    /**
     * <p>An array that enables you to specify sentiments for the customer or agent.
     * You can specify one or more values.</p>
     */
    inline SentimentFilter& WithSentiments(Aws::Vector<SentimentValue>&& value) { SetSentiments(std::move(value)); return *this;}

    /**
     * <p>An array that enables you to specify sentiments for the customer or agent.
     * You can specify one or more values.</p>
     */
    inline SentimentFilter& AddSentiments(const SentimentValue& value) { m_sentimentsHasBeenSet = true; m_sentiments.push_back(value); return *this; }

    /**
     * <p>An array that enables you to specify sentiments for the customer or agent.
     * You can specify one or more values.</p>
     */
    inline SentimentFilter& AddSentiments(SentimentValue&& value) { m_sentimentsHasBeenSet = true; m_sentiments.push_back(std::move(value)); return *this; }


    /**
     * <p>The time range, measured in seconds, of the sentiment.</p>
     */
    inline const AbsoluteTimeRange& GetAbsoluteTimeRange() const{ return m_absoluteTimeRange; }

    /**
     * <p>The time range, measured in seconds, of the sentiment.</p>
     */
    inline bool AbsoluteTimeRangeHasBeenSet() const { return m_absoluteTimeRangeHasBeenSet; }

    /**
     * <p>The time range, measured in seconds, of the sentiment.</p>
     */
    inline void SetAbsoluteTimeRange(const AbsoluteTimeRange& value) { m_absoluteTimeRangeHasBeenSet = true; m_absoluteTimeRange = value; }

    /**
     * <p>The time range, measured in seconds, of the sentiment.</p>
     */
    inline void SetAbsoluteTimeRange(AbsoluteTimeRange&& value) { m_absoluteTimeRangeHasBeenSet = true; m_absoluteTimeRange = std::move(value); }

    /**
     * <p>The time range, measured in seconds, of the sentiment.</p>
     */
    inline SentimentFilter& WithAbsoluteTimeRange(const AbsoluteTimeRange& value) { SetAbsoluteTimeRange(value); return *this;}

    /**
     * <p>The time range, measured in seconds, of the sentiment.</p>
     */
    inline SentimentFilter& WithAbsoluteTimeRange(AbsoluteTimeRange&& value) { SetAbsoluteTimeRange(std::move(value)); return *this;}


    /**
     * <p>The time range, set in percentages, that correspond to proportion of the
     * call.</p>
     */
    inline const RelativeTimeRange& GetRelativeTimeRange() const{ return m_relativeTimeRange; }

    /**
     * <p>The time range, set in percentages, that correspond to proportion of the
     * call.</p>
     */
    inline bool RelativeTimeRangeHasBeenSet() const { return m_relativeTimeRangeHasBeenSet; }

    /**
     * <p>The time range, set in percentages, that correspond to proportion of the
     * call.</p>
     */
    inline void SetRelativeTimeRange(const RelativeTimeRange& value) { m_relativeTimeRangeHasBeenSet = true; m_relativeTimeRange = value; }

    /**
     * <p>The time range, set in percentages, that correspond to proportion of the
     * call.</p>
     */
    inline void SetRelativeTimeRange(RelativeTimeRange&& value) { m_relativeTimeRangeHasBeenSet = true; m_relativeTimeRange = std::move(value); }

    /**
     * <p>The time range, set in percentages, that correspond to proportion of the
     * call.</p>
     */
    inline SentimentFilter& WithRelativeTimeRange(const RelativeTimeRange& value) { SetRelativeTimeRange(value); return *this;}

    /**
     * <p>The time range, set in percentages, that correspond to proportion of the
     * call.</p>
     */
    inline SentimentFilter& WithRelativeTimeRange(RelativeTimeRange&& value) { SetRelativeTimeRange(std::move(value)); return *this;}


    /**
     * <p>A value that determines whether the sentiment belongs to the customer or the
     * agent.</p>
     */
    inline const ParticipantRole& GetParticipantRole() const{ return m_participantRole; }

    /**
     * <p>A value that determines whether the sentiment belongs to the customer or the
     * agent.</p>
     */
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }

    /**
     * <p>A value that determines whether the sentiment belongs to the customer or the
     * agent.</p>
     */
    inline void SetParticipantRole(const ParticipantRole& value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }

    /**
     * <p>A value that determines whether the sentiment belongs to the customer or the
     * agent.</p>
     */
    inline void SetParticipantRole(ParticipantRole&& value) { m_participantRoleHasBeenSet = true; m_participantRole = std::move(value); }

    /**
     * <p>A value that determines whether the sentiment belongs to the customer or the
     * agent.</p>
     */
    inline SentimentFilter& WithParticipantRole(const ParticipantRole& value) { SetParticipantRole(value); return *this;}

    /**
     * <p>A value that determines whether the sentiment belongs to the customer or the
     * agent.</p>
     */
    inline SentimentFilter& WithParticipantRole(ParticipantRole&& value) { SetParticipantRole(std::move(value)); return *this;}


    /**
     * <p>Set to <code>TRUE</code> to look for sentiments that weren't specified in the
     * request. </p>
     */
    inline bool GetNegate() const{ return m_negate; }

    /**
     * <p>Set to <code>TRUE</code> to look for sentiments that weren't specified in the
     * request. </p>
     */
    inline bool NegateHasBeenSet() const { return m_negateHasBeenSet; }

    /**
     * <p>Set to <code>TRUE</code> to look for sentiments that weren't specified in the
     * request. </p>
     */
    inline void SetNegate(bool value) { m_negateHasBeenSet = true; m_negate = value; }

    /**
     * <p>Set to <code>TRUE</code> to look for sentiments that weren't specified in the
     * request. </p>
     */
    inline SentimentFilter& WithNegate(bool value) { SetNegate(value); return *this;}

  private:

    Aws::Vector<SentimentValue> m_sentiments;
    bool m_sentimentsHasBeenSet;

    AbsoluteTimeRange m_absoluteTimeRange;
    bool m_absoluteTimeRangeHasBeenSet;

    RelativeTimeRange m_relativeTimeRange;
    bool m_relativeTimeRangeHasBeenSet;

    ParticipantRole m_participantRole;
    bool m_participantRoleHasBeenSet;

    bool m_negate;
    bool m_negateHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
