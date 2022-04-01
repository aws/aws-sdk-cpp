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
   * <p>Flag the presence or absence of specific words or phrases detected in your
   * Call Analytics transcription output.</p> <p>Rules using
   * <code>TranscriptFilter</code> are designed to match:</p> <ul> <li> <p>Custom
   * words or phrases spoken by the agent, the customer, or both</p> </li> <li>
   * <p>Custom words or phrases <b>not</b> spoken by the agent, the customer, or
   * either</p> </li> <li> <p>Custom words or phrases that occur at a specific time
   * frame</p> </li> </ul> <p>See <a
   * href="https://docs.aws.amazon.com/transcribe/latest/dg/call-analytics-create-categories.html#call-analytics-create-categories-rules">Rule
   * criteria</a> for examples.</p><p><h3>See Also:</h3>   <a
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
     * <p>Flag the presence or absence of an exact match to the phrases you specify.
     * For example, if you specify the phrase "speak to a manager" as your
     * <code>Targets</code> value, only that exact phrase is flagged.</p> <p>Note that
     * semantic matching is not supported. For example, if your customer says "speak to
     * <i>the</i> manager", instead of "speak to <i>a</i> manager", your content is not
     * flagged.</p>
     */
    inline const TranscriptFilterType& GetTranscriptFilterType() const{ return m_transcriptFilterType; }

    /**
     * <p>Flag the presence or absence of an exact match to the phrases you specify.
     * For example, if you specify the phrase "speak to a manager" as your
     * <code>Targets</code> value, only that exact phrase is flagged.</p> <p>Note that
     * semantic matching is not supported. For example, if your customer says "speak to
     * <i>the</i> manager", instead of "speak to <i>a</i> manager", your content is not
     * flagged.</p>
     */
    inline bool TranscriptFilterTypeHasBeenSet() const { return m_transcriptFilterTypeHasBeenSet; }

    /**
     * <p>Flag the presence or absence of an exact match to the phrases you specify.
     * For example, if you specify the phrase "speak to a manager" as your
     * <code>Targets</code> value, only that exact phrase is flagged.</p> <p>Note that
     * semantic matching is not supported. For example, if your customer says "speak to
     * <i>the</i> manager", instead of "speak to <i>a</i> manager", your content is not
     * flagged.</p>
     */
    inline void SetTranscriptFilterType(const TranscriptFilterType& value) { m_transcriptFilterTypeHasBeenSet = true; m_transcriptFilterType = value; }

    /**
     * <p>Flag the presence or absence of an exact match to the phrases you specify.
     * For example, if you specify the phrase "speak to a manager" as your
     * <code>Targets</code> value, only that exact phrase is flagged.</p> <p>Note that
     * semantic matching is not supported. For example, if your customer says "speak to
     * <i>the</i> manager", instead of "speak to <i>a</i> manager", your content is not
     * flagged.</p>
     */
    inline void SetTranscriptFilterType(TranscriptFilterType&& value) { m_transcriptFilterTypeHasBeenSet = true; m_transcriptFilterType = std::move(value); }

    /**
     * <p>Flag the presence or absence of an exact match to the phrases you specify.
     * For example, if you specify the phrase "speak to a manager" as your
     * <code>Targets</code> value, only that exact phrase is flagged.</p> <p>Note that
     * semantic matching is not supported. For example, if your customer says "speak to
     * <i>the</i> manager", instead of "speak to <i>a</i> manager", your content is not
     * flagged.</p>
     */
    inline TranscriptFilter& WithTranscriptFilterType(const TranscriptFilterType& value) { SetTranscriptFilterType(value); return *this;}

    /**
     * <p>Flag the presence or absence of an exact match to the phrases you specify.
     * For example, if you specify the phrase "speak to a manager" as your
     * <code>Targets</code> value, only that exact phrase is flagged.</p> <p>Note that
     * semantic matching is not supported. For example, if your customer says "speak to
     * <i>the</i> manager", instead of "speak to <i>a</i> manager", your content is not
     * flagged.</p>
     */
    inline TranscriptFilter& WithTranscriptFilterType(TranscriptFilterType&& value) { SetTranscriptFilterType(std::move(value)); return *this;}


    /**
     * <p>Allows you to specify a time range (in milliseconds) in your audio, during
     * which you want to search for the specified key words or phrases. See for more
     * detail.</p>
     */
    inline const AbsoluteTimeRange& GetAbsoluteTimeRange() const{ return m_absoluteTimeRange; }

    /**
     * <p>Allows you to specify a time range (in milliseconds) in your audio, during
     * which you want to search for the specified key words or phrases. See for more
     * detail.</p>
     */
    inline bool AbsoluteTimeRangeHasBeenSet() const { return m_absoluteTimeRangeHasBeenSet; }

    /**
     * <p>Allows you to specify a time range (in milliseconds) in your audio, during
     * which you want to search for the specified key words or phrases. See for more
     * detail.</p>
     */
    inline void SetAbsoluteTimeRange(const AbsoluteTimeRange& value) { m_absoluteTimeRangeHasBeenSet = true; m_absoluteTimeRange = value; }

    /**
     * <p>Allows you to specify a time range (in milliseconds) in your audio, during
     * which you want to search for the specified key words or phrases. See for more
     * detail.</p>
     */
    inline void SetAbsoluteTimeRange(AbsoluteTimeRange&& value) { m_absoluteTimeRangeHasBeenSet = true; m_absoluteTimeRange = std::move(value); }

    /**
     * <p>Allows you to specify a time range (in milliseconds) in your audio, during
     * which you want to search for the specified key words or phrases. See for more
     * detail.</p>
     */
    inline TranscriptFilter& WithAbsoluteTimeRange(const AbsoluteTimeRange& value) { SetAbsoluteTimeRange(value); return *this;}

    /**
     * <p>Allows you to specify a time range (in milliseconds) in your audio, during
     * which you want to search for the specified key words or phrases. See for more
     * detail.</p>
     */
    inline TranscriptFilter& WithAbsoluteTimeRange(AbsoluteTimeRange&& value) { SetAbsoluteTimeRange(std::move(value)); return *this;}


    /**
     * <p>Allows you to specify a time range (in percentage) in your media file, during
     * which you want to search for the specified key words or phrases. See for more
     * detail.</p>
     */
    inline const RelativeTimeRange& GetRelativeTimeRange() const{ return m_relativeTimeRange; }

    /**
     * <p>Allows you to specify a time range (in percentage) in your media file, during
     * which you want to search for the specified key words or phrases. See for more
     * detail.</p>
     */
    inline bool RelativeTimeRangeHasBeenSet() const { return m_relativeTimeRangeHasBeenSet; }

    /**
     * <p>Allows you to specify a time range (in percentage) in your media file, during
     * which you want to search for the specified key words or phrases. See for more
     * detail.</p>
     */
    inline void SetRelativeTimeRange(const RelativeTimeRange& value) { m_relativeTimeRangeHasBeenSet = true; m_relativeTimeRange = value; }

    /**
     * <p>Allows you to specify a time range (in percentage) in your media file, during
     * which you want to search for the specified key words or phrases. See for more
     * detail.</p>
     */
    inline void SetRelativeTimeRange(RelativeTimeRange&& value) { m_relativeTimeRangeHasBeenSet = true; m_relativeTimeRange = std::move(value); }

    /**
     * <p>Allows you to specify a time range (in percentage) in your media file, during
     * which you want to search for the specified key words or phrases. See for more
     * detail.</p>
     */
    inline TranscriptFilter& WithRelativeTimeRange(const RelativeTimeRange& value) { SetRelativeTimeRange(value); return *this;}

    /**
     * <p>Allows you to specify a time range (in percentage) in your media file, during
     * which you want to search for the specified key words or phrases. See for more
     * detail.</p>
     */
    inline TranscriptFilter& WithRelativeTimeRange(RelativeTimeRange&& value) { SetRelativeTimeRange(std::move(value)); return *this;}


    /**
     * <p>Specify the participant you want to flag. Omitting this parameter is
     * equivalent to specifying both participants.</p>
     */
    inline const ParticipantRole& GetParticipantRole() const{ return m_participantRole; }

    /**
     * <p>Specify the participant you want to flag. Omitting this parameter is
     * equivalent to specifying both participants.</p>
     */
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }

    /**
     * <p>Specify the participant you want to flag. Omitting this parameter is
     * equivalent to specifying both participants.</p>
     */
    inline void SetParticipantRole(const ParticipantRole& value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }

    /**
     * <p>Specify the participant you want to flag. Omitting this parameter is
     * equivalent to specifying both participants.</p>
     */
    inline void SetParticipantRole(ParticipantRole&& value) { m_participantRoleHasBeenSet = true; m_participantRole = std::move(value); }

    /**
     * <p>Specify the participant you want to flag. Omitting this parameter is
     * equivalent to specifying both participants.</p>
     */
    inline TranscriptFilter& WithParticipantRole(const ParticipantRole& value) { SetParticipantRole(value); return *this;}

    /**
     * <p>Specify the participant you want to flag. Omitting this parameter is
     * equivalent to specifying both participants.</p>
     */
    inline TranscriptFilter& WithParticipantRole(ParticipantRole&& value) { SetParticipantRole(std::move(value)); return *this;}


    /**
     * <p>Set to <code>TRUE</code> to flag the absence of the phrase you specified in
     * your request. Set to <code>FALSE</code> to flag the presence of the phrase you
     * specified in your request.</p>
     */
    inline bool GetNegate() const{ return m_negate; }

    /**
     * <p>Set to <code>TRUE</code> to flag the absence of the phrase you specified in
     * your request. Set to <code>FALSE</code> to flag the presence of the phrase you
     * specified in your request.</p>
     */
    inline bool NegateHasBeenSet() const { return m_negateHasBeenSet; }

    /**
     * <p>Set to <code>TRUE</code> to flag the absence of the phrase you specified in
     * your request. Set to <code>FALSE</code> to flag the presence of the phrase you
     * specified in your request.</p>
     */
    inline void SetNegate(bool value) { m_negateHasBeenSet = true; m_negate = value; }

    /**
     * <p>Set to <code>TRUE</code> to flag the absence of the phrase you specified in
     * your request. Set to <code>FALSE</code> to flag the presence of the phrase you
     * specified in your request.</p>
     */
    inline TranscriptFilter& WithNegate(bool value) { SetNegate(value); return *this;}


    /**
     * <p>Specify the phrases you want to flag.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargets() const{ return m_targets; }

    /**
     * <p>Specify the phrases you want to flag.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>Specify the phrases you want to flag.</p>
     */
    inline void SetTargets(const Aws::Vector<Aws::String>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>Specify the phrases you want to flag.</p>
     */
    inline void SetTargets(Aws::Vector<Aws::String>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>Specify the phrases you want to flag.</p>
     */
    inline TranscriptFilter& WithTargets(const Aws::Vector<Aws::String>& value) { SetTargets(value); return *this;}

    /**
     * <p>Specify the phrases you want to flag.</p>
     */
    inline TranscriptFilter& WithTargets(Aws::Vector<Aws::String>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>Specify the phrases you want to flag.</p>
     */
    inline TranscriptFilter& AddTargets(const Aws::String& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>Specify the phrases you want to flag.</p>
     */
    inline TranscriptFilter& AddTargets(Aws::String&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }

    /**
     * <p>Specify the phrases you want to flag.</p>
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
