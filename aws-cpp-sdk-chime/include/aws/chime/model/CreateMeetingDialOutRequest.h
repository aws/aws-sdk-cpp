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


    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline const Aws::String& GetMeetingId() const{ return m_meetingId; }

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline bool MeetingIdHasBeenSet() const { return m_meetingIdHasBeenSet; }

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline void SetMeetingId(const Aws::String& value) { m_meetingIdHasBeenSet = true; m_meetingId = value; }

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline void SetMeetingId(Aws::String&& value) { m_meetingIdHasBeenSet = true; m_meetingId = std::move(value); }

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline void SetMeetingId(const char* value) { m_meetingIdHasBeenSet = true; m_meetingId.assign(value); }

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline CreateMeetingDialOutRequest& WithMeetingId(const Aws::String& value) { SetMeetingId(value); return *this;}

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline CreateMeetingDialOutRequest& WithMeetingId(Aws::String&& value) { SetMeetingId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline CreateMeetingDialOutRequest& WithMeetingId(const char* value) { SetMeetingId(value); return *this;}


    /**
     * <p>Phone number used as the caller ID when the remote party receives a call.</p>
     */
    inline const Aws::String& GetFromPhoneNumber() const{ return m_fromPhoneNumber; }

    /**
     * <p>Phone number used as the caller ID when the remote party receives a call.</p>
     */
    inline bool FromPhoneNumberHasBeenSet() const { return m_fromPhoneNumberHasBeenSet; }

    /**
     * <p>Phone number used as the caller ID when the remote party receives a call.</p>
     */
    inline void SetFromPhoneNumber(const Aws::String& value) { m_fromPhoneNumberHasBeenSet = true; m_fromPhoneNumber = value; }

    /**
     * <p>Phone number used as the caller ID when the remote party receives a call.</p>
     */
    inline void SetFromPhoneNumber(Aws::String&& value) { m_fromPhoneNumberHasBeenSet = true; m_fromPhoneNumber = std::move(value); }

    /**
     * <p>Phone number used as the caller ID when the remote party receives a call.</p>
     */
    inline void SetFromPhoneNumber(const char* value) { m_fromPhoneNumberHasBeenSet = true; m_fromPhoneNumber.assign(value); }

    /**
     * <p>Phone number used as the caller ID when the remote party receives a call.</p>
     */
    inline CreateMeetingDialOutRequest& WithFromPhoneNumber(const Aws::String& value) { SetFromPhoneNumber(value); return *this;}

    /**
     * <p>Phone number used as the caller ID when the remote party receives a call.</p>
     */
    inline CreateMeetingDialOutRequest& WithFromPhoneNumber(Aws::String&& value) { SetFromPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>Phone number used as the caller ID when the remote party receives a call.</p>
     */
    inline CreateMeetingDialOutRequest& WithFromPhoneNumber(const char* value) { SetFromPhoneNumber(value); return *this;}


    /**
     * <p>Phone number called when inviting someone to a meeting.</p>
     */
    inline const Aws::String& GetToPhoneNumber() const{ return m_toPhoneNumber; }

    /**
     * <p>Phone number called when inviting someone to a meeting.</p>
     */
    inline bool ToPhoneNumberHasBeenSet() const { return m_toPhoneNumberHasBeenSet; }

    /**
     * <p>Phone number called when inviting someone to a meeting.</p>
     */
    inline void SetToPhoneNumber(const Aws::String& value) { m_toPhoneNumberHasBeenSet = true; m_toPhoneNumber = value; }

    /**
     * <p>Phone number called when inviting someone to a meeting.</p>
     */
    inline void SetToPhoneNumber(Aws::String&& value) { m_toPhoneNumberHasBeenSet = true; m_toPhoneNumber = std::move(value); }

    /**
     * <p>Phone number called when inviting someone to a meeting.</p>
     */
    inline void SetToPhoneNumber(const char* value) { m_toPhoneNumberHasBeenSet = true; m_toPhoneNumber.assign(value); }

    /**
     * <p>Phone number called when inviting someone to a meeting.</p>
     */
    inline CreateMeetingDialOutRequest& WithToPhoneNumber(const Aws::String& value) { SetToPhoneNumber(value); return *this;}

    /**
     * <p>Phone number called when inviting someone to a meeting.</p>
     */
    inline CreateMeetingDialOutRequest& WithToPhoneNumber(Aws::String&& value) { SetToPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>Phone number called when inviting someone to a meeting.</p>
     */
    inline CreateMeetingDialOutRequest& WithToPhoneNumber(const char* value) { SetToPhoneNumber(value); return *this;}


    /**
     * <p>Token used by the Amazon Chime SDK attendee. Call the <a
     * href="https://docs.aws.amazon.com/chime/latest/APIReference/API_CreateAttendee.html">CreateAttendee</a>
     * action to get a join token.</p>
     */
    inline const Aws::String& GetJoinToken() const{ return m_joinToken; }

    /**
     * <p>Token used by the Amazon Chime SDK attendee. Call the <a
     * href="https://docs.aws.amazon.com/chime/latest/APIReference/API_CreateAttendee.html">CreateAttendee</a>
     * action to get a join token.</p>
     */
    inline bool JoinTokenHasBeenSet() const { return m_joinTokenHasBeenSet; }

    /**
     * <p>Token used by the Amazon Chime SDK attendee. Call the <a
     * href="https://docs.aws.amazon.com/chime/latest/APIReference/API_CreateAttendee.html">CreateAttendee</a>
     * action to get a join token.</p>
     */
    inline void SetJoinToken(const Aws::String& value) { m_joinTokenHasBeenSet = true; m_joinToken = value; }

    /**
     * <p>Token used by the Amazon Chime SDK attendee. Call the <a
     * href="https://docs.aws.amazon.com/chime/latest/APIReference/API_CreateAttendee.html">CreateAttendee</a>
     * action to get a join token.</p>
     */
    inline void SetJoinToken(Aws::String&& value) { m_joinTokenHasBeenSet = true; m_joinToken = std::move(value); }

    /**
     * <p>Token used by the Amazon Chime SDK attendee. Call the <a
     * href="https://docs.aws.amazon.com/chime/latest/APIReference/API_CreateAttendee.html">CreateAttendee</a>
     * action to get a join token.</p>
     */
    inline void SetJoinToken(const char* value) { m_joinTokenHasBeenSet = true; m_joinToken.assign(value); }

    /**
     * <p>Token used by the Amazon Chime SDK attendee. Call the <a
     * href="https://docs.aws.amazon.com/chime/latest/APIReference/API_CreateAttendee.html">CreateAttendee</a>
     * action to get a join token.</p>
     */
    inline CreateMeetingDialOutRequest& WithJoinToken(const Aws::String& value) { SetJoinToken(value); return *this;}

    /**
     * <p>Token used by the Amazon Chime SDK attendee. Call the <a
     * href="https://docs.aws.amazon.com/chime/latest/APIReference/API_CreateAttendee.html">CreateAttendee</a>
     * action to get a join token.</p>
     */
    inline CreateMeetingDialOutRequest& WithJoinToken(Aws::String&& value) { SetJoinToken(std::move(value)); return *this;}

    /**
     * <p>Token used by the Amazon Chime SDK attendee. Call the <a
     * href="https://docs.aws.amazon.com/chime/latest/APIReference/API_CreateAttendee.html">CreateAttendee</a>
     * action to get a join token.</p>
     */
    inline CreateMeetingDialOutRequest& WithJoinToken(const char* value) { SetJoinToken(value); return *this;}

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
