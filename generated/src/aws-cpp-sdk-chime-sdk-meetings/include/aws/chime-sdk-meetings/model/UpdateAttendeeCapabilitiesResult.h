/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/chime-sdk-meetings/model/Attendee.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ChimeSDKMeetings
{
namespace Model
{
  class UpdateAttendeeCapabilitiesResult
  {
  public:
    AWS_CHIMESDKMEETINGS_API UpdateAttendeeCapabilitiesResult() = default;
    AWS_CHIMESDKMEETINGS_API UpdateAttendeeCapabilitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEETINGS_API UpdateAttendeeCapabilitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The updated attendee data.</p>
     */
    inline const Attendee& GetAttendee() const { return m_attendee; }
    template<typename AttendeeT = Attendee>
    void SetAttendee(AttendeeT&& value) { m_attendeeHasBeenSet = true; m_attendee = std::forward<AttendeeT>(value); }
    template<typename AttendeeT = Attendee>
    UpdateAttendeeCapabilitiesResult& WithAttendee(AttendeeT&& value) { SetAttendee(std::forward<AttendeeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAttendeeCapabilitiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Attendee m_attendee;
    bool m_attendeeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
