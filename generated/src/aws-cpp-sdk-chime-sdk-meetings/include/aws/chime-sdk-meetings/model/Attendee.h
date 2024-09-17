/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-meetings/model/AttendeeCapabilities.h>
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
namespace ChimeSDKMeetings
{
namespace Model
{

  /**
   * <p>An Amazon Chime SDK meeting attendee. Includes a unique
   * <code>AttendeeId</code> and <code>JoinToken</code>. The <code>JoinToken</code>
   * allows a client to authenticate and join as the specified attendee. The
   * <code>JoinToken</code> expires when the meeting ends, or when
   * <a>DeleteAttendee</a> is called. After that, the attendee is unable to join the
   * meeting. </p> <p>We recommend securely transferring each <code>JoinToken</code>
   * from your server application to the client so that no other client has access to
   * the token except for the one authorized to represent the attendee.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/Attendee">AWS
   * API Reference</a></p>
   */
  class Attendee
  {
  public:
    AWS_CHIMESDKMEETINGS_API Attendee();
    AWS_CHIMESDKMEETINGS_API Attendee(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API Attendee& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Chime SDK external user ID. An idempotency token. Links the
     * attendee to an identity managed by a builder application.</p> <p>Pattern:
     * <code>[-_&amp;@+=,(){}\[\]\/«».:|'"#a-zA-Z0-9À-ÿ\s]*</code> </p> <p>Values that
     * begin with <code>aws:</code> are reserved. You can't configure a value that uses
     * this prefix. Case insensitive.</p>
     */
    inline const Aws::String& GetExternalUserId() const{ return m_externalUserId; }
    inline bool ExternalUserIdHasBeenSet() const { return m_externalUserIdHasBeenSet; }
    inline void SetExternalUserId(const Aws::String& value) { m_externalUserIdHasBeenSet = true; m_externalUserId = value; }
    inline void SetExternalUserId(Aws::String&& value) { m_externalUserIdHasBeenSet = true; m_externalUserId = std::move(value); }
    inline void SetExternalUserId(const char* value) { m_externalUserIdHasBeenSet = true; m_externalUserId.assign(value); }
    inline Attendee& WithExternalUserId(const Aws::String& value) { SetExternalUserId(value); return *this;}
    inline Attendee& WithExternalUserId(Aws::String&& value) { SetExternalUserId(std::move(value)); return *this;}
    inline Attendee& WithExternalUserId(const char* value) { SetExternalUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Chime SDK attendee ID.</p>
     */
    inline const Aws::String& GetAttendeeId() const{ return m_attendeeId; }
    inline bool AttendeeIdHasBeenSet() const { return m_attendeeIdHasBeenSet; }
    inline void SetAttendeeId(const Aws::String& value) { m_attendeeIdHasBeenSet = true; m_attendeeId = value; }
    inline void SetAttendeeId(Aws::String&& value) { m_attendeeIdHasBeenSet = true; m_attendeeId = std::move(value); }
    inline void SetAttendeeId(const char* value) { m_attendeeIdHasBeenSet = true; m_attendeeId.assign(value); }
    inline Attendee& WithAttendeeId(const Aws::String& value) { SetAttendeeId(value); return *this;}
    inline Attendee& WithAttendeeId(Aws::String&& value) { SetAttendeeId(std::move(value)); return *this;}
    inline Attendee& WithAttendeeId(const char* value) { SetAttendeeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The join token used by the Amazon Chime SDK attendee.</p>
     */
    inline const Aws::String& GetJoinToken() const{ return m_joinToken; }
    inline bool JoinTokenHasBeenSet() const { return m_joinTokenHasBeenSet; }
    inline void SetJoinToken(const Aws::String& value) { m_joinTokenHasBeenSet = true; m_joinToken = value; }
    inline void SetJoinToken(Aws::String&& value) { m_joinTokenHasBeenSet = true; m_joinToken = std::move(value); }
    inline void SetJoinToken(const char* value) { m_joinTokenHasBeenSet = true; m_joinToken.assign(value); }
    inline Attendee& WithJoinToken(const Aws::String& value) { SetJoinToken(value); return *this;}
    inline Attendee& WithJoinToken(Aws::String&& value) { SetJoinToken(std::move(value)); return *this;}
    inline Attendee& WithJoinToken(const char* value) { SetJoinToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capabilities assigned to an attendee: audio, video, or content.</p>
     *  <p>You use the capabilities with a set of values that control what the
     * capabilities can do, such as <code>SendReceive</code> data. For more information
     * about those values, see .</p>  <p>When using capabilities, be aware of
     * these corner cases:</p> <ul> <li> <p>If you specify
     * <code>MeetingFeatures:Video:MaxResolution:None</code> when you create a meeting,
     * all API requests that include <code>SendReceive</code>, <code>Send</code>, or
     * <code>Receive</code> for <code>AttendeeCapabilities:Video</code> will be
     * rejected with <code>ValidationError 400</code>.</p> </li> <li> <p>If you specify
     * <code>MeetingFeatures:Content:MaxResolution:None</code> when you create a
     * meeting, all API requests that include <code>SendReceive</code>,
     * <code>Send</code>, or <code>Receive</code> for
     * <code>AttendeeCapabilities:Content</code> will be rejected with
     * <code>ValidationError 400</code>.</p> </li> <li> <p>You can't set
     * <code>content</code> capabilities to <code>SendReceive</code> or
     * <code>Receive</code> unless you also set <code>video</code> capabilities to
     * <code>SendReceive</code> or <code>Receive</code>. If you don't set the
     * <code>video</code> capability to receive, the response will contain an HTTP 400
     * Bad Request status code. However, you can set your <code>video</code> capability
     * to receive and you set your <code>content</code> capability to not receive.</p>
     * </li> <li> <p>When you change an <code>audio</code> capability from
     * <code>None</code> or <code>Receive</code> to <code>Send</code> or
     * <code>SendReceive</code> , and if the attendee left their microphone unmuted,
     * audio will flow from the attendee to the other meeting participants.</p> </li>
     * <li> <p>When you change a <code>video</code> or <code>content</code> capability
     * from <code>None</code> or <code>Receive</code> to <code>Send</code> or
     * <code>SendReceive</code> , and if the attendee turned on their video or content
     * streams, remote attendees can receive those streams, but only after media
     * renegotiation between the client and the Amazon Chime back-end server.</p> </li>
     * </ul>
     */
    inline const AttendeeCapabilities& GetCapabilities() const{ return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    inline void SetCapabilities(const AttendeeCapabilities& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }
    inline void SetCapabilities(AttendeeCapabilities&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }
    inline Attendee& WithCapabilities(const AttendeeCapabilities& value) { SetCapabilities(value); return *this;}
    inline Attendee& WithCapabilities(AttendeeCapabilities&& value) { SetCapabilities(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_externalUserId;
    bool m_externalUserIdHasBeenSet = false;

    Aws::String m_attendeeId;
    bool m_attendeeIdHasBeenSet = false;

    Aws::String m_joinToken;
    bool m_joinTokenHasBeenSet = false;

    AttendeeCapabilities m_capabilities;
    bool m_capabilitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
