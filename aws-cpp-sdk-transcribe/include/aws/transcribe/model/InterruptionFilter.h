﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/ParticipantRole.h>
#include <aws/transcribe/model/AbsoluteTimeRange.h>
#include <aws/transcribe/model/RelativeTimeRange.h>
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
   * <p>Flag the presence or absence of interruptions in your Call Analytics
   * transcription output.</p> <p>Rules using <code>InterruptionFilter</code> are
   * designed to match:</p> <ul> <li> <p>Instances where an agent interrupts a
   * customer</p> </li> <li> <p>Instances where a customer interrupts an agent</p>
   * </li> <li> <p>Either participant interrupting the other</p> </li> <li> <p>A lack
   * of interruptions</p> </li> </ul> <p>See <a
   * href="https://docs.aws.amazon.com/transcribe/latest/dg/call-analytics-create-categories.html#call-analytics-create-categories-rules">Rule
   * criteria</a> for usage examples.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/InterruptionFilter">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API InterruptionFilter
  {
  public:
    InterruptionFilter();
    InterruptionFilter(Aws::Utils::Json::JsonView jsonValue);
    InterruptionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specify the duration of the interruptions in milliseconds. For example, you
     * can flag speech that contains more than 10000 milliseconds of interruptions.</p>
     */
    inline long long GetThreshold() const{ return m_threshold; }

    /**
     * <p>Specify the duration of the interruptions in milliseconds. For example, you
     * can flag speech that contains more than 10000 milliseconds of interruptions.</p>
     */
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }

    /**
     * <p>Specify the duration of the interruptions in milliseconds. For example, you
     * can flag speech that contains more than 10000 milliseconds of interruptions.</p>
     */
    inline void SetThreshold(long long value) { m_thresholdHasBeenSet = true; m_threshold = value; }

    /**
     * <p>Specify the duration of the interruptions in milliseconds. For example, you
     * can flag speech that contains more than 10000 milliseconds of interruptions.</p>
     */
    inline InterruptionFilter& WithThreshold(long long value) { SetThreshold(value); return *this;}


    /**
     * <p>Specify the interrupter you want to flag. Omitting this parameter is
     * equivalent to specifying both participants.</p>
     */
    inline const ParticipantRole& GetParticipantRole() const{ return m_participantRole; }

    /**
     * <p>Specify the interrupter you want to flag. Omitting this parameter is
     * equivalent to specifying both participants.</p>
     */
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }

    /**
     * <p>Specify the interrupter you want to flag. Omitting this parameter is
     * equivalent to specifying both participants.</p>
     */
    inline void SetParticipantRole(const ParticipantRole& value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }

    /**
     * <p>Specify the interrupter you want to flag. Omitting this parameter is
     * equivalent to specifying both participants.</p>
     */
    inline void SetParticipantRole(ParticipantRole&& value) { m_participantRoleHasBeenSet = true; m_participantRole = std::move(value); }

    /**
     * <p>Specify the interrupter you want to flag. Omitting this parameter is
     * equivalent to specifying both participants.</p>
     */
    inline InterruptionFilter& WithParticipantRole(const ParticipantRole& value) { SetParticipantRole(value); return *this;}

    /**
     * <p>Specify the interrupter you want to flag. Omitting this parameter is
     * equivalent to specifying both participants.</p>
     */
    inline InterruptionFilter& WithParticipantRole(ParticipantRole&& value) { SetParticipantRole(std::move(value)); return *this;}


    /**
     * <p>Allows you to specify a time range (in milliseconds) in your audio, during
     * which you want to search for an interruption. See for more detail.</p>
     */
    inline const AbsoluteTimeRange& GetAbsoluteTimeRange() const{ return m_absoluteTimeRange; }

    /**
     * <p>Allows you to specify a time range (in milliseconds) in your audio, during
     * which you want to search for an interruption. See for more detail.</p>
     */
    inline bool AbsoluteTimeRangeHasBeenSet() const { return m_absoluteTimeRangeHasBeenSet; }

    /**
     * <p>Allows you to specify a time range (in milliseconds) in your audio, during
     * which you want to search for an interruption. See for more detail.</p>
     */
    inline void SetAbsoluteTimeRange(const AbsoluteTimeRange& value) { m_absoluteTimeRangeHasBeenSet = true; m_absoluteTimeRange = value; }

    /**
     * <p>Allows you to specify a time range (in milliseconds) in your audio, during
     * which you want to search for an interruption. See for more detail.</p>
     */
    inline void SetAbsoluteTimeRange(AbsoluteTimeRange&& value) { m_absoluteTimeRangeHasBeenSet = true; m_absoluteTimeRange = std::move(value); }

    /**
     * <p>Allows you to specify a time range (in milliseconds) in your audio, during
     * which you want to search for an interruption. See for more detail.</p>
     */
    inline InterruptionFilter& WithAbsoluteTimeRange(const AbsoluteTimeRange& value) { SetAbsoluteTimeRange(value); return *this;}

    /**
     * <p>Allows you to specify a time range (in milliseconds) in your audio, during
     * which you want to search for an interruption. See for more detail.</p>
     */
    inline InterruptionFilter& WithAbsoluteTimeRange(AbsoluteTimeRange&& value) { SetAbsoluteTimeRange(std::move(value)); return *this;}


    /**
     * <p>Allows you to specify a time range (in percentage) in your media file, during
     * which you want to search for an interruption. See for more detail.</p>
     */
    inline const RelativeTimeRange& GetRelativeTimeRange() const{ return m_relativeTimeRange; }

    /**
     * <p>Allows you to specify a time range (in percentage) in your media file, during
     * which you want to search for an interruption. See for more detail.</p>
     */
    inline bool RelativeTimeRangeHasBeenSet() const { return m_relativeTimeRangeHasBeenSet; }

    /**
     * <p>Allows you to specify a time range (in percentage) in your media file, during
     * which you want to search for an interruption. See for more detail.</p>
     */
    inline void SetRelativeTimeRange(const RelativeTimeRange& value) { m_relativeTimeRangeHasBeenSet = true; m_relativeTimeRange = value; }

    /**
     * <p>Allows you to specify a time range (in percentage) in your media file, during
     * which you want to search for an interruption. See for more detail.</p>
     */
    inline void SetRelativeTimeRange(RelativeTimeRange&& value) { m_relativeTimeRangeHasBeenSet = true; m_relativeTimeRange = std::move(value); }

    /**
     * <p>Allows you to specify a time range (in percentage) in your media file, during
     * which you want to search for an interruption. See for more detail.</p>
     */
    inline InterruptionFilter& WithRelativeTimeRange(const RelativeTimeRange& value) { SetRelativeTimeRange(value); return *this;}

    /**
     * <p>Allows you to specify a time range (in percentage) in your media file, during
     * which you want to search for an interruption. See for more detail.</p>
     */
    inline InterruptionFilter& WithRelativeTimeRange(RelativeTimeRange&& value) { SetRelativeTimeRange(std::move(value)); return *this;}


    /**
     * <p>Set to <code>TRUE</code> to flag speech that does not contain interruptions.
     * Set to <code>FALSE</code> to flag speech that contains interruptions.</p>
     */
    inline bool GetNegate() const{ return m_negate; }

    /**
     * <p>Set to <code>TRUE</code> to flag speech that does not contain interruptions.
     * Set to <code>FALSE</code> to flag speech that contains interruptions.</p>
     */
    inline bool NegateHasBeenSet() const { return m_negateHasBeenSet; }

    /**
     * <p>Set to <code>TRUE</code> to flag speech that does not contain interruptions.
     * Set to <code>FALSE</code> to flag speech that contains interruptions.</p>
     */
    inline void SetNegate(bool value) { m_negateHasBeenSet = true; m_negate = value; }

    /**
     * <p>Set to <code>TRUE</code> to flag speech that does not contain interruptions.
     * Set to <code>FALSE</code> to flag speech that contains interruptions.</p>
     */
    inline InterruptionFilter& WithNegate(bool value) { SetNegate(value); return *this;}

  private:

    long long m_threshold;
    bool m_thresholdHasBeenSet;

    ParticipantRole m_participantRole;
    bool m_participantRoleHasBeenSet;

    AbsoluteTimeRange m_absoluteTimeRange;
    bool m_absoluteTimeRangeHasBeenSet;

    RelativeTimeRange m_relativeTimeRange;
    bool m_relativeTimeRangeHasBeenSet;

    bool m_negate;
    bool m_negateHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
