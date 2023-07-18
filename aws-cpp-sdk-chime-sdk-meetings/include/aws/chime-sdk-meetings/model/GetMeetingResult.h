﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/chime-sdk-meetings/model/Meeting.h>
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
  class AWS_CHIMESDKMEETINGS_API GetMeetingResult
  {
  public:
    GetMeetingResult();
    GetMeetingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetMeetingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Chime SDK meeting information.</p>
     */
    inline const Meeting& GetMeeting() const{ return m_meeting; }

    /**
     * <p>The Amazon Chime SDK meeting information.</p>
     */
    inline void SetMeeting(const Meeting& value) { m_meeting = value; }

    /**
     * <p>The Amazon Chime SDK meeting information.</p>
     */
    inline void SetMeeting(Meeting&& value) { m_meeting = std::move(value); }

    /**
     * <p>The Amazon Chime SDK meeting information.</p>
     */
    inline GetMeetingResult& WithMeeting(const Meeting& value) { SetMeeting(value); return *this;}

    /**
     * <p>The Amazon Chime SDK meeting information.</p>
     */
    inline GetMeetingResult& WithMeeting(Meeting&& value) { SetMeeting(std::move(value)); return *this;}

  private:

    Meeting m_meeting;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
