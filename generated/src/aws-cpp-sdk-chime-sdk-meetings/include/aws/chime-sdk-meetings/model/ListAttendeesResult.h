/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-meetings/model/Attendee.h>
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
  class ListAttendeesResult
  {
  public:
    AWS_CHIMESDKMEETINGS_API ListAttendeesResult();
    AWS_CHIMESDKMEETINGS_API ListAttendeesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEETINGS_API ListAttendeesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Chime SDK attendee information.</p>
     */
    inline const Aws::Vector<Attendee>& GetAttendees() const{ return m_attendees; }
    inline void SetAttendees(const Aws::Vector<Attendee>& value) { m_attendees = value; }
    inline void SetAttendees(Aws::Vector<Attendee>&& value) { m_attendees = std::move(value); }
    inline ListAttendeesResult& WithAttendees(const Aws::Vector<Attendee>& value) { SetAttendees(value); return *this;}
    inline ListAttendeesResult& WithAttendees(Aws::Vector<Attendee>&& value) { SetAttendees(std::move(value)); return *this;}
    inline ListAttendeesResult& AddAttendees(const Attendee& value) { m_attendees.push_back(value); return *this; }
    inline ListAttendeesResult& AddAttendees(Attendee&& value) { m_attendees.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAttendeesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAttendeesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAttendeesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAttendeesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAttendeesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAttendeesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Attendee> m_attendees;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
