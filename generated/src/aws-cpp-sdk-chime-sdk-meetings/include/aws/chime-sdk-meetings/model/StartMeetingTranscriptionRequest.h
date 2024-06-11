/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-meetings/model/TranscriptionConfiguration.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKMeetings
{
namespace Model
{

  /**
   */
  class StartMeetingTranscriptionRequest : public ChimeSDKMeetingsRequest
  {
  public:
    AWS_CHIMESDKMEETINGS_API StartMeetingTranscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMeetingTranscription"; }

    AWS_CHIMESDKMEETINGS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID of the meeting being transcribed.</p>
     */
    inline const Aws::String& GetMeetingId() const{ return m_meetingId; }
    inline bool MeetingIdHasBeenSet() const { return m_meetingIdHasBeenSet; }
    inline void SetMeetingId(const Aws::String& value) { m_meetingIdHasBeenSet = true; m_meetingId = value; }
    inline void SetMeetingId(Aws::String&& value) { m_meetingIdHasBeenSet = true; m_meetingId = std::move(value); }
    inline void SetMeetingId(const char* value) { m_meetingIdHasBeenSet = true; m_meetingId.assign(value); }
    inline StartMeetingTranscriptionRequest& WithMeetingId(const Aws::String& value) { SetMeetingId(value); return *this;}
    inline StartMeetingTranscriptionRequest& WithMeetingId(Aws::String&& value) { SetMeetingId(std::move(value)); return *this;}
    inline StartMeetingTranscriptionRequest& WithMeetingId(const char* value) { SetMeetingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the current transcription operation. Must contain
     * <code>EngineTranscribeSettings</code> or
     * <code>EngineTranscribeMedicalSettings</code>.</p>
     */
    inline const TranscriptionConfiguration& GetTranscriptionConfiguration() const{ return m_transcriptionConfiguration; }
    inline bool TranscriptionConfigurationHasBeenSet() const { return m_transcriptionConfigurationHasBeenSet; }
    inline void SetTranscriptionConfiguration(const TranscriptionConfiguration& value) { m_transcriptionConfigurationHasBeenSet = true; m_transcriptionConfiguration = value; }
    inline void SetTranscriptionConfiguration(TranscriptionConfiguration&& value) { m_transcriptionConfigurationHasBeenSet = true; m_transcriptionConfiguration = std::move(value); }
    inline StartMeetingTranscriptionRequest& WithTranscriptionConfiguration(const TranscriptionConfiguration& value) { SetTranscriptionConfiguration(value); return *this;}
    inline StartMeetingTranscriptionRequest& WithTranscriptionConfiguration(TranscriptionConfiguration&& value) { SetTranscriptionConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_meetingId;
    bool m_meetingIdHasBeenSet = false;

    TranscriptionConfiguration m_transcriptionConfiguration;
    bool m_transcriptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
