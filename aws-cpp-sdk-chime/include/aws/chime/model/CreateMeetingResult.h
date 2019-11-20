/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
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
  class AWS_CHIME_API CreateMeetingResult
  {
  public:
    CreateMeetingResult();
    CreateMeetingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateMeetingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    Meeting m_meeting;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
