/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/GlobalConfigurationInputEndAction.h>
#include <aws/medialive/model/InputLossBehavior.h>
#include <aws/medialive/model/GlobalConfigurationOutputLockingMode.h>
#include <aws/medialive/model/GlobalConfigurationOutputTimingSource.h>
#include <aws/medialive/model/GlobalConfigurationLowFramerateInputs.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Global Configuration<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/GlobalConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API GlobalConfiguration
  {
  public:
    GlobalConfiguration();
    GlobalConfiguration(Aws::Utils::Json::JsonView jsonValue);
    GlobalConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Value to set the initial audio gain for the Live Event.
     */
    inline int GetInitialAudioGain() const{ return m_initialAudioGain; }

    /**
     * Value to set the initial audio gain for the Live Event.
     */
    inline bool InitialAudioGainHasBeenSet() const { return m_initialAudioGainHasBeenSet; }

    /**
     * Value to set the initial audio gain for the Live Event.
     */
    inline void SetInitialAudioGain(int value) { m_initialAudioGainHasBeenSet = true; m_initialAudioGain = value; }

    /**
     * Value to set the initial audio gain for the Live Event.
     */
    inline GlobalConfiguration& WithInitialAudioGain(int value) { SetInitialAudioGain(value); return *this;}


    /**
     * Indicates the action to take when the current input completes (e.g.
     * end-of-file). When switchAndLoopInputs is configured the encoder will restart at
     * the beginning of the first input.  When "none" is configured the encoder will
     * transcode either black, a solid color, or a user specified slate images per the
     * "Input Loss Behavior" configuration until the next input switch occurs (which is
     * controlled through the Channel Schedule API).
     */
    inline const GlobalConfigurationInputEndAction& GetInputEndAction() const{ return m_inputEndAction; }

    /**
     * Indicates the action to take when the current input completes (e.g.
     * end-of-file). When switchAndLoopInputs is configured the encoder will restart at
     * the beginning of the first input.  When "none" is configured the encoder will
     * transcode either black, a solid color, or a user specified slate images per the
     * "Input Loss Behavior" configuration until the next input switch occurs (which is
     * controlled through the Channel Schedule API).
     */
    inline bool InputEndActionHasBeenSet() const { return m_inputEndActionHasBeenSet; }

    /**
     * Indicates the action to take when the current input completes (e.g.
     * end-of-file). When switchAndLoopInputs is configured the encoder will restart at
     * the beginning of the first input.  When "none" is configured the encoder will
     * transcode either black, a solid color, or a user specified slate images per the
     * "Input Loss Behavior" configuration until the next input switch occurs (which is
     * controlled through the Channel Schedule API).
     */
    inline void SetInputEndAction(const GlobalConfigurationInputEndAction& value) { m_inputEndActionHasBeenSet = true; m_inputEndAction = value; }

    /**
     * Indicates the action to take when the current input completes (e.g.
     * end-of-file). When switchAndLoopInputs is configured the encoder will restart at
     * the beginning of the first input.  When "none" is configured the encoder will
     * transcode either black, a solid color, or a user specified slate images per the
     * "Input Loss Behavior" configuration until the next input switch occurs (which is
     * controlled through the Channel Schedule API).
     */
    inline void SetInputEndAction(GlobalConfigurationInputEndAction&& value) { m_inputEndActionHasBeenSet = true; m_inputEndAction = std::move(value); }

    /**
     * Indicates the action to take when the current input completes (e.g.
     * end-of-file). When switchAndLoopInputs is configured the encoder will restart at
     * the beginning of the first input.  When "none" is configured the encoder will
     * transcode either black, a solid color, or a user specified slate images per the
     * "Input Loss Behavior" configuration until the next input switch occurs (which is
     * controlled through the Channel Schedule API).
     */
    inline GlobalConfiguration& WithInputEndAction(const GlobalConfigurationInputEndAction& value) { SetInputEndAction(value); return *this;}

    /**
     * Indicates the action to take when the current input completes (e.g.
     * end-of-file). When switchAndLoopInputs is configured the encoder will restart at
     * the beginning of the first input.  When "none" is configured the encoder will
     * transcode either black, a solid color, or a user specified slate images per the
     * "Input Loss Behavior" configuration until the next input switch occurs (which is
     * controlled through the Channel Schedule API).
     */
    inline GlobalConfiguration& WithInputEndAction(GlobalConfigurationInputEndAction&& value) { SetInputEndAction(std::move(value)); return *this;}


    /**
     * Settings for system actions when input is lost.
     */
    inline const InputLossBehavior& GetInputLossBehavior() const{ return m_inputLossBehavior; }

    /**
     * Settings for system actions when input is lost.
     */
    inline bool InputLossBehaviorHasBeenSet() const { return m_inputLossBehaviorHasBeenSet; }

    /**
     * Settings for system actions when input is lost.
     */
    inline void SetInputLossBehavior(const InputLossBehavior& value) { m_inputLossBehaviorHasBeenSet = true; m_inputLossBehavior = value; }

    /**
     * Settings for system actions when input is lost.
     */
    inline void SetInputLossBehavior(InputLossBehavior&& value) { m_inputLossBehaviorHasBeenSet = true; m_inputLossBehavior = std::move(value); }

    /**
     * Settings for system actions when input is lost.
     */
    inline GlobalConfiguration& WithInputLossBehavior(const InputLossBehavior& value) { SetInputLossBehavior(value); return *this;}

    /**
     * Settings for system actions when input is lost.
     */
    inline GlobalConfiguration& WithInputLossBehavior(InputLossBehavior&& value) { SetInputLossBehavior(std::move(value)); return *this;}


    /**
     * Indicates how MediaLive pipelines are synchronized.

PIPELINELOCKING - MediaLive
     * will attempt to synchronize the output of each pipeline to the
     * other.
EPOCHLOCKING - MediaLive will attempt to synchronize the output of each
     * pipeline to the Unix epoch.
     */
    inline const GlobalConfigurationOutputLockingMode& GetOutputLockingMode() const{ return m_outputLockingMode; }

    /**
     * Indicates how MediaLive pipelines are synchronized.

PIPELINELOCKING - MediaLive
     * will attempt to synchronize the output of each pipeline to the
     * other.
EPOCHLOCKING - MediaLive will attempt to synchronize the output of each
     * pipeline to the Unix epoch.
     */
    inline bool OutputLockingModeHasBeenSet() const { return m_outputLockingModeHasBeenSet; }

    /**
     * Indicates how MediaLive pipelines are synchronized.

PIPELINELOCKING - MediaLive
     * will attempt to synchronize the output of each pipeline to the
     * other.
EPOCHLOCKING - MediaLive will attempt to synchronize the output of each
     * pipeline to the Unix epoch.
     */
    inline void SetOutputLockingMode(const GlobalConfigurationOutputLockingMode& value) { m_outputLockingModeHasBeenSet = true; m_outputLockingMode = value; }

    /**
     * Indicates how MediaLive pipelines are synchronized.

PIPELINELOCKING - MediaLive
     * will attempt to synchronize the output of each pipeline to the
     * other.
EPOCHLOCKING - MediaLive will attempt to synchronize the output of each
     * pipeline to the Unix epoch.
     */
    inline void SetOutputLockingMode(GlobalConfigurationOutputLockingMode&& value) { m_outputLockingModeHasBeenSet = true; m_outputLockingMode = std::move(value); }

    /**
     * Indicates how MediaLive pipelines are synchronized.

PIPELINELOCKING - MediaLive
     * will attempt to synchronize the output of each pipeline to the
     * other.
EPOCHLOCKING - MediaLive will attempt to synchronize the output of each
     * pipeline to the Unix epoch.
     */
    inline GlobalConfiguration& WithOutputLockingMode(const GlobalConfigurationOutputLockingMode& value) { SetOutputLockingMode(value); return *this;}

    /**
     * Indicates how MediaLive pipelines are synchronized.

PIPELINELOCKING - MediaLive
     * will attempt to synchronize the output of each pipeline to the
     * other.
EPOCHLOCKING - MediaLive will attempt to synchronize the output of each
     * pipeline to the Unix epoch.
     */
    inline GlobalConfiguration& WithOutputLockingMode(GlobalConfigurationOutputLockingMode&& value) { SetOutputLockingMode(std::move(value)); return *this;}


    /**
     * Indicates whether the rate of frames emitted by the Live encoder should be paced
     * by its system clock (which optionally may be locked to another source via NTP)
     * or should be locked to the clock of the source that is providing the input
     * stream.
     */
    inline const GlobalConfigurationOutputTimingSource& GetOutputTimingSource() const{ return m_outputTimingSource; }

    /**
     * Indicates whether the rate of frames emitted by the Live encoder should be paced
     * by its system clock (which optionally may be locked to another source via NTP)
     * or should be locked to the clock of the source that is providing the input
     * stream.
     */
    inline bool OutputTimingSourceHasBeenSet() const { return m_outputTimingSourceHasBeenSet; }

    /**
     * Indicates whether the rate of frames emitted by the Live encoder should be paced
     * by its system clock (which optionally may be locked to another source via NTP)
     * or should be locked to the clock of the source that is providing the input
     * stream.
     */
    inline void SetOutputTimingSource(const GlobalConfigurationOutputTimingSource& value) { m_outputTimingSourceHasBeenSet = true; m_outputTimingSource = value; }

    /**
     * Indicates whether the rate of frames emitted by the Live encoder should be paced
     * by its system clock (which optionally may be locked to another source via NTP)
     * or should be locked to the clock of the source that is providing the input
     * stream.
     */
    inline void SetOutputTimingSource(GlobalConfigurationOutputTimingSource&& value) { m_outputTimingSourceHasBeenSet = true; m_outputTimingSource = std::move(value); }

    /**
     * Indicates whether the rate of frames emitted by the Live encoder should be paced
     * by its system clock (which optionally may be locked to another source via NTP)
     * or should be locked to the clock of the source that is providing the input
     * stream.
     */
    inline GlobalConfiguration& WithOutputTimingSource(const GlobalConfigurationOutputTimingSource& value) { SetOutputTimingSource(value); return *this;}

    /**
     * Indicates whether the rate of frames emitted by the Live encoder should be paced
     * by its system clock (which optionally may be locked to another source via NTP)
     * or should be locked to the clock of the source that is providing the input
     * stream.
     */
    inline GlobalConfiguration& WithOutputTimingSource(GlobalConfigurationOutputTimingSource&& value) { SetOutputTimingSource(std::move(value)); return *this;}


    /**
     * Adjusts video input buffer for streams with very low video framerates. This is
     * commonly set to enabled for music channels with less than one video frame per
     * second.
     */
    inline const GlobalConfigurationLowFramerateInputs& GetSupportLowFramerateInputs() const{ return m_supportLowFramerateInputs; }

    /**
     * Adjusts video input buffer for streams with very low video framerates. This is
     * commonly set to enabled for music channels with less than one video frame per
     * second.
     */
    inline bool SupportLowFramerateInputsHasBeenSet() const { return m_supportLowFramerateInputsHasBeenSet; }

    /**
     * Adjusts video input buffer for streams with very low video framerates. This is
     * commonly set to enabled for music channels with less than one video frame per
     * second.
     */
    inline void SetSupportLowFramerateInputs(const GlobalConfigurationLowFramerateInputs& value) { m_supportLowFramerateInputsHasBeenSet = true; m_supportLowFramerateInputs = value; }

    /**
     * Adjusts video input buffer for streams with very low video framerates. This is
     * commonly set to enabled for music channels with less than one video frame per
     * second.
     */
    inline void SetSupportLowFramerateInputs(GlobalConfigurationLowFramerateInputs&& value) { m_supportLowFramerateInputsHasBeenSet = true; m_supportLowFramerateInputs = std::move(value); }

    /**
     * Adjusts video input buffer for streams with very low video framerates. This is
     * commonly set to enabled for music channels with less than one video frame per
     * second.
     */
    inline GlobalConfiguration& WithSupportLowFramerateInputs(const GlobalConfigurationLowFramerateInputs& value) { SetSupportLowFramerateInputs(value); return *this;}

    /**
     * Adjusts video input buffer for streams with very low video framerates. This is
     * commonly set to enabled for music channels with less than one video frame per
     * second.
     */
    inline GlobalConfiguration& WithSupportLowFramerateInputs(GlobalConfigurationLowFramerateInputs&& value) { SetSupportLowFramerateInputs(std::move(value)); return *this;}

  private:

    int m_initialAudioGain;
    bool m_initialAudioGainHasBeenSet;

    GlobalConfigurationInputEndAction m_inputEndAction;
    bool m_inputEndActionHasBeenSet;

    InputLossBehavior m_inputLossBehavior;
    bool m_inputLossBehaviorHasBeenSet;

    GlobalConfigurationOutputLockingMode m_outputLockingMode;
    bool m_outputLockingModeHasBeenSet;

    GlobalConfigurationOutputTimingSource m_outputTimingSource;
    bool m_outputTimingSourceHasBeenSet;

    GlobalConfigurationLowFramerateInputs m_supportLowFramerateInputs;
    bool m_supportLowFramerateInputsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
