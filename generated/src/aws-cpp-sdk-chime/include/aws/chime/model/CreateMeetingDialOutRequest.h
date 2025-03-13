/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class CreateMeetingDialOutRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API CreateMeetingDialOutRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMeetingDialOut"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline const Aws::String& GetMeetingId() const { return m_meetingId; }
    inline bool MeetingIdHasBeenSet() const { return m_meetingIdHasBeenSet; }
    template<typename MeetingIdT = Aws::String>
    void SetMeetingId(MeetingIdT&& value) { m_meetingIdHasBeenSet = true; m_meetingId = std::forward<MeetingIdT>(value); }
    template<typename MeetingIdT = Aws::String>
    CreateMeetingDialOutRequest& WithMeetingId(MeetingIdT&& value) { SetMeetingId(std::forward<MeetingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Phone number used as the caller ID when the remote party receives a call.</p>
     */
    inline const Aws::String& GetFromPhoneNumber() const { return m_fromPhoneNumber; }
    inline bool FromPhoneNumberHasBeenSet() const { return m_fromPhoneNumberHasBeenSet; }
    template<typename FromPhoneNumberT = Aws::String>
    void SetFromPhoneNumber(FromPhoneNumberT&& value) { m_fromPhoneNumberHasBeenSet = true; m_fromPhoneNumber = std::forward<FromPhoneNumberT>(value); }
    template<typename FromPhoneNumberT = Aws::String>
    CreateMeetingDialOutRequest& WithFromPhoneNumber(FromPhoneNumberT&& value) { SetFromPhoneNumber(std::forward<FromPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Phone number called when inviting someone to a meeting.</p>
     */
    inline const Aws::String& GetToPhoneNumber() const { return m_toPhoneNumber; }
    inline bool ToPhoneNumberHasBeenSet() const { return m_toPhoneNumberHasBeenSet; }
    template<typename ToPhoneNumberT = Aws::String>
    void SetToPhoneNumber(ToPhoneNumberT&& value) { m_toPhoneNumberHasBeenSet = true; m_toPhoneNumber = std::forward<ToPhoneNumberT>(value); }
    template<typename ToPhoneNumberT = Aws::String>
    CreateMeetingDialOutRequest& WithToPhoneNumber(ToPhoneNumberT&& value) { SetToPhoneNumber(std::forward<ToPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Token used by the Amazon Chime SDK attendee. Call the <a
     * href="https://docs.aws.amazon.com/chime/latest/APIReference/API_CreateAttendee.html">CreateAttendee</a>
     * action to get a join token.</p>
     */
    inline const Aws::String& GetJoinToken() const { return m_joinToken; }
    inline bool JoinTokenHasBeenSet() const { return m_joinTokenHasBeenSet; }
    template<typename JoinTokenT = Aws::String>
    void SetJoinToken(JoinTokenT&& value) { m_joinTokenHasBeenSet = true; m_joinToken = std::forward<JoinTokenT>(value); }
    template<typename JoinTokenT = Aws::String>
    CreateMeetingDialOutRequest& WithJoinToken(JoinTokenT&& value) { SetJoinToken(std::forward<JoinTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_meetingId;
    bool m_meetingIdHasBeenSet = false;

    Aws::String m_fromPhoneNumber;
    bool m_fromPhoneNumberHasBeenSet = false;

    Aws::String m_toPhoneNumber;
    bool m_toPhoneNumberHasBeenSet = false;

    Aws::String m_joinToken;
    bool m_joinTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
