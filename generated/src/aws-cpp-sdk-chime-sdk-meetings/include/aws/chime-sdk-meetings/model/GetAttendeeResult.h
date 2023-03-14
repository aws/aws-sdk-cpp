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
  class GetAttendeeResult
  {
  public:
    AWS_CHIMESDKMEETINGS_API GetAttendeeResult();
    AWS_CHIMESDKMEETINGS_API GetAttendeeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEETINGS_API GetAttendeeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Chime SDK attendee information.</p>
     */
    inline const Attendee& GetAttendee() const{ return m_attendee; }

    /**
     * <p>The Amazon Chime SDK attendee information.</p>
     */
    inline void SetAttendee(const Attendee& value) { m_attendee = value; }

    /**
     * <p>The Amazon Chime SDK attendee information.</p>
     */
    inline void SetAttendee(Attendee&& value) { m_attendee = std::move(value); }

    /**
     * <p>The Amazon Chime SDK attendee information.</p>
     */
    inline GetAttendeeResult& WithAttendee(const Attendee& value) { SetAttendee(value); return *this;}

    /**
     * <p>The Amazon Chime SDK attendee information.</p>
     */
    inline GetAttendeeResult& WithAttendee(Attendee&& value) { SetAttendee(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAttendeeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAttendeeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAttendeeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Attendee m_attendee;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
