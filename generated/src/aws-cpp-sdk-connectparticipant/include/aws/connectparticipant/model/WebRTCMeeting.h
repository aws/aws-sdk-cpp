/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/connectparticipant/model/WebRTCMediaPlacement.h>
#include <aws/connectparticipant/model/MeetingFeaturesConfiguration.h>
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
namespace ConnectParticipant
{
namespace Model
{

  /**
   * <p>A meeting created using the Amazon Chime SDK.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/WebRTCMeeting">AWS
   * API Reference</a></p>
   */
  class WebRTCMeeting
  {
  public:
    AWS_CONNECTPARTICIPANT_API WebRTCMeeting() = default;
    AWS_CONNECTPARTICIPANT_API WebRTCMeeting(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API WebRTCMeeting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The media placement for the meeting.</p>
     */
    inline const WebRTCMediaPlacement& GetMediaPlacement() const { return m_mediaPlacement; }
    inline bool MediaPlacementHasBeenSet() const { return m_mediaPlacementHasBeenSet; }
    template<typename MediaPlacementT = WebRTCMediaPlacement>
    void SetMediaPlacement(MediaPlacementT&& value) { m_mediaPlacementHasBeenSet = true; m_mediaPlacement = std::forward<MediaPlacementT>(value); }
    template<typename MediaPlacementT = WebRTCMediaPlacement>
    WebRTCMeeting& WithMediaPlacement(MediaPlacementT&& value) { SetMediaPlacement(std::forward<MediaPlacementT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MeetingFeaturesConfiguration& GetMeetingFeatures() const { return m_meetingFeatures; }
    inline bool MeetingFeaturesHasBeenSet() const { return m_meetingFeaturesHasBeenSet; }
    template<typename MeetingFeaturesT = MeetingFeaturesConfiguration>
    void SetMeetingFeatures(MeetingFeaturesT&& value) { m_meetingFeaturesHasBeenSet = true; m_meetingFeatures = std::forward<MeetingFeaturesT>(value); }
    template<typename MeetingFeaturesT = MeetingFeaturesConfiguration>
    WebRTCMeeting& WithMeetingFeatures(MeetingFeaturesT&& value) { SetMeetingFeatures(std::forward<MeetingFeaturesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline const Aws::String& GetMeetingId() const { return m_meetingId; }
    inline bool MeetingIdHasBeenSet() const { return m_meetingIdHasBeenSet; }
    template<typename MeetingIdT = Aws::String>
    void SetMeetingId(MeetingIdT&& value) { m_meetingIdHasBeenSet = true; m_meetingId = std::forward<MeetingIdT>(value); }
    template<typename MeetingIdT = Aws::String>
    WebRTCMeeting& WithMeetingId(MeetingIdT&& value) { SetMeetingId(std::forward<MeetingIdT>(value)); return *this;}
    ///@}
  private:

    WebRTCMediaPlacement m_mediaPlacement;
    bool m_mediaPlacementHasBeenSet = false;

    MeetingFeaturesConfiguration m_meetingFeatures;
    bool m_meetingFeaturesHasBeenSet = false;

    Aws::String m_meetingId;
    bool m_meetingIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
