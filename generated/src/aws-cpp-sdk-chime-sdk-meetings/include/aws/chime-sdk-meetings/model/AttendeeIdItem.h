/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
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
namespace ChimeSDKMeetings
{
namespace Model
{

  /**
   * <p>A structure that contains one or more attendee IDs.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/AttendeeIdItem">AWS
   * API Reference</a></p>
   */
  class AttendeeIdItem
  {
  public:
    AWS_CHIMESDKMEETINGS_API AttendeeIdItem();
    AWS_CHIMESDKMEETINGS_API AttendeeIdItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API AttendeeIdItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of one or more attendee IDs.</p>
     */
    inline const Aws::String& GetAttendeeId() const{ return m_attendeeId; }

    /**
     * <p>A list of one or more attendee IDs.</p>
     */
    inline bool AttendeeIdHasBeenSet() const { return m_attendeeIdHasBeenSet; }

    /**
     * <p>A list of one or more attendee IDs.</p>
     */
    inline void SetAttendeeId(const Aws::String& value) { m_attendeeIdHasBeenSet = true; m_attendeeId = value; }

    /**
     * <p>A list of one or more attendee IDs.</p>
     */
    inline void SetAttendeeId(Aws::String&& value) { m_attendeeIdHasBeenSet = true; m_attendeeId = std::move(value); }

    /**
     * <p>A list of one or more attendee IDs.</p>
     */
    inline void SetAttendeeId(const char* value) { m_attendeeIdHasBeenSet = true; m_attendeeId.assign(value); }

    /**
     * <p>A list of one or more attendee IDs.</p>
     */
    inline AttendeeIdItem& WithAttendeeId(const Aws::String& value) { SetAttendeeId(value); return *this;}

    /**
     * <p>A list of one or more attendee IDs.</p>
     */
    inline AttendeeIdItem& WithAttendeeId(Aws::String&& value) { SetAttendeeId(std::move(value)); return *this;}

    /**
     * <p>A list of one or more attendee IDs.</p>
     */
    inline AttendeeIdItem& WithAttendeeId(const char* value) { SetAttendeeId(value); return *this;}

  private:

    Aws::String m_attendeeId;
    bool m_attendeeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
