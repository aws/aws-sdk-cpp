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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/RejectedLogEventsInfo.h>
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
  class AWS_CLOUDWATCHLOGS_API PutLogEventsResult
  {
  public:
    PutLogEventsResult();
    PutLogEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutLogEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The next sequence token.</p>
     */
    inline const Aws::String& GetNextSequenceToken() const{ return m_nextSequenceToken; }

    /**
     * <p>The next sequence token.</p>
     */
    inline void SetNextSequenceToken(const Aws::String& value) { m_nextSequenceToken = value; }

    /**
     * <p>The next sequence token.</p>
     */
    inline void SetNextSequenceToken(Aws::String&& value) { m_nextSequenceToken = std::move(value); }

    /**
     * <p>The next sequence token.</p>
     */
    inline void SetNextSequenceToken(const char* value) { m_nextSequenceToken.assign(value); }

    /**
     * <p>The next sequence token.</p>
     */
    inline PutLogEventsResult& WithNextSequenceToken(const Aws::String& value) { SetNextSequenceToken(value); return *this;}

    /**
     * <p>The next sequence token.</p>
     */
    inline PutLogEventsResult& WithNextSequenceToken(Aws::String&& value) { SetNextSequenceToken(std::move(value)); return *this;}

    /**
     * <p>The next sequence token.</p>
     */
    inline PutLogEventsResult& WithNextSequenceToken(const char* value) { SetNextSequenceToken(value); return *this;}


    /**
     * <p>The rejected events.</p>
     */
    inline const RejectedLogEventsInfo& GetRejectedLogEventsInfo() const{ return m_rejectedLogEventsInfo; }

    /**
     * <p>The rejected events.</p>
     */
    inline void SetRejectedLogEventsInfo(const RejectedLogEventsInfo& value) { m_rejectedLogEventsInfo = value; }

    /**
     * <p>The rejected events.</p>
     */
    inline void SetRejectedLogEventsInfo(RejectedLogEventsInfo&& value) { m_rejectedLogEventsInfo = std::move(value); }

    /**
     * <p>The rejected events.</p>
     */
    inline PutLogEventsResult& WithRejectedLogEventsInfo(const RejectedLogEventsInfo& value) { SetRejectedLogEventsInfo(value); return *this;}

    /**
     * <p>The rejected events.</p>
     */
    inline PutLogEventsResult& WithRejectedLogEventsInfo(RejectedLogEventsInfo&& value) { SetRejectedLogEventsInfo(std::move(value)); return *this;}

  private:

    Aws::String m_nextSequenceToken;

    RejectedLogEventsInfo m_rejectedLogEventsInfo;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
