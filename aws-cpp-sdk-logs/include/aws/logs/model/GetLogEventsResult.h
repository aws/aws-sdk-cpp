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
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/OutputLogEvent.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class AWS_CLOUDWATCHLOGS_API GetLogEventsResult
  {
  public:
    GetLogEventsResult();
    GetLogEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetLogEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The events.</p>
     */
    inline const Aws::Vector<OutputLogEvent>& GetEvents() const{ return m_events; }

    /**
     * <p>The events.</p>
     */
    inline void SetEvents(const Aws::Vector<OutputLogEvent>& value) { m_events = value; }

    /**
     * <p>The events.</p>
     */
    inline void SetEvents(Aws::Vector<OutputLogEvent>&& value) { m_events = std::move(value); }

    /**
     * <p>The events.</p>
     */
    inline GetLogEventsResult& WithEvents(const Aws::Vector<OutputLogEvent>& value) { SetEvents(value); return *this;}

    /**
     * <p>The events.</p>
     */
    inline GetLogEventsResult& WithEvents(Aws::Vector<OutputLogEvent>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>The events.</p>
     */
    inline GetLogEventsResult& AddEvents(const OutputLogEvent& value) { m_events.push_back(value); return *this; }

    /**
     * <p>The events.</p>
     */
    inline GetLogEventsResult& AddEvents(OutputLogEvent&& value) { m_events.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of items in the forward direction. The token
     * expires after 24 hours. If you have reached the end of the stream, it will
     * return the same token you passed in.</p>
     */
    inline const Aws::String& GetNextForwardToken() const{ return m_nextForwardToken; }

    /**
     * <p>The token for the next set of items in the forward direction. The token
     * expires after 24 hours. If you have reached the end of the stream, it will
     * return the same token you passed in.</p>
     */
    inline void SetNextForwardToken(const Aws::String& value) { m_nextForwardToken = value; }

    /**
     * <p>The token for the next set of items in the forward direction. The token
     * expires after 24 hours. If you have reached the end of the stream, it will
     * return the same token you passed in.</p>
     */
    inline void SetNextForwardToken(Aws::String&& value) { m_nextForwardToken = std::move(value); }

    /**
     * <p>The token for the next set of items in the forward direction. The token
     * expires after 24 hours. If you have reached the end of the stream, it will
     * return the same token you passed in.</p>
     */
    inline void SetNextForwardToken(const char* value) { m_nextForwardToken.assign(value); }

    /**
     * <p>The token for the next set of items in the forward direction. The token
     * expires after 24 hours. If you have reached the end of the stream, it will
     * return the same token you passed in.</p>
     */
    inline GetLogEventsResult& WithNextForwardToken(const Aws::String& value) { SetNextForwardToken(value); return *this;}

    /**
     * <p>The token for the next set of items in the forward direction. The token
     * expires after 24 hours. If you have reached the end of the stream, it will
     * return the same token you passed in.</p>
     */
    inline GetLogEventsResult& WithNextForwardToken(Aws::String&& value) { SetNextForwardToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items in the forward direction. The token
     * expires after 24 hours. If you have reached the end of the stream, it will
     * return the same token you passed in.</p>
     */
    inline GetLogEventsResult& WithNextForwardToken(const char* value) { SetNextForwardToken(value); return *this;}


    /**
     * <p>The token for the next set of items in the backward direction. The token
     * expires after 24 hours. This token will never be null. If you have reached the
     * end of the stream, it will return the same token you passed in.</p>
     */
    inline const Aws::String& GetNextBackwardToken() const{ return m_nextBackwardToken; }

    /**
     * <p>The token for the next set of items in the backward direction. The token
     * expires after 24 hours. This token will never be null. If you have reached the
     * end of the stream, it will return the same token you passed in.</p>
     */
    inline void SetNextBackwardToken(const Aws::String& value) { m_nextBackwardToken = value; }

    /**
     * <p>The token for the next set of items in the backward direction. The token
     * expires after 24 hours. This token will never be null. If you have reached the
     * end of the stream, it will return the same token you passed in.</p>
     */
    inline void SetNextBackwardToken(Aws::String&& value) { m_nextBackwardToken = std::move(value); }

    /**
     * <p>The token for the next set of items in the backward direction. The token
     * expires after 24 hours. This token will never be null. If you have reached the
     * end of the stream, it will return the same token you passed in.</p>
     */
    inline void SetNextBackwardToken(const char* value) { m_nextBackwardToken.assign(value); }

    /**
     * <p>The token for the next set of items in the backward direction. The token
     * expires after 24 hours. This token will never be null. If you have reached the
     * end of the stream, it will return the same token you passed in.</p>
     */
    inline GetLogEventsResult& WithNextBackwardToken(const Aws::String& value) { SetNextBackwardToken(value); return *this;}

    /**
     * <p>The token for the next set of items in the backward direction. The token
     * expires after 24 hours. This token will never be null. If you have reached the
     * end of the stream, it will return the same token you passed in.</p>
     */
    inline GetLogEventsResult& WithNextBackwardToken(Aws::String&& value) { SetNextBackwardToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items in the backward direction. The token
     * expires after 24 hours. This token will never be null. If you have reached the
     * end of the stream, it will return the same token you passed in.</p>
     */
    inline GetLogEventsResult& WithNextBackwardToken(const char* value) { SetNextBackwardToken(value); return *this;}

  private:

    Aws::Vector<OutputLogEvent> m_events;

    Aws::String m_nextForwardToken;

    Aws::String m_nextBackwardToken;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
