/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-meetings/model/AttendeeCapabilities.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKMeetings
{
namespace Model
{

  /**
   */
  class CreateAttendeeRequest : public ChimeSDKMeetingsRequest
  {
  public:
    AWS_CHIMESDKMEETINGS_API CreateAttendeeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAttendee"; }

    AWS_CHIMESDKMEETINGS_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique ID of the meeting.</p>
     */
    inline const Aws::String& GetMeetingId() const{ return m_meetingId; }

    /**
     * <p>The unique ID of the meeting.</p>
     */
    inline bool MeetingIdHasBeenSet() const { return m_meetingIdHasBeenSet; }

    /**
     * <p>The unique ID of the meeting.</p>
     */
    inline void SetMeetingId(const Aws::String& value) { m_meetingIdHasBeenSet = true; m_meetingId = value; }

    /**
     * <p>The unique ID of the meeting.</p>
     */
    inline void SetMeetingId(Aws::String&& value) { m_meetingIdHasBeenSet = true; m_meetingId = std::move(value); }

    /**
     * <p>The unique ID of the meeting.</p>
     */
    inline void SetMeetingId(const char* value) { m_meetingIdHasBeenSet = true; m_meetingId.assign(value); }

    /**
     * <p>The unique ID of the meeting.</p>
     */
    inline CreateAttendeeRequest& WithMeetingId(const Aws::String& value) { SetMeetingId(value); return *this;}

    /**
     * <p>The unique ID of the meeting.</p>
     */
    inline CreateAttendeeRequest& WithMeetingId(Aws::String&& value) { SetMeetingId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the meeting.</p>
     */
    inline CreateAttendeeRequest& WithMeetingId(const char* value) { SetMeetingId(value); return *this;}


    /**
     * <p>The Amazon Chime SDK external user ID. An idempotency token. Links the
     * attendee to an identity managed by a builder application.</p>
     */
    inline const Aws::String& GetExternalUserId() const{ return m_externalUserId; }

    /**
     * <p>The Amazon Chime SDK external user ID. An idempotency token. Links the
     * attendee to an identity managed by a builder application.</p>
     */
    inline bool ExternalUserIdHasBeenSet() const { return m_externalUserIdHasBeenSet; }

    /**
     * <p>The Amazon Chime SDK external user ID. An idempotency token. Links the
     * attendee to an identity managed by a builder application.</p>
     */
    inline void SetExternalUserId(const Aws::String& value) { m_externalUserIdHasBeenSet = true; m_externalUserId = value; }

    /**
     * <p>The Amazon Chime SDK external user ID. An idempotency token. Links the
     * attendee to an identity managed by a builder application.</p>
     */
    inline void SetExternalUserId(Aws::String&& value) { m_externalUserIdHasBeenSet = true; m_externalUserId = std::move(value); }

    /**
     * <p>The Amazon Chime SDK external user ID. An idempotency token. Links the
     * attendee to an identity managed by a builder application.</p>
     */
    inline void SetExternalUserId(const char* value) { m_externalUserIdHasBeenSet = true; m_externalUserId.assign(value); }

    /**
     * <p>The Amazon Chime SDK external user ID. An idempotency token. Links the
     * attendee to an identity managed by a builder application.</p>
     */
    inline CreateAttendeeRequest& WithExternalUserId(const Aws::String& value) { SetExternalUserId(value); return *this;}

    /**
     * <p>The Amazon Chime SDK external user ID. An idempotency token. Links the
     * attendee to an identity managed by a builder application.</p>
     */
    inline CreateAttendeeRequest& WithExternalUserId(Aws::String&& value) { SetExternalUserId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime SDK external user ID. An idempotency token. Links the
     * attendee to an identity managed by a builder application.</p>
     */
    inline CreateAttendeeRequest& WithExternalUserId(const char* value) { SetExternalUserId(value); return *this;}


    /**
     * <p>The capabilities (<code>audio</code>, <code>video</code>, or
     * <code>content</code>) that you want to grant an attendee. If you don't specify
     * capabilities, all users have send and receive capabilities on all media channels
     * by default.</p>  <p>You use the capabilities with a set of values that
     * control what the capabilities can do, such as <code>SendReceive</code> data. For
     * more information about those values, see .</p>  <p>When using
     * capabilities, be aware of these corner cases:</p> <ul> <li> <p>You can't set
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
     * streams, remote attendess can receive those streams, but only after media
     * renegotiation between the client and the Amazon Chime back-end server.</p> </li>
     * </ul>
     */
    inline const AttendeeCapabilities& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>The capabilities (<code>audio</code>, <code>video</code>, or
     * <code>content</code>) that you want to grant an attendee. If you don't specify
     * capabilities, all users have send and receive capabilities on all media channels
     * by default.</p>  <p>You use the capabilities with a set of values that
     * control what the capabilities can do, such as <code>SendReceive</code> data. For
     * more information about those values, see .</p>  <p>When using
     * capabilities, be aware of these corner cases:</p> <ul> <li> <p>You can't set
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
     * streams, remote attendess can receive those streams, but only after media
     * renegotiation between the client and the Amazon Chime back-end server.</p> </li>
     * </ul>
     */
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }

    /**
     * <p>The capabilities (<code>audio</code>, <code>video</code>, or
     * <code>content</code>) that you want to grant an attendee. If you don't specify
     * capabilities, all users have send and receive capabilities on all media channels
     * by default.</p>  <p>You use the capabilities with a set of values that
     * control what the capabilities can do, such as <code>SendReceive</code> data. For
     * more information about those values, see .</p>  <p>When using
     * capabilities, be aware of these corner cases:</p> <ul> <li> <p>You can't set
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
     * streams, remote attendess can receive those streams, but only after media
     * renegotiation between the client and the Amazon Chime back-end server.</p> </li>
     * </ul>
     */
    inline void SetCapabilities(const AttendeeCapabilities& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    /**
     * <p>The capabilities (<code>audio</code>, <code>video</code>, or
     * <code>content</code>) that you want to grant an attendee. If you don't specify
     * capabilities, all users have send and receive capabilities on all media channels
     * by default.</p>  <p>You use the capabilities with a set of values that
     * control what the capabilities can do, such as <code>SendReceive</code> data. For
     * more information about those values, see .</p>  <p>When using
     * capabilities, be aware of these corner cases:</p> <ul> <li> <p>You can't set
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
     * streams, remote attendess can receive those streams, but only after media
     * renegotiation between the client and the Amazon Chime back-end server.</p> </li>
     * </ul>
     */
    inline void SetCapabilities(AttendeeCapabilities&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    /**
     * <p>The capabilities (<code>audio</code>, <code>video</code>, or
     * <code>content</code>) that you want to grant an attendee. If you don't specify
     * capabilities, all users have send and receive capabilities on all media channels
     * by default.</p>  <p>You use the capabilities with a set of values that
     * control what the capabilities can do, such as <code>SendReceive</code> data. For
     * more information about those values, see .</p>  <p>When using
     * capabilities, be aware of these corner cases:</p> <ul> <li> <p>You can't set
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
     * streams, remote attendess can receive those streams, but only after media
     * renegotiation between the client and the Amazon Chime back-end server.</p> </li>
     * </ul>
     */
    inline CreateAttendeeRequest& WithCapabilities(const AttendeeCapabilities& value) { SetCapabilities(value); return *this;}

    /**
     * <p>The capabilities (<code>audio</code>, <code>video</code>, or
     * <code>content</code>) that you want to grant an attendee. If you don't specify
     * capabilities, all users have send and receive capabilities on all media channels
     * by default.</p>  <p>You use the capabilities with a set of values that
     * control what the capabilities can do, such as <code>SendReceive</code> data. For
     * more information about those values, see .</p>  <p>When using
     * capabilities, be aware of these corner cases:</p> <ul> <li> <p>You can't set
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
     * streams, remote attendess can receive those streams, but only after media
     * renegotiation between the client and the Amazon Chime back-end server.</p> </li>
     * </ul>
     */
    inline CreateAttendeeRequest& WithCapabilities(AttendeeCapabilities&& value) { SetCapabilities(std::move(value)); return *this;}

  private:

    Aws::String m_meetingId;
    bool m_meetingIdHasBeenSet = false;

    Aws::String m_externalUserId;
    bool m_externalUserIdHasBeenSet = false;

    AttendeeCapabilities m_capabilities;
    bool m_capabilitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
