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
    AWS_CHIMESDKVOICE_API SpeakerSearchTask();
    AWS_CHIMESDKVOICE_API SpeakerSearchTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API SpeakerSearchTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The speaker search task ID.</p>
     */
    inline const Aws::String& GetSpeakerSearchTaskId() const{ return m_speakerSearchTaskId; }

    /**
     * <p>The speaker search task ID.</p>
     */
    inline bool SpeakerSearchTaskIdHasBeenSet() const { return m_speakerSearchTaskIdHasBeenSet; }

    /**
     * <p>The speaker search task ID.</p>
     */
    inline void SetSpeakerSearchTaskId(const Aws::String& value) { m_speakerSearchTaskIdHasBeenSet = true; m_speakerSearchTaskId = value; }

    /**
     * <p>The speaker search task ID.</p>
     */
    inline void SetSpeakerSearchTaskId(Aws::String&& value) { m_speakerSearchTaskIdHasBeenSet = true; m_speakerSearchTaskId = std::move(value); }

    /**
     * <p>The speaker search task ID.</p>
     */
    inline void SetSpeakerSearchTaskId(const char* value) { m_speakerSearchTaskIdHasBeenSet = true; m_speakerSearchTaskId.assign(value); }

    /**
     * <p>The speaker search task ID.</p>
     */
    inline SpeakerSearchTask& WithSpeakerSearchTaskId(const Aws::String& value) { SetSpeakerSearchTaskId(value); return *this;}

    /**
     * <p>The speaker search task ID.</p>
     */
    inline SpeakerSearchTask& WithSpeakerSearchTaskId(Aws::String&& value) { SetSpeakerSearchTaskId(std::move(value)); return *this;}

    /**
     * <p>The speaker search task ID.</p>
     */
    inline SpeakerSearchTask& WithSpeakerSearchTaskId(const char* value) { SetSpeakerSearchTaskId(value); return *this;}


    /**
     * <p>The status of the speaker search task, <code>IN_QUEUE</code>,
     * <code>IN_PROGRESS</code>, <code>PARTIAL_SUCCESS</code>, <code>SUCCEEDED</code>,
     * <code>FAILED</code>, or <code>STOPPED</code>.</p>
     */
    inline const Aws::String& GetSpeakerSearchTaskStatus() const{ return m_speakerSearchTaskStatus; }

    /**
     * <p>The status of the speaker search task, <code>IN_QUEUE</code>,
     * <code>IN_PROGRESS</code>, <code>PARTIAL_SUCCESS</code>, <code>SUCCEEDED</code>,
     * <code>FAILED</code>, or <code>STOPPED</code>.</p>
     */
    inline bool SpeakerSearchTaskStatusHasBeenSet() const { return m_speakerSearchTaskStatusHasBeenSet; }

    /**
     * <p>The status of the speaker search task, <code>IN_QUEUE</code>,
     * <code>IN_PROGRESS</code>, <code>PARTIAL_SUCCESS</code>, <code>SUCCEEDED</code>,
     * <code>FAILED</code>, or <code>STOPPED</code>.</p>
     */
    inline void SetSpeakerSearchTaskStatus(const Aws::String& value) { m_speakerSearchTaskStatusHasBeenSet = true; m_speakerSearchTaskStatus = value; }

    /**
     * <p>The status of the speaker search task, <code>IN_QUEUE</code>,
     * <code>IN_PROGRESS</code>, <code>PARTIAL_SUCCESS</code>, <code>SUCCEEDED</code>,
     * <code>FAILED</code>, or <code>STOPPED</code>.</p>
     */
    inline void SetSpeakerSearchTaskStatus(Aws::String&& value) { m_speakerSearchTaskStatusHasBeenSet = true; m_speakerSearchTaskStatus = std::move(value); }

    /**
     * <p>The status of the speaker search task, <code>IN_QUEUE</code>,
     * <code>IN_PROGRESS</code>, <code>PARTIAL_SUCCESS</code>, <code>SUCCEEDED</code>,
     * <code>FAILED</code>, or <code>STOPPED</code>.</p>
     */
    inline void SetSpeakerSearchTaskStatus(const char* value) { m_speakerSearchTaskStatusHasBeenSet = true; m_speakerSearchTaskStatus.assign(value); }

    /**
     * <p>The status of the speaker search task, <code>IN_QUEUE</code>,
     * <code>IN_PROGRESS</code>, <code>PARTIAL_SUCCESS</code>, <code>SUCCEEDED</code>,
     * <code>FAILED</code>, or <code>STOPPED</code>.</p>
     */
    inline SpeakerSearchTask& WithSpeakerSearchTaskStatus(const Aws::String& value) { SetSpeakerSearchTaskStatus(value); return *this;}

    /**
     * <p>The status of the speaker search task, <code>IN_QUEUE</code>,
     * <code>IN_PROGRESS</code>, <code>PARTIAL_SUCCESS</code>, <code>SUCCEEDED</code>,
     * <code>FAILED</code>, or <code>STOPPED</code>.</p>
     */
    inline SpeakerSearchTask& WithSpeakerSearchTaskStatus(Aws::String&& value) { SetSpeakerSearchTaskStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the speaker search task, <code>IN_QUEUE</code>,
     * <code>IN_PROGRESS</code>, <code>PARTIAL_SUCCESS</code>, <code>SUCCEEDED</code>,
     * <code>FAILED</code>, or <code>STOPPED</code>.</p>
     */
    inline SpeakerSearchTask& WithSpeakerSearchTaskStatus(const char* value) { SetSpeakerSearchTaskStatus(value); return *this;}


    /**
     * <p>The call details of a speaker search task.</p>
     */
    inline const CallDetails& GetCallDetails() const{ return m_callDetails; }

    /**
     * <p>The call details of a speaker search task.</p>
     */
    inline bool CallDetailsHasBeenSet() const { return m_callDetailsHasBeenSet; }

    /**
     * <p>The call details of a speaker search task.</p>
     */
    inline void SetCallDetails(const CallDetails& value) { m_callDetailsHasBeenSet = true; m_callDetails = value; }

    /**
     * <p>The call details of a speaker search task.</p>
     */
    inline void SetCallDetails(CallDetails&& value) { m_callDetailsHasBeenSet = true; m_callDetails = std::move(value); }

    /**
     * <p>The call details of a speaker search task.</p>
     */
    inline SpeakerSearchTask& WithCallDetails(const CallDetails& value) { SetCallDetails(value); return *this;}

    /**
     * <p>The call details of a speaker search task.</p>
     */
    inline SpeakerSearchTask& WithCallDetails(CallDetails&& value) { SetCallDetails(std::move(value)); return *this;}


    /**
     * <p>The details of a speaker search task.</p>
     */
    inline const SpeakerSearchDetails& GetSpeakerSearchDetails() const{ return m_speakerSearchDetails; }

    /**
     * <p>The details of a speaker search task.</p>
     */
    inline bool SpeakerSearchDetailsHasBeenSet() const { return m_speakerSearchDetailsHasBeenSet; }

    /**
     * <p>The details of a speaker search task.</p>
     */
    inline void SetSpeakerSearchDetails(const SpeakerSearchDetails& value) { m_speakerSearchDetailsHasBeenSet = true; m_speakerSearchDetails = value; }

    /**
     * <p>The details of a speaker search task.</p>
     */
    inline void SetSpeakerSearchDetails(SpeakerSearchDetails&& value) { m_speakerSearchDetailsHasBeenSet = true; m_speakerSearchDetails = std::move(value); }

    /**
     * <p>The details of a speaker search task.</p>
     */
    inline SpeakerSearchTask& WithSpeakerSearchDetails(const SpeakerSearchDetails& value) { SetSpeakerSearchDetails(value); return *this;}

    /**
     * <p>The details of a speaker search task.</p>
     */
    inline SpeakerSearchTask& WithSpeakerSearchDetails(SpeakerSearchDetails&& value) { SetSpeakerSearchDetails(std::move(value)); return *this;}


    /**
     * <p>The time at which a speaker search task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time at which a speaker search task was created.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The time at which a speaker search task was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The time at which a speaker search task was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The time at which a speaker search task was created.</p>
     */
    inline SpeakerSearchTask& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time at which a speaker search task was created.</p>
     */
    inline SpeakerSearchTask& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time at which a speaker search task was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    /**
     * <p>The time at which a speaker search task was updated.</p>
     */
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }

    /**
     * <p>The time at which a speaker search task was updated.</p>
     */
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }

    /**
     * <p>The time at which a speaker search task was updated.</p>
     */
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }

    /**
     * <p>The time at which a speaker search task was updated.</p>
     */
    inline SpeakerSearchTask& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    /**
     * <p>The time at which a speaker search task was updated.</p>
     */
    inline SpeakerSearchTask& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time at which the speaker search task began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedTimestamp() const{ return m_startedTimestamp; }

    /**
     * <p>The time at which the speaker search task began.</p>
     */
    inline bool StartedTimestampHasBeenSet() const { return m_startedTimestampHasBeenSet; }

    /**
     * <p>The time at which the speaker search task began.</p>
     */
    inline void SetStartedTimestamp(const Aws::Utils::DateTime& value) { m_startedTimestampHasBeenSet = true; m_startedTimestamp = value; }

    /**
     * <p>The time at which the speaker search task began.</p>
     */
    inline void SetStartedTimestamp(Aws::Utils::DateTime&& value) { m_startedTimestampHasBeenSet = true; m_startedTimestamp = std::move(value); }

    /**
     * <p>The time at which the speaker search task began.</p>
     */
    inline SpeakerSearchTask& WithStartedTimestamp(const Aws::Utils::DateTime& value) { SetStartedTimestamp(value); return *this;}

    /**
     * <p>The time at which the speaker search task began.</p>
     */
    inline SpeakerSearchTask& WithStartedTimestamp(Aws::Utils::DateTime&& value) { SetStartedTimestamp(std::move(value)); return *this;}


    /**
     * <p>A detailed message about the status of a speaker search.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A detailed message about the status of a speaker search.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A detailed message about the status of a speaker search.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A detailed message about the status of a speaker search.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A detailed message about the status of a speaker search.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A detailed message about the status of a speaker search.</p>
     */
    inline SpeakerSearchTask& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A detailed message about the status of a speaker search.</p>
     */
    inline SpeakerSearchTask& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A detailed message about the status of a speaker search.</p>
     */
    inline SpeakerSearchTask& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::String m_speakerSearchTaskId;
    bool m_speakerSearchTaskIdHasBeenSet = false;

    Aws::String m_speakerSearchTaskStatus;
    bool m_speakerSearchTaskStatusHasBeenSet = false;

    CallDetails m_callDetails;
    bool m_callDetailsHasBeenSet = false;

    SpeakerSearchDetails m_speakerSearchDetails;
    bool m_speakerSearchDetailsHasBeenSet = false;

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
