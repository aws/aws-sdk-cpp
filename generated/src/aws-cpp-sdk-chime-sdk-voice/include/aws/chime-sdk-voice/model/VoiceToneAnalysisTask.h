/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/CallDetails.h>
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
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   * <p>A representation of an asynchronous request to perform voice tone analysis on
   * a Voice Connector call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/VoiceToneAnalysisTask">AWS
   * API Reference</a></p>
   */
  class VoiceToneAnalysisTask
  {
  public:
    AWS_CHIMESDKVOICE_API VoiceToneAnalysisTask() = default;
    AWS_CHIMESDKVOICE_API VoiceToneAnalysisTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API VoiceToneAnalysisTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline const Aws::String& GetVoiceToneAnalysisTaskId() const { return m_voiceToneAnalysisTaskId; }
    inline bool VoiceToneAnalysisTaskIdHasBeenSet() const { return m_voiceToneAnalysisTaskIdHasBeenSet; }
    template<typename VoiceToneAnalysisTaskIdT = Aws::String>
    void SetVoiceToneAnalysisTaskId(VoiceToneAnalysisTaskIdT&& value) { m_voiceToneAnalysisTaskIdHasBeenSet = true; m_voiceToneAnalysisTaskId = std::forward<VoiceToneAnalysisTaskIdT>(value); }
    template<typename VoiceToneAnalysisTaskIdT = Aws::String>
    VoiceToneAnalysisTask& WithVoiceToneAnalysisTaskId(VoiceToneAnalysisTaskIdT&& value) { SetVoiceToneAnalysisTaskId(std::forward<VoiceToneAnalysisTaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a voice tone analysis task, <code>IN_QUEUE</code>,
     * <code>IN_PROGRESS</code>, <code>PARTIAL_SUCCESS</code>, <code>SUCCEEDED</code>,
     * <code>FAILED</code>, or <code>STOPPED</code>.</p>
     */
    inline const Aws::String& GetVoiceToneAnalysisTaskStatus() const { return m_voiceToneAnalysisTaskStatus; }
    inline bool VoiceToneAnalysisTaskStatusHasBeenSet() const { return m_voiceToneAnalysisTaskStatusHasBeenSet; }
    template<typename VoiceToneAnalysisTaskStatusT = Aws::String>
    void SetVoiceToneAnalysisTaskStatus(VoiceToneAnalysisTaskStatusT&& value) { m_voiceToneAnalysisTaskStatusHasBeenSet = true; m_voiceToneAnalysisTaskStatus = std::forward<VoiceToneAnalysisTaskStatusT>(value); }
    template<typename VoiceToneAnalysisTaskStatusT = Aws::String>
    VoiceToneAnalysisTask& WithVoiceToneAnalysisTaskStatus(VoiceToneAnalysisTaskStatusT&& value) { SetVoiceToneAnalysisTaskStatus(std::forward<VoiceToneAnalysisTaskStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The call details of a voice tone analysis task.</p>
     */
    inline const CallDetails& GetCallDetails() const { return m_callDetails; }
    inline bool CallDetailsHasBeenSet() const { return m_callDetailsHasBeenSet; }
    template<typename CallDetailsT = CallDetails>
    void SetCallDetails(CallDetailsT&& value) { m_callDetailsHasBeenSet = true; m_callDetails = std::forward<CallDetailsT>(value); }
    template<typename CallDetailsT = CallDetails>
    VoiceToneAnalysisTask& WithCallDetails(CallDetailsT&& value) { SetCallDetails(std::forward<CallDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a voice tone analysis task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    VoiceToneAnalysisTask& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a voice tone analysis task was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const { return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    void SetUpdatedTimestamp(UpdatedTimestampT&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::forward<UpdatedTimestampT>(value); }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    VoiceToneAnalysisTask& WithUpdatedTimestamp(UpdatedTimestampT&& value) { SetUpdatedTimestamp(std::forward<UpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a voice tone analysis task started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedTimestamp() const { return m_startedTimestamp; }
    inline bool StartedTimestampHasBeenSet() const { return m_startedTimestampHasBeenSet; }
    template<typename StartedTimestampT = Aws::Utils::DateTime>
    void SetStartedTimestamp(StartedTimestampT&& value) { m_startedTimestampHasBeenSet = true; m_startedTimestamp = std::forward<StartedTimestampT>(value); }
    template<typename StartedTimestampT = Aws::Utils::DateTime>
    VoiceToneAnalysisTask& WithStartedTimestamp(StartedTimestampT&& value) { SetStartedTimestamp(std::forward<StartedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a voice tone analysis task.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    VoiceToneAnalysisTask& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_voiceToneAnalysisTaskId;
    bool m_voiceToneAnalysisTaskIdHasBeenSet = false;

    Aws::String m_voiceToneAnalysisTaskStatus;
    bool m_voiceToneAnalysisTaskStatusHasBeenSet = false;

    CallDetails m_callDetails;
    bool m_callDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp{};
    bool m_updatedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_startedTimestamp{};
    bool m_startedTimestampHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
