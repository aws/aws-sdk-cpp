/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/Meeting.h>
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
  class ListMeetingsResult
  {
  public:
    AWS_CHIME_API ListMeetingsResult();
    AWS_CHIME_API ListMeetingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API ListMeetingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Chime SDK meeting information.</p>
     */
    inline const Aws::Vector<Meeting>& GetMeetings() const{ return m_meetings; }

    /**
     * <p>The Amazon Chime SDK meeting information.</p>
     */
    inline void SetMeetings(const Aws::Vector<Meeting>& value) { m_meetings = value; }

    /**
     * <p>The Amazon Chime SDK meeting information.</p>
     */
    inline void SetMeetings(Aws::Vector<Meeting>&& value) { m_meetings = std::move(value); }

    /**
     * <p>The Amazon Chime SDK meeting information.</p>
     */
    inline ListMeetingsResult& WithMeetings(const Aws::Vector<Meeting>& value) { SetMeetings(value); return *this;}

    /**
     * <p>The Amazon Chime SDK meeting information.</p>
     */
    inline ListMeetingsResult& WithMeetings(Aws::Vector<Meeting>&& value) { SetMeetings(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime SDK meeting information.</p>
     */
    inline ListMeetingsResult& AddMeetings(const Meeting& value) { m_meetings.push_back(value); return *this; }

    /**
     * <p>The Amazon Chime SDK meeting information.</p>
     */
    inline ListMeetingsResult& AddMeetings(Meeting&& value) { m_meetings.push_back(std::move(value)); return *this; }


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
    inline ListMeetingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListMeetingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListMeetingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Meeting> m_meetings;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
