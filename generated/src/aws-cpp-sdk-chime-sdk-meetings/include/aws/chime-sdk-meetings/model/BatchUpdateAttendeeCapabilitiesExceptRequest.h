/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-meetings/model/AttendeeCapabilities.h>
#include <aws/chime-sdk-meetings/model/AttendeeIdItem.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKMeetings
{
namespace Model
{

  /**
   */
  class BatchUpdateAttendeeCapabilitiesExceptRequest : public ChimeSDKMeetingsRequest
  {
  public:
    AWS_CHIMESDKMEETINGS_API BatchUpdateAttendeeCapabilitiesExceptRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateAttendeeCapabilitiesExcept"; }

    AWS_CHIMESDKMEETINGS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the meeting associated with the update request.</p>
     */
    inline const Aws::String& GetMeetingId() const{ return m_meetingId; }

    /**
     * <p>The ID of the meeting associated with the update request.</p>
     */
    inline bool MeetingIdHasBeenSet() const { return m_meetingIdHasBeenSet; }

    /**
     * <p>The ID of the meeting associated with the update request.</p>
     */
    inline void SetMeetingId(const Aws::String& value) { m_meetingIdHasBeenSet = true; m_meetingId = value; }

    /**
     * <p>The ID of the meeting associated with the update request.</p>
     */
    inline void SetMeetingId(Aws::String&& value) { m_meetingIdHasBeenSet = true; m_meetingId = std::move(value); }

    /**
     * <p>The ID of the meeting associated with the update request.</p>
     */
    inline void SetMeetingId(const char* value) { m_meetingIdHasBeenSet = true; m_meetingId.assign(value); }

    /**
     * <p>The ID of the meeting associated with the update request.</p>
     */
    inline BatchUpdateAttendeeCapabilitiesExceptRequest& WithMeetingId(const Aws::String& value) { SetMeetingId(value); return *this;}

    /**
     * <p>The ID of the meeting associated with the update request.</p>
     */
    inline BatchUpdateAttendeeCapabilitiesExceptRequest& WithMeetingId(Aws::String&& value) { SetMeetingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the meeting associated with the update request.</p>
     */
    inline BatchUpdateAttendeeCapabilitiesExceptRequest& WithMeetingId(const char* value) { SetMeetingId(value); return *this;}


    /**
     * <p>The <code>AttendeeIDs</code> that you want to exclude from one or more
     * capabilities.</p>
     */
    inline const Aws::Vector<AttendeeIdItem>& GetExcludedAttendeeIds() const{ return m_excludedAttendeeIds; }

    /**
     * <p>The <code>AttendeeIDs</code> that you want to exclude from one or more
     * capabilities.</p>
     */
    inline bool ExcludedAttendeeIdsHasBeenSet() const { return m_excludedAttendeeIdsHasBeenSet; }

    /**
     * <p>The <code>AttendeeIDs</code> that you want to exclude from one or more
     * capabilities.</p>
     */
    inline void SetExcludedAttendeeIds(const Aws::Vector<AttendeeIdItem>& value) { m_excludedAttendeeIdsHasBeenSet = true; m_excludedAttendeeIds = value; }

    /**
     * <p>The <code>AttendeeIDs</code> that you want to exclude from one or more
     * capabilities.</p>
     */
    inline void SetExcludedAttendeeIds(Aws::Vector<AttendeeIdItem>&& value) { m_excludedAttendeeIdsHasBeenSet = true; m_excludedAttendeeIds = std::move(value); }

    /**
     * <p>The <code>AttendeeIDs</code> that you want to exclude from one or more
     * capabilities.</p>
     */
    inline BatchUpdateAttendeeCapabilitiesExceptRequest& WithExcludedAttendeeIds(const Aws::Vector<AttendeeIdItem>& value) { SetExcludedAttendeeIds(value); return *this;}

    /**
     * <p>The <code>AttendeeIDs</code> that you want to exclude from one or more
     * capabilities.</p>
     */
    inline BatchUpdateAttendeeCapabilitiesExceptRequest& WithExcludedAttendeeIds(Aws::Vector<AttendeeIdItem>&& value) { SetExcludedAttendeeIds(std::move(value)); return *this;}

    /**
     * <p>The <code>AttendeeIDs</code> that you want to exclude from one or more
     * capabilities.</p>
     */
    inline BatchUpdateAttendeeCapabilitiesExceptRequest& AddExcludedAttendeeIds(const AttendeeIdItem& value) { m_excludedAttendeeIdsHasBeenSet = true; m_excludedAttendeeIds.push_back(value); return *this; }

    /**
     * <p>The <code>AttendeeIDs</code> that you want to exclude from one or more
     * capabilities.</p>
     */
    inline BatchUpdateAttendeeCapabilitiesExceptRequest& AddExcludedAttendeeIds(AttendeeIdItem&& value) { m_excludedAttendeeIdsHasBeenSet = true; m_excludedAttendeeIds.push_back(std::move(value)); return *this; }


    /**
     * <p>The capabilities (<code>audio</code>, <code>video</code>, or
     * <code>content</code>) that you want to update.</p>
     */
    inline const AttendeeCapabilities& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>The capabilities (<code>audio</code>, <code>video</code>, or
     * <code>content</code>) that you want to update.</p>
     */
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }

    /**
     * <p>The capabilities (<code>audio</code>, <code>video</code>, or
     * <code>content</code>) that you want to update.</p>
     */
    inline void SetCapabilities(const AttendeeCapabilities& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    /**
     * <p>The capabilities (<code>audio</code>, <code>video</code>, or
     * <code>content</code>) that you want to update.</p>
     */
    inline void SetCapabilities(AttendeeCapabilities&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    /**
     * <p>The capabilities (<code>audio</code>, <code>video</code>, or
     * <code>content</code>) that you want to update.</p>
     */
    inline BatchUpdateAttendeeCapabilitiesExceptRequest& WithCapabilities(const AttendeeCapabilities& value) { SetCapabilities(value); return *this;}

    /**
     * <p>The capabilities (<code>audio</code>, <code>video</code>, or
     * <code>content</code>) that you want to update.</p>
     */
    inline BatchUpdateAttendeeCapabilitiesExceptRequest& WithCapabilities(AttendeeCapabilities&& value) { SetCapabilities(std::move(value)); return *this;}

  private:

    Aws::String m_meetingId;
    bool m_meetingIdHasBeenSet = false;

    Aws::Vector<AttendeeIdItem> m_excludedAttendeeIds;
    bool m_excludedAttendeeIdsHasBeenSet = false;

    AttendeeCapabilities m_capabilities;
    bool m_capabilitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
