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
    AWS_CHIMESDKMEETINGS_API AttendeeIdItem() = default;
    AWS_CHIMESDKMEETINGS_API AttendeeIdItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API AttendeeIdItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of one or more attendee IDs.</p>
     */
    inline const Aws::String& GetAttendeeId() const { return m_attendeeId; }
    inline bool AttendeeIdHasBeenSet() const { return m_attendeeIdHasBeenSet; }
    template<typename AttendeeIdT = Aws::String>
    void SetAttendeeId(AttendeeIdT&& value) { m_attendeeIdHasBeenSet = true; m_attendeeId = std::forward<AttendeeIdT>(value); }
    template<typename AttendeeIdT = Aws::String>
    AttendeeIdItem& WithAttendeeId(AttendeeIdT&& value) { SetAttendeeId(std::forward<AttendeeIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_attendeeId;
    bool m_attendeeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
