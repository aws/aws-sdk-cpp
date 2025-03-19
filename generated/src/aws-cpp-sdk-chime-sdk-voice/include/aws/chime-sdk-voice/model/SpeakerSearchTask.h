/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/CallDetails.h>
#include <aws/chime-sdk-voice/model/SpeakerSearchDetails.h>
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
   * <p>A representation of an asynchronous request to perform speaker search
   * analysis on a Voice Connector call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/SpeakerSearchTask">AWS
   * API Reference</a></p>
   */
  class SpeakerSearchTask
  {
  public:
    AWS_CHIMESDKVOICE_API SpeakerSearchTask() = default;
    AWS_CHIMESDKVOICE_API SpeakerSearchTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API SpeakerSearchTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The speaker search task ID.</p>
     */
    inline const Aws::String& GetSpeakerSearchTaskId() const { return m_speakerSearchTaskId; }
    inline bool SpeakerSearchTaskIdHasBeenSet() const { return m_speakerSearchTaskIdHasBeenSet; }
    template<typename SpeakerSearchTaskIdT = Aws::String>
    void SetSpeakerSearchTaskId(SpeakerSearchTaskIdT&& value) { m_speakerSearchTaskIdHasBeenSet = true; m_speakerSearchTaskId = std::forward<SpeakerSearchTaskIdT>(value); }
    template<typename SpeakerSearchTaskIdT = Aws::String>
    SpeakerSearchTask& WithSpeakerSearchTaskId(SpeakerSearchTaskIdT&& value) { SetSpeakerSearchTaskId(std::forward<SpeakerSearchTaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the speaker search task, <code>IN_QUEUE</code>,
     * <code>IN_PROGRESS</code>, <code>PARTIAL_SUCCESS</code>, <code>SUCCEEDED</code>,
     * <code>FAILED</code>, or <code>STOPPED</code>.</p>
     */
    inline const Aws::String& GetSpeakerSearchTaskStatus() const { return m_speakerSearchTaskStatus; }
    inline bool SpeakerSearchTaskStatusHasBeenSet() const { return m_speakerSearchTaskStatusHasBeenSet; }
    template<typename SpeakerSearchTaskStatusT = Aws::String>
    void SetSpeakerSearchTaskStatus(SpeakerSearchTaskStatusT&& value) { m_speakerSearchTaskStatusHasBeenSet = true; m_speakerSearchTaskStatus = std::forward<SpeakerSearchTaskStatusT>(value); }
    template<typename SpeakerSearchTaskStatusT = Aws::String>
    SpeakerSearchTask& WithSpeakerSearchTaskStatus(SpeakerSearchTaskStatusT&& value) { SetSpeakerSearchTaskStatus(std::forward<SpeakerSearchTaskStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The call details of a speaker search task.</p>
     */
    inline const CallDetails& GetCallDetails() const { return m_callDetails; }
    inline bool CallDetailsHasBeenSet() const { return m_callDetailsHasBeenSet; }
    template<typename CallDetailsT = CallDetails>
    void SetCallDetails(CallDetailsT&& value) { m_callDetailsHasBeenSet = true; m_callDetails = std::forward<CallDetailsT>(value); }
    template<typename CallDetailsT = CallDetails>
    SpeakerSearchTask& WithCallDetails(CallDetailsT&& value) { SetCallDetails(std::forward<CallDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of a speaker search task.</p>
     */
    inline const SpeakerSearchDetails& GetSpeakerSearchDetails() const { return m_speakerSearchDetails; }
    inline bool SpeakerSearchDetailsHasBeenSet() const { return m_speakerSearchDetailsHasBeenSet; }
    template<typename SpeakerSearchDetailsT = SpeakerSearchDetails>
    void SetSpeakerSearchDetails(SpeakerSearchDetailsT&& value) { m_speakerSearchDetailsHasBeenSet = true; m_speakerSearchDetails = std::forward<SpeakerSearchDetailsT>(value); }
    template<typename SpeakerSearchDetailsT = SpeakerSearchDetails>
    SpeakerSearchTask& WithSpeakerSearchDetails(SpeakerSearchDetailsT&& value) { SetSpeakerSearchDetails(std::forward<SpeakerSearchDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a speaker search task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    SpeakerSearchTask& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a speaker search task was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const { return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    void SetUpdatedTimestamp(UpdatedTimestampT&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::forward<UpdatedTimestampT>(value); }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    SpeakerSearchTask& WithUpdatedTimestamp(UpdatedTimestampT&& value) { SetUpdatedTimestamp(std::forward<UpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the speaker search task began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedTimestamp() const { return m_startedTimestamp; }
    inline bool StartedTimestampHasBeenSet() const { return m_startedTimestampHasBeenSet; }
    template<typename StartedTimestampT = Aws::Utils::DateTime>
    void SetStartedTimestamp(StartedTimestampT&& value) { m_startedTimestampHasBeenSet = true; m_startedTimestamp = std::forward<StartedTimestampT>(value); }
    template<typename StartedTimestampT = Aws::Utils::DateTime>
    SpeakerSearchTask& WithStartedTimestamp(StartedTimestampT&& value) { SetStartedTimestamp(std::forward<StartedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed message about the status of a speaker search.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    SpeakerSearchTask& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_speakerSearchTaskId;
    bool m_speakerSearchTaskIdHasBeenSet = false;

    Aws::String m_speakerSearchTaskStatus;
    bool m_speakerSearchTaskStatusHasBeenSet = false;

    CallDetails m_callDetails;
    bool m_callDetailsHasBeenSet = false;

    SpeakerSearchDetails m_speakerSearchDetails;
    bool m_speakerSearchDetailsHasBeenSet = false;

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
