/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/Attendee.h>
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
namespace Chime
{
namespace Model
{
  class ListAttendeesResult
  {
  public:
    AWS_CHIME_API ListAttendeesResult();
    AWS_CHIME_API ListAttendeesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API ListAttendeesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Chime SDK attendee information.</p>
     */
    inline const Aws::Vector<Attendee>& GetAttendees() const{ return m_attendees; }

    /**
     * <p>The Amazon Chime SDK attendee information.</p>
     */
    inline void SetAttendees(const Aws::Vector<Attendee>& value) { m_attendees = value; }

    /**
     * <p>The Amazon Chime SDK attendee information.</p>
     */
    inline void SetAttendees(Aws::Vector<Attendee>&& value) { m_attendees = std::move(value); }

    /**
     * <p>The Amazon Chime SDK attendee information.</p>
     */
    inline ListAttendeesResult& WithAttendees(const Aws::Vector<Attendee>& value) { SetAttendees(value); return *this;}

    /**
     * <p>The Amazon Chime SDK attendee information.</p>
     */
    inline ListAttendeesResult& WithAttendees(Aws::Vector<Attendee>&& value) { SetAttendees(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime SDK attendee information.</p>
     */
    inline ListAttendeesResult& AddAttendees(const Attendee& value) { m_attendees.push_back(value); return *this; }

    /**
     * <p>The Amazon Chime SDK attendee information.</p>
     */
    inline ListAttendeesResult& AddAttendees(Attendee&& value) { m_attendees.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListAttendeesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListAttendeesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListAttendeesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Attendee> m_attendees;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
