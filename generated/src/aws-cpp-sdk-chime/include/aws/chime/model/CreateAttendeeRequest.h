/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class CreateAttendeeRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API CreateAttendeeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAttendee"; }

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
    inline CreateAttendeeRequest& WithMeetingId(const Aws::String& value) { SetMeetingId(value); return *this;}

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline CreateAttendeeRequest& WithMeetingId(Aws::String&& value) { SetMeetingId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
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
     * <p>The tag key-value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag key-value pairs.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag key-value pairs.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag key-value pairs.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag key-value pairs.</p>
     */
    inline CreateAttendeeRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag key-value pairs.</p>
     */
    inline CreateAttendeeRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag key-value pairs.</p>
     */
    inline CreateAttendeeRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag key-value pairs.</p>
     */
    inline CreateAttendeeRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_meetingId;
    bool m_meetingIdHasBeenSet = false;

    Aws::String m_externalUserId;
    bool m_externalUserIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
