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
    AWS_CHIMESDKVOICE_API VoiceToneAnalysisTask();
    AWS_CHIMESDKVOICE_API VoiceToneAnalysisTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API VoiceToneAnalysisTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline const Aws::String& GetVoiceToneAnalysisTaskId() const{ return m_voiceToneAnalysisTaskId; }

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline bool VoiceToneAnalysisTaskIdHasBeenSet() const { return m_voiceToneAnalysisTaskIdHasBeenSet; }

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline void SetVoiceToneAnalysisTaskId(const Aws::String& value) { m_voiceToneAnalysisTaskIdHasBeenSet = true; m_voiceToneAnalysisTaskId = value; }

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline void SetVoiceToneAnalysisTaskId(Aws::String&& value) { m_voiceToneAnalysisTaskIdHasBeenSet = true; m_voiceToneAnalysisTaskId = std::move(value); }

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline void SetVoiceToneAnalysisTaskId(const char* value) { m_voiceToneAnalysisTaskIdHasBeenSet = true; m_voiceToneAnalysisTaskId.assign(value); }

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline VoiceToneAnalysisTask& WithVoiceToneAnalysisTaskId(const Aws::String& value) { SetVoiceToneAnalysisTaskId(value); return *this;}

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline VoiceToneAnalysisTask& WithVoiceToneAnalysisTaskId(Aws::String&& value) { SetVoiceToneAnalysisTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline VoiceToneAnalysisTask& WithVoiceToneAnalysisTaskId(const char* value) { SetVoiceToneAnalysisTaskId(value); return *this;}


    /**
     * <p>The status of a voice tone analysis task, <code>IN_QUEUE</code>,
     * <code>IN_PROGRESS</code>, <code>PARTIAL_SUCCESS</code>, <code>SUCCEEDED</code>,
     * <code>FAILED</code>, or <code>STOPPED</code>.</p>
     */
    inline const Aws::String& GetVoiceToneAnalysisTaskStatus() const{ return m_voiceToneAnalysisTaskStatus; }

    /**
     * <p>The status of a voice tone analysis task, <code>IN_QUEUE</code>,
     * <code>IN_PROGRESS</code>, <code>PARTIAL_SUCCESS</code>, <code>SUCCEEDED</code>,
     * <code>FAILED</code>, or <code>STOPPED</code>.</p>
     */
    inline bool VoiceToneAnalysisTaskStatusHasBeenSet() const { return m_voiceToneAnalysisTaskStatusHasBeenSet; }

    /**
     * <p>The status of a voice tone analysis task, <code>IN_QUEUE</code>,
     * <code>IN_PROGRESS</code>, <code>PARTIAL_SUCCESS</code>, <code>SUCCEEDED</code>,
     * <code>FAILED</code>, or <code>STOPPED</code>.</p>
     */
    inline void SetVoiceToneAnalysisTaskStatus(const Aws::String& value) { m_voiceToneAnalysisTaskStatusHasBeenSet = true; m_voiceToneAnalysisTaskStatus = value; }

    /**
     * <p>The status of a voice tone analysis task, <code>IN_QUEUE</code>,
     * <code>IN_PROGRESS</code>, <code>PARTIAL_SUCCESS</code>, <code>SUCCEEDED</code>,
     * <code>FAILED</code>, or <code>STOPPED</code>.</p>
     */
    inline void SetVoiceToneAnalysisTaskStatus(Aws::String&& value) { m_voiceToneAnalysisTaskStatusHasBeenSet = true; m_voiceToneAnalysisTaskStatus = std::move(value); }

    /**
     * <p>The status of a voice tone analysis task, <code>IN_QUEUE</code>,
     * <code>IN_PROGRESS</code>, <code>PARTIAL_SUCCESS</code>, <code>SUCCEEDED</code>,
     * <code>FAILED</code>, or <code>STOPPED</code>.</p>
     */
    inline void SetVoiceToneAnalysisTaskStatus(const char* value) { m_voiceToneAnalysisTaskStatusHasBeenSet = true; m_voiceToneAnalysisTaskStatus.assign(value); }

    /**
     * <p>The status of a voice tone analysis task, <code>IN_QUEUE</code>,
     * <code>IN_PROGRESS</code>, <code>PARTIAL_SUCCESS</code>, <code>SUCCEEDED</code>,
     * <code>FAILED</code>, or <code>STOPPED</code>.</p>
     */
    inline VoiceToneAnalysisTask& WithVoiceToneAnalysisTaskStatus(const Aws::String& value) { SetVoiceToneAnalysisTaskStatus(value); return *this;}

    /**
     * <p>The status of a voice tone analysis task, <code>IN_QUEUE</code>,
     * <code>IN_PROGRESS</code>, <code>PARTIAL_SUCCESS</code>, <code>SUCCEEDED</code>,
     * <code>FAILED</code>, or <code>STOPPED</code>.</p>
     */
    inline VoiceToneAnalysisTask& WithVoiceToneAnalysisTaskStatus(Aws::String&& value) { SetVoiceToneAnalysisTaskStatus(std::move(value)); return *this;}

    /**
     * <p>The status of a voice tone analysis task, <code>IN_QUEUE</code>,
     * <code>IN_PROGRESS</code>, <code>PARTIAL_SUCCESS</code>, <code>SUCCEEDED</code>,
     * <code>FAILED</code>, or <code>STOPPED</code>.</p>
     */
    inline VoiceToneAnalysisTask& WithVoiceToneAnalysisTaskStatus(const char* value) { SetVoiceToneAnalysisTaskStatus(value); return *this;}


    /**
     * <p>The call details of a voice tone analysis task.</p>
     */
    inline const CallDetails& GetCallDetails() const{ return m_callDetails; }

    /**
     * <p>The call details of a voice tone analysis task.</p>
     */
    inline bool CallDetailsHasBeenSet() const { return m_callDetailsHasBeenSet; }

    /**
     * <p>The call details of a voice tone analysis task.</p>
     */
    inline void SetCallDetails(const CallDetails& value) { m_callDetailsHasBeenSet = true; m_callDetails = value; }

    /**
     * <p>The call details of a voice tone analysis task.</p>
     */
    inline void SetCallDetails(CallDetails&& value) { m_callDetailsHasBeenSet = true; m_callDetails = std::move(value); }

    /**
     * <p>The call details of a voice tone analysis task.</p>
     */
    inline VoiceToneAnalysisTask& WithCallDetails(const CallDetails& value) { SetCallDetails(value); return *this;}

    /**
     * <p>The call details of a voice tone analysis task.</p>
     */
    inline VoiceToneAnalysisTask& WithCallDetails(CallDetails&& value) { SetCallDetails(std::move(value)); return *this;}


    /**
     * <p>The time at which a voice tone analysis task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time at which a voice tone analysis task was created.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The time at which a voice tone analysis task was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The time at which a voice tone analysis task was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The time at which a voice tone analysis task was created.</p>
     */
    inline VoiceToneAnalysisTask& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time at which a voice tone analysis task was created.</p>
     */
    inline VoiceToneAnalysisTask& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time at which a voice tone analysis task was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    /**
     * <p>The time at which a voice tone analysis task was updated.</p>
     */
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }

    /**
     * <p>The time at which a voice tone analysis task was updated.</p>
     */
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }

    /**
     * <p>The time at which a voice tone analysis task was updated.</p>
     */
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }

    /**
     * <p>The time at which a voice tone analysis task was updated.</p>
     */
    inline VoiceToneAnalysisTask& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    /**
     * <p>The time at which a voice tone analysis task was updated.</p>
     */
    inline VoiceToneAnalysisTask& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time at which a voice tone analysis task started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedTimestamp() const{ return m_startedTimestamp; }

    /**
     * <p>The time at which a voice tone analysis task started.</p>
     */
    inline bool StartedTimestampHasBeenSet() const { return m_startedTimestampHasBeenSet; }

    /**
     * <p>The time at which a voice tone analysis task started.</p>
     */
    inline void SetStartedTimestamp(const Aws::Utils::DateTime& value) { m_startedTimestampHasBeenSet = true; m_startedTimestamp = value; }

    /**
     * <p>The time at which a voice tone analysis task started.</p>
     */
    inline void SetStartedTimestamp(Aws::Utils::DateTime&& value) { m_startedTimestampHasBeenSet = true; m_startedTimestamp = std::move(value); }

    /**
     * <p>The time at which a voice tone analysis task started.</p>
     */
    inline VoiceToneAnalysisTask& WithStartedTimestamp(const Aws::Utils::DateTime& value) { SetStartedTimestamp(value); return *this;}

    /**
     * <p>The time at which a voice tone analysis task started.</p>
     */
    inline VoiceToneAnalysisTask& WithStartedTimestamp(Aws::Utils::DateTime&& value) { SetStartedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The status of a voice tone analysis task.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status of a voice tone analysis task.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status of a voice tone analysis task.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status of a voice tone analysis task.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status of a voice tone analysis task.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status of a voice tone analysis task.</p>
     */
    inline VoiceToneAnalysisTask& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status of a voice tone analysis task.</p>
     */
    inline VoiceToneAnalysisTask& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status of a voice tone analysis task.</p>
     */
    inline VoiceToneAnalysisTask& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::String m_voiceToneAnalysisTaskId;
    bool m_voiceToneAnalysisTaskIdHasBeenSet = false;

    Aws::String m_voiceToneAnalysisTaskStatus;
    bool m_voiceToneAnalysisTaskStatusHasBeenSet = false;

    CallDetails m_callDetails;
    bool m_callDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp;
    bool m_updatedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_startedTimestamp;
    bool m_startedTimestampHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
