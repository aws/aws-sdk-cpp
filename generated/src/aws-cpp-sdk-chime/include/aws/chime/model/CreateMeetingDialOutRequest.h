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
    AWS_CHIME_API CreateMeetingDialOutRequest();

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
    inline const Aws::String& GetMeetingId() const{ return m_meetingId; }
    inline bool MeetingIdHasBeenSet() const { return m_meetingIdHasBeenSet; }
    inline void SetMeetingId(const Aws::String& value) { m_meetingIdHasBeenSet = true; m_meetingId = value; }
    inline void SetMeetingId(Aws::String&& value) { m_meetingIdHasBeenSet = true; m_meetingId = std::move(value); }
    inline void SetMeetingId(const char* value) { m_meetingIdHasBeenSet = true; m_meetingId.assign(value); }
    inline CreateMeetingDialOutRequest& WithMeetingId(const Aws::String& value) { SetMeetingId(value); return *this;}
    inline CreateMeetingDialOutRequest& WithMeetingId(Aws::String&& value) { SetMeetingId(std::move(value)); return *this;}
    inline CreateMeetingDialOutRequest& WithMeetingId(const char* value) { SetMeetingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Phone number used as the caller ID when the remote party receives a call.</p>
     */
    inline const Aws::String& GetFromPhoneNumber() const{ return m_fromPhoneNumber; }
    inline bool FromPhoneNumberHasBeenSet() const { return m_fromPhoneNumberHasBeenSet; }
    inline void SetFromPhoneNumber(const Aws::String& value) { m_fromPhoneNumberHasBeenSet = true; m_fromPhoneNumber = value; }
    inline void SetFromPhoneNumber(Aws::String&& value) { m_fromPhoneNumberHasBeenSet = true; m_fromPhoneNumber = std::move(value); }
    inline void SetFromPhoneNumber(const char* value) { m_fromPhoneNumberHasBeenSet = true; m_fromPhoneNumber.assign(value); }
    inline CreateMeetingDialOutRequest& WithFromPhoneNumber(const Aws::String& value) { SetFromPhoneNumber(value); return *this;}
    inline CreateMeetingDialOutRequest& WithFromPhoneNumber(Aws::String&& value) { SetFromPhoneNumber(std::move(value)); return *this;}
    inline CreateMeetingDialOutRequest& WithFromPhoneNumber(const char* value) { SetFromPhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Phone number called when inviting someone to a meeting.</p>
     */
    inline const Aws::String& GetToPhoneNumber() const{ return m_toPhoneNumber; }
    inline bool ToPhoneNumberHasBeenSet() const { return m_toPhoneNumberHasBeenSet; }
    inline void SetToPhoneNumber(const Aws::String& value) { m_toPhoneNumberHasBeenSet = true; m_toPhoneNumber = value; }
    inline void SetToPhoneNumber(Aws::String&& value) { m_toPhoneNumberHasBeenSet = true; m_toPhoneNumber = std::move(value); }
    inline void SetToPhoneNumber(const char* value) { m_toPhoneNumberHasBeenSet = true; m_toPhoneNumber.assign(value); }
    inline CreateMeetingDialOutRequest& WithToPhoneNumber(const Aws::String& value) { SetToPhoneNumber(value); return *this;}
    inline CreateMeetingDialOutRequest& WithToPhoneNumber(Aws::String&& value) { SetToPhoneNumber(std::move(value)); return *this;}
    inline CreateMeetingDialOutRequest& WithToPhoneNumber(const char* value) { SetToPhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Token used by the Amazon Chime SDK attendee. Call the <a
     * href="https://docs.aws.amazon.com/chime/latest/APIReference/API_CreateAttendee.html">CreateAttendee</a>
     * action to get a join token.</p>
     */
    inline const Aws::String& GetJoinToken() const{ return m_joinToken; }
    inline bool JoinTokenHasBeenSet() const { return m_joinTokenHasBeenSet; }
    inline void SetJoinToken(const Aws::String& value) { m_joinTokenHasBeenSet = true; m_joinToken = value; }
    inline void SetJoinToken(Aws::String&& value) { m_joinTokenHasBeenSet = true; m_joinToken = std::move(value); }
    inline void SetJoinToken(const char* value) { m_joinTokenHasBeenSet = true; m_joinToken.assign(value); }
    inline CreateMeetingDialOutRequest& WithJoinToken(const Aws::String& value) { SetJoinToken(value); return *this;}
    inline CreateMeetingDialOutRequest& WithJoinToken(Aws::String&& value) { SetJoinToken(std::move(value)); return *this;}
    inline CreateMeetingDialOutRequest& WithJoinToken(const char* value) { SetJoinToken(value); return *this;}
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
