/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/InputLogEvent.h>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHLOGS_API PutLogEventsRequest : public CloudWatchLogsRequest
  {
  public:
    PutLogEventsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group.</p>
     */
    inline PutLogEventsRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline PutLogEventsRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline PutLogEventsRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log stream.</p>
     */
    inline const Aws::String& GetLogStreamName() const{ return m_logStreamName; }

    /**
     * <p>The name of the log stream.</p>
     */
    inline void SetLogStreamName(const Aws::String& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = value; }

    /**
     * <p>The name of the log stream.</p>
     */
    inline void SetLogStreamName(Aws::String&& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = value; }

    /**
     * <p>The name of the log stream.</p>
     */
    inline void SetLogStreamName(const char* value) { m_logStreamNameHasBeenSet = true; m_logStreamName.assign(value); }

    /**
     * <p>The name of the log stream.</p>
     */
    inline PutLogEventsRequest& WithLogStreamName(const Aws::String& value) { SetLogStreamName(value); return *this;}

    /**
     * <p>The name of the log stream.</p>
     */
    inline PutLogEventsRequest& WithLogStreamName(Aws::String&& value) { SetLogStreamName(value); return *this;}

    /**
     * <p>The name of the log stream.</p>
     */
    inline PutLogEventsRequest& WithLogStreamName(const char* value) { SetLogStreamName(value); return *this;}

    /**
     * <p>The log events.</p>
     */
    inline const Aws::Vector<InputLogEvent>& GetLogEvents() const{ return m_logEvents; }

    /**
     * <p>The log events.</p>
     */
    inline void SetLogEvents(const Aws::Vector<InputLogEvent>& value) { m_logEventsHasBeenSet = true; m_logEvents = value; }

    /**
     * <p>The log events.</p>
     */
    inline void SetLogEvents(Aws::Vector<InputLogEvent>&& value) { m_logEventsHasBeenSet = true; m_logEvents = value; }

    /**
     * <p>The log events.</p>
     */
    inline PutLogEventsRequest& WithLogEvents(const Aws::Vector<InputLogEvent>& value) { SetLogEvents(value); return *this;}

    /**
     * <p>The log events.</p>
     */
    inline PutLogEventsRequest& WithLogEvents(Aws::Vector<InputLogEvent>&& value) { SetLogEvents(value); return *this;}

    /**
     * <p>The log events.</p>
     */
    inline PutLogEventsRequest& AddLogEvents(const InputLogEvent& value) { m_logEventsHasBeenSet = true; m_logEvents.push_back(value); return *this; }

    /**
     * <p>The log events.</p>
     */
    inline PutLogEventsRequest& AddLogEvents(InputLogEvent&& value) { m_logEventsHasBeenSet = true; m_logEvents.push_back(value); return *this; }

    /**
     * <p>The sequence token.</p>
     */
    inline const Aws::String& GetSequenceToken() const{ return m_sequenceToken; }

    /**
     * <p>The sequence token.</p>
     */
    inline void SetSequenceToken(const Aws::String& value) { m_sequenceTokenHasBeenSet = true; m_sequenceToken = value; }

    /**
     * <p>The sequence token.</p>
     */
    inline void SetSequenceToken(Aws::String&& value) { m_sequenceTokenHasBeenSet = true; m_sequenceToken = value; }

    /**
     * <p>The sequence token.</p>
     */
    inline void SetSequenceToken(const char* value) { m_sequenceTokenHasBeenSet = true; m_sequenceToken.assign(value); }

    /**
     * <p>The sequence token.</p>
     */
    inline PutLogEventsRequest& WithSequenceToken(const Aws::String& value) { SetSequenceToken(value); return *this;}

    /**
     * <p>The sequence token.</p>
     */
    inline PutLogEventsRequest& WithSequenceToken(Aws::String&& value) { SetSequenceToken(value); return *this;}

    /**
     * <p>The sequence token.</p>
     */
    inline PutLogEventsRequest& WithSequenceToken(const char* value) { SetSequenceToken(value); return *this;}

  private:
    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;
    Aws::String m_logStreamName;
    bool m_logStreamNameHasBeenSet;
    Aws::Vector<InputLogEvent> m_logEvents;
    bool m_logEventsHasBeenSet;
    Aws::String m_sequenceToken;
    bool m_sequenceTokenHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
