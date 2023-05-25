/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/chime-sdk-meetings/model/Meeting.h>
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
  class CreateMeetingResult
  {
  public:
    AWS_CHIMESDKMEETINGS_API CreateMeetingResult();
    AWS_CHIMESDKMEETINGS_API CreateMeetingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEETINGS_API CreateMeetingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The meeting information, including the meeting ID and
     * <code>MediaPlacement</code>.</p>
     */
    inline const Meeting& GetMeeting() const{ return m_meeting; }

    /**
     * <p>The meeting information, including the meeting ID and
     * <code>MediaPlacement</code>.</p>
     */
    inline void SetMeeting(const Meeting& value) { m_meeting = value; }

    /**
     * <p>The meeting information, including the meeting ID and
     * <code>MediaPlacement</code>.</p>
     */
    inline void SetMeeting(Meeting&& value) { m_meeting = std::move(value); }

    /**
     * <p>The meeting information, including the meeting ID and
     * <code>MediaPlacement</code>.</p>
     */
    inline CreateMeetingResult& WithMeeting(const Meeting& value) { SetMeeting(value); return *this;}

    /**
     * <p>The meeting information, including the meeting ID and
     * <code>MediaPlacement</code>.</p>
     */
    inline CreateMeetingResult& WithMeeting(Meeting&& value) { SetMeeting(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateMeetingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateMeetingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateMeetingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Meeting m_meeting;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
