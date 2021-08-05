/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/TranscriptFilterType.h>
#include <aws/transcribe/model/AbsoluteTimeRange.h>
#include <aws/transcribe/model/RelativeTimeRange.h>
#include <aws/transcribe/model/ParticipantRole.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Matches the output of the transcription to either the specific phrases that
   * you specify, or the intent of the phrases that you specify.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/TranscriptFilter">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API TranscriptFilter
  {
  public:
    TranscriptFilter();
    TranscriptFilter(Aws::Utils::Json::JsonView jsonValue);
    TranscriptFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Matches the phrase to the transcription output in a word for word fashion.
     * For example, if you specify the phrase "I want to speak to the manager." Amazon
     * Transcribe attempts to match that specific phrase to the transcription.</p>
     */
    inline const TranscriptFilterType& GetTranscriptFilterType() const{ return m_transcriptFilterType; }

    /**
     * <p>Matches the phrase to the transcription output in a word for word fashion.
     * For example, if you specify the phrase "I want to speak to the manager." Amazon
     * Transcribe attempts to match that specific phrase to the transcription.</p>
     */
    inline bool TranscriptFilterTypeHasBeenSet() const { return m_transcriptFilterTypeHasBeenSet; }

    /**
     * <p>Matches the phrase to the transcription output in a word for word fashion.
     * For example, if you specify the phrase "I want to speak to the manager." Amazon
     * Transcribe attempts to match that specific phrase to the transcription.</p>
     */
    inline void SetTranscriptFilterType(const TranscriptFilterType& value) { m_transcriptFilterTypeHasBeenSet = true; m_transcriptFilterType = value; }

    /**
     * <p>Matches the phrase to the transcription output in a word for word fashion.
     * For example, if you specify the phrase "I want to speak to the manager." Amazon
     * Transcribe attempts to match that specific phrase to the transcription.</p>
     */
    inline void SetTranscriptFilterType(TranscriptFilterType&& value) { m_transcriptFilterTypeHasBeenSet = true; m_transcriptFilterType = std::move(value); }

    /**
     * <p>Matches the phrase to the transcription output in a word for word fashion.
     * For example, if you specify the phrase "I want to speak to the manager." Amazon
     * Transcribe attempts to match that specific phrase to the transcription.</p>
     */
    inline TranscriptFilter& WithTranscriptFilterType(const TranscriptFilterType& value) { SetTranscriptFilterType(value); return *this;}

    /**
     * <p>Matches the phrase to the transcription output in a word for word fashion.
     * For example, if you specify the phrase "I want to speak to the manager." Amazon
     * Transcribe attempts to match that specific phrase to the transcription.</p>
     */
    inline TranscriptFilter& WithTranscriptFilterType(TranscriptFilterType&& value) { SetTranscriptFilterType(std::move(value)); return *this;}


    /**
     * <p>A time range, set in seconds, between two points in the call.</p>
     */
    inline const AbsoluteTimeRange& GetAbsoluteTimeRange() const{ return m_absoluteTimeRange; }

    /**
     * <p>A time range, set in seconds, between two points in the call.</p>
     */
    inline bool AbsoluteTimeRangeHasBeenSet() const { return m_absoluteTimeRangeHasBeenSet; }

    /**
     * <p>A time range, set in seconds, between two points in the call.</p>
     */
    inline void SetAbsoluteTimeRange(const AbsoluteTimeRange& value) { m_absoluteTimeRangeHasBeenSet = true; m_absoluteTimeRange = value; }

    /**
     * <p>A time range, set in seconds, between two points in the call.</p>
     */
    inline void SetAbsoluteTimeRange(AbsoluteTimeRange&& value) { m_absoluteTimeRangeHasBeenSet = true; m_absoluteTimeRange = std::move(value); }

    /**
     * <p>A time range, set in seconds, between two points in the call.</p>
     */
    inline TranscriptFilter& WithAbsoluteTimeRange(const AbsoluteTimeRange& value) { SetAbsoluteTimeRange(value); return *this;}

    /**
     * <p>A time range, set in seconds, between two points in the call.</p>
     */
    inline TranscriptFilter& WithAbsoluteTimeRange(AbsoluteTimeRange&& value) { SetAbsoluteTimeRange(std::move(value)); return *this;}


    /**
     * <p>An object that allows percentages to specify the proportion of the call where
     * you would like to apply a filter. For example, you can specify the first half of
     * the call. You can also specify the period of time between halfway through to
     * three-quarters of the way through the call. Because the length of conversation
     * can vary between calls, you can apply relative time ranges across all calls.</p>
     */
    inline const RelativeTimeRange& GetRelativeTimeRange() const{ return m_relativeTimeRange; }

    /**
     * <p>An object that allows percentages to specify the proportion of the call where
     * you would like to apply a filter. For example, you can specify the first half of
     * the call. You can also specify the period of time between halfway through to
     * three-quarters of the way through the call. Because the length of conversation
     * can vary between calls, you can apply relative time ranges across all calls.</p>
     */
    inline bool RelativeTimeRangeHasBeenSet() const { return m_relativeTimeRangeHasBeenSet; }

    /**
     * <p>An object that allows percentages to specify the proportion of the call where
     * you would like to apply a filter. For example, you can specify the first half of
     * the call. You can also specify the period of time between halfway through to
     * three-quarters of the way through the call. Because the length of conversation
     * can vary between calls, you can apply relative time ranges across all calls.</p>
     */
    inline void SetRelativeTimeRange(const RelativeTimeRange& value) { m_relativeTimeRangeHasBeenSet = true; m_relativeTimeRange = value; }

    /**
     * <p>An object that allows percentages to specify the proportion of the call where
     * you would like to apply a filter. For example, you can specify the first half of
     * the call. You can also specify the period of time between halfway through to
     * three-quarters of the way through the call. Because the length of conversation
     * can vary between calls, you can apply relative time ranges across all calls.</p>
     */
    inline void SetRelativeTimeRange(RelativeTimeRange&& value) { m_relativeTimeRangeHasBeenSet = true; m_relativeTimeRange = std::move(value); }

    /**
     * <p>An object that allows percentages to specify the proportion of the call where
     * you would like to apply a filter. For example, you can specify the first half of
     * the call. You can also specify the period of time between halfway through to
     * three-quarters of the way through the call. Because the length of conversation
     * can vary between calls, you can apply relative time ranges across all calls.</p>
     */
    inline TranscriptFilter& WithRelativeTimeRange(const RelativeTimeRange& value) { SetRelativeTimeRange(value); return *this;}

    /**
     * <p>An object that allows percentages to specify the proportion of the call where
     * you would like to apply a filter. For example, you can specify the first half of
     * the call. You can also specify the period of time between halfway through to
     * three-quarters of the way through the call. Because the length of conversation
     * can vary between calls, you can apply relative time ranges across all calls.</p>
     */
    inline TranscriptFilter& WithRelativeTimeRange(RelativeTimeRange&& value) { SetRelativeTimeRange(std::move(value)); return *this;}


    /**
     * <p>Determines whether the customer or the agent is speaking the phrases that
     * you've specified.</p>
     */
    inline const ParticipantRole& GetParticipantRole() const{ return m_participantRole; }

    /**
     * <p>Determines whether the customer or the agent is speaking the phrases that
     * you've specified.</p>
     */
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }

    /**
     * <p>Determines whether the customer or the agent is speaking the phrases that
     * you've specified.</p>
     */
    inline void SetParticipantRole(const ParticipantRole& value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }

    /**
     * <p>Determines whether the customer or the agent is speaking the phrases that
     * you've specified.</p>
     */
    inline void SetParticipantRole(ParticipantRole&& value) { m_participantRoleHasBeenSet = true; m_participantRole = std::move(value); }

    /**
     * <p>Determines whether the customer or the agent is speaking the phrases that
     * you've specified.</p>
     */
    inline TranscriptFilter& WithParticipantRole(const ParticipantRole& value) { SetParticipantRole(value); return *this;}

    /**
     * <p>Determines whether the customer or the agent is speaking the phrases that
     * you've specified.</p>
     */
    inline TranscriptFilter& WithParticipantRole(ParticipantRole&& value) { SetParticipantRole(std::move(value)); return *this;}


    /**
     * <p>If <code>TRUE</code>, the rule that you specify is applied to everything
     * except for the phrases that you specify.</p>
     */
    inline bool GetNegate() const{ return m_negate; }

    /**
     * <p>If <code>TRUE</code>, the rule that you specify is applied to everything
     * except for the phrases that you specify.</p>
     */
    inline bool NegateHasBeenSet() const { return m_negateHasBeenSet; }

    /**
     * <p>If <code>TRUE</code>, the rule that you specify is applied to everything
     * except for the phrases that you specify.</p>
     */
    inline void SetNegate(bool value) { m_negateHasBeenSet = true; m_negate = value; }

    /**
     * <p>If <code>TRUE</code>, the rule that you specify is applied to everything
     * except for the phrases that you specify.</p>
     */
    inline TranscriptFilter& WithNegate(bool value) { SetNegate(value); return *this;}


    /**
     * <p>The phrases that you're specifying for the transcript filter to match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargets() const{ return m_targets; }

    /**
     * <p>The phrases that you're specifying for the transcript filter to match.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The phrases that you're specifying for the transcript filter to match.</p>
     */
    inline void SetTargets(const Aws::Vector<Aws::String>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The phrases that you're specifying for the transcript filter to match.</p>
     */
    inline void SetTargets(Aws::Vector<Aws::String>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The phrases that you're specifying for the transcript filter to match.</p>
     */
    inline TranscriptFilter& WithTargets(const Aws::Vector<Aws::String>& value) { SetTargets(value); return *this;}

    /**
     * <p>The phrases that you're specifying for the transcript filter to match.</p>
     */
    inline TranscriptFilter& WithTargets(Aws::Vector<Aws::String>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The phrases that you're specifying for the transcript filter to match.</p>
     */
    inline TranscriptFilter& AddTargets(const Aws::String& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The phrases that you're specifying for the transcript filter to match.</p>
     */
    inline TranscriptFilter& AddTargets(Aws::String&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }

    /**
     * <p>The phrases that you're specifying for the transcript filter to match.</p>
     */
    inline TranscriptFilter& AddTargets(const char* value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

  private:

    TranscriptFilterType m_transcriptFilterType;
    bool m_transcriptFilterTypeHasBeenSet;

    AbsoluteTimeRange m_absoluteTimeRange;
    bool m_absoluteTimeRangeHasBeenSet;

    RelativeTimeRange m_relativeTimeRange;
    bool m_relativeTimeRangeHasBeenSet;

    ParticipantRole m_participantRole;
    bool m_participantRoleHasBeenSet;

    bool m_negate;
    bool m_negateHasBeenSet;

    Aws::Vector<Aws::String> m_targets;
    bool m_targetsHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
