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
   * <p>Flag the presence or absence of specific sentiments detected in your Call
   * Analytics transcription output.</p> <p>Rules using <code>SentimentFilter</code>
   * are designed to match:</p> <ul> <li> <p>The presence or absence of a positive
   * sentiment felt by the customer, agent, or both at specified points in the
   * call</p> </li> <li> <p>The presence or absence of a negative sentiment felt by
   * the customer, agent, or both at specified points in the call</p> </li> <li>
   * <p>The presence or absence of a neutral sentiment felt by the customer, agent,
   * or both at specified points in the call</p> </li> <li> <p>The presence or
   * absence of a mixed sentiment felt by the customer, the agent, or both at
   * specified points in the call</p> </li> </ul> <p>See <a
   * href="https://docs.aws.amazon.com/transcribe/latest/dg/tca-categories-batch.html#tca-rules-batch">Rule
   * criteria for batch categories</a> for usage examples.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/SentimentFilter">AWS
   * API Reference</a></p>
   */
  class SentimentFilter
  {
  public:
    AWS_TRANSCRIBESERVICE_API SentimentFilter();
    AWS_TRANSCRIBESERVICE_API SentimentFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API SentimentFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specify the sentiments that you want to flag.</p>
     */
    inline const Aws::Vector<SentimentValue>& GetSentiments() const{ return m_sentiments; }

    /**
     * <p>Specify the sentiments that you want to flag.</p>
     */
    inline bool SentimentsHasBeenSet() const { return m_sentimentsHasBeenSet; }

    /**
     * <p>Specify the sentiments that you want to flag.</p>
     */
    inline void SetSentiments(const Aws::Vector<SentimentValue>& value) { m_sentimentsHasBeenSet = true; m_sentiments = value; }

    /**
     * <p>Specify the sentiments that you want to flag.</p>
     */
    inline void SetSentiments(Aws::Vector<SentimentValue>&& value) { m_sentimentsHasBeenSet = true; m_sentiments = std::move(value); }

    /**
     * <p>Specify the sentiments that you want to flag.</p>
     */
    inline SentimentFilter& WithSentiments(const Aws::Vector<SentimentValue>& value) { SetSentiments(value); return *this;}

    /**
     * <p>Specify the sentiments that you want to flag.</p>
     */
    inline SentimentFilter& WithSentiments(Aws::Vector<SentimentValue>&& value) { SetSentiments(std::move(value)); return *this;}

    /**
     * <p>Specify the sentiments that you want to flag.</p>
     */
    inline SentimentFilter& AddSentiments(const SentimentValue& value) { m_sentimentsHasBeenSet = true; m_sentiments.push_back(value); return *this; }

    /**
     * <p>Specify the sentiments that you want to flag.</p>
     */
    inline SentimentFilter& AddSentiments(SentimentValue&& value) { m_sentimentsHasBeenSet = true; m_sentiments.push_back(std::move(value)); return *this; }


    /**
     * <p>Makes it possible to specify a time range (in milliseconds) in your audio,
     * during which you want to search for the specified sentiments. See for more
     * detail.</p>
     */
    inline const AbsoluteTimeRange& GetAbsoluteTimeRange() const{ return m_absoluteTimeRange; }

    /**
     * <p>Makes it possible to specify a time range (in milliseconds) in your audio,
     * during which you want to search for the specified sentiments. See for more
     * detail.</p>
     */
    inline bool AbsoluteTimeRangeHasBeenSet() const { return m_absoluteTimeRangeHasBeenSet; }

    /**
     * <p>Makes it possible to specify a time range (in milliseconds) in your audio,
     * during which you want to search for the specified sentiments. See for more
     * detail.</p>
     */
    inline void SetAbsoluteTimeRange(const AbsoluteTimeRange& value) { m_absoluteTimeRangeHasBeenSet = true; m_absoluteTimeRange = value; }

    /**
     * <p>Makes it possible to specify a time range (in milliseconds) in your audio,
     * during which you want to search for the specified sentiments. See for more
     * detail.</p>
     */
    inline void SetAbsoluteTimeRange(AbsoluteTimeRange&& value) { m_absoluteTimeRangeHasBeenSet = true; m_absoluteTimeRange = std::move(value); }

    /**
     * <p>Makes it possible to specify a time range (in milliseconds) in your audio,
     * during which you want to search for the specified sentiments. See for more
     * detail.</p>
     */
    inline SentimentFilter& WithAbsoluteTimeRange(const AbsoluteTimeRange& value) { SetAbsoluteTimeRange(value); return *this;}

    /**
     * <p>Makes it possible to specify a time range (in milliseconds) in your audio,
     * during which you want to search for the specified sentiments. See for more
     * detail.</p>
     */
    inline SentimentFilter& WithAbsoluteTimeRange(AbsoluteTimeRange&& value) { SetAbsoluteTimeRange(std::move(value)); return *this;}


    /**
     * <p>Makes it possible to specify a time range (in percentage) in your media file,
     * during which you want to search for the specified sentiments. See for more
     * detail.</p>
     */
    inline const RelativeTimeRange& GetRelativeTimeRange() const{ return m_relativeTimeRange; }

    /**
     * <p>Makes it possible to specify a time range (in percentage) in your media file,
     * during which you want to search for the specified sentiments. See for more
     * detail.</p>
     */
    inline bool RelativeTimeRangeHasBeenSet() const { return m_relativeTimeRangeHasBeenSet; }

    /**
     * <p>Makes it possible to specify a time range (in percentage) in your media file,
     * during which you want to search for the specified sentiments. See for more
     * detail.</p>
     */
    inline void SetRelativeTimeRange(const RelativeTimeRange& value) { m_relativeTimeRangeHasBeenSet = true; m_relativeTimeRange = value; }

    /**
     * <p>Makes it possible to specify a time range (in percentage) in your media file,
     * during which you want to search for the specified sentiments. See for more
     * detail.</p>
     */
    inline void SetRelativeTimeRange(RelativeTimeRange&& value) { m_relativeTimeRangeHasBeenSet = true; m_relativeTimeRange = std::move(value); }

    /**
     * <p>Makes it possible to specify a time range (in percentage) in your media file,
     * during which you want to search for the specified sentiments. See for more
     * detail.</p>
     */
    inline SentimentFilter& WithRelativeTimeRange(const RelativeTimeRange& value) { SetRelativeTimeRange(value); return *this;}

    /**
     * <p>Makes it possible to specify a time range (in percentage) in your media file,
     * during which you want to search for the specified sentiments. See for more
     * detail.</p>
     */
    inline SentimentFilter& WithRelativeTimeRange(RelativeTimeRange&& value) { SetRelativeTimeRange(std::move(value)); return *this;}


    /**
     * <p>Specify the participant that you want to flag. Omitting this parameter is
     * equivalent to specifying both participants.</p>
     */
    inline const ParticipantRole& GetParticipantRole() const{ return m_participantRole; }

    /**
     * <p>Specify the participant that you want to flag. Omitting this parameter is
     * equivalent to specifying both participants.</p>
     */
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }

    /**
     * <p>Specify the participant that you want to flag. Omitting this parameter is
     * equivalent to specifying both participants.</p>
     */
    inline void SetParticipantRole(const ParticipantRole& value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }

    /**
     * <p>Specify the participant that you want to flag. Omitting this parameter is
     * equivalent to specifying both participants.</p>
     */
    inline void SetParticipantRole(ParticipantRole&& value) { m_participantRoleHasBeenSet = true; m_participantRole = std::move(value); }

    /**
     * <p>Specify the participant that you want to flag. Omitting this parameter is
     * equivalent to specifying both participants.</p>
     */
    inline SentimentFilter& WithParticipantRole(const ParticipantRole& value) { SetParticipantRole(value); return *this;}

    /**
     * <p>Specify the participant that you want to flag. Omitting this parameter is
     * equivalent to specifying both participants.</p>
     */
    inline SentimentFilter& WithParticipantRole(ParticipantRole&& value) { SetParticipantRole(std::move(value)); return *this;}


    /**
     * <p>Set to <code>TRUE</code> to flag the sentiments that you didn't include in
     * your request. Set to <code>FALSE</code> to flag the sentiments that you
     * specified in your request.</p>
     */
    inline bool GetNegate() const{ return m_negate; }

    /**
     * <p>Set to <code>TRUE</code> to flag the sentiments that you didn't include in
     * your request. Set to <code>FALSE</code> to flag the sentiments that you
     * specified in your request.</p>
     */
    inline bool NegateHasBeenSet() const { return m_negateHasBeenSet; }

    /**
     * <p>Set to <code>TRUE</code> to flag the sentiments that you didn't include in
     * your request. Set to <code>FALSE</code> to flag the sentiments that you
     * specified in your request.</p>
     */
    inline void SetNegate(bool value) { m_negateHasBeenSet = true; m_negate = value; }

    /**
     * <p>Set to <code>TRUE</code> to flag the sentiments that you didn't include in
     * your request. Set to <code>FALSE</code> to flag the sentiments that you
     * specified in your request.</p>
     */
    inline SentimentFilter& WithNegate(bool value) { SetNegate(value); return *this;}

  private:

    Aws::Vector<SentimentValue> m_sentiments;
    bool m_sentimentsHasBeenSet = false;

    AbsoluteTimeRange m_absoluteTimeRange;
    bool m_absoluteTimeRangeHasBeenSet = false;

    RelativeTimeRange m_relativeTimeRange;
    bool m_relativeTimeRangeHasBeenSet = false;

    ParticipantRole m_participantRole;
    bool m_participantRoleHasBeenSet = false;

    bool m_negate;
    bool m_negateHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
