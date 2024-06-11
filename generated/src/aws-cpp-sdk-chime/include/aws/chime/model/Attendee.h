/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p> An Amazon Chime SDK meeting attendee. Includes a unique
   * <code>AttendeeId</code> and <code>JoinToken</code> . The <code>JoinToken</code>
   * allows a client to authenticate and join as the specified attendee. The
   * <code>JoinToken</code> expires when the meeting ends or when
   * <a>DeleteAttendee</a> is called. After that, the attendee is unable to join the
   * meeting. </p> <p>We recommend securely transferring each <code>JoinToken</code>
   * from your server application to the client so that no other client has access to
   * the token except for the one authorized to represent the attendee.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/Attendee">AWS API
   * Reference</a></p>
   */
  class Attendee
  {
  public:
    AWS_CHIME_API Attendee();
    AWS_CHIME_API Attendee(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Attendee& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Chime SDK external user ID. An idempotency token. Links the
     * attendee to an identity managed by a builder application.</p>
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
  private:

    Aws::String m_externalUserId;
    bool m_externalUserIdHasBeenSet = false;

    Aws::String m_attendeeId;
    bool m_attendeeIdHasBeenSet = false;

    Aws::String m_joinToken;
    bool m_joinTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
