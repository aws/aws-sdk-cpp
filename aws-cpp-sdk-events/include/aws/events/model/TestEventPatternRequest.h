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
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/CloudWatchEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <a>TestEventPattern</a> operation.</p>
   */
  class AWS_CLOUDWATCHEVENTS_API TestEventPatternRequest : public CloudWatchEventsRequest
  {
  public:
    TestEventPatternRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The event pattern you want to test.</p>
     */
    inline const Aws::String& GetEventPattern() const{ return m_eventPattern; }

    /**
     * <p>The event pattern you want to test.</p>
     */
    inline void SetEventPattern(const Aws::String& value) { m_eventPatternHasBeenSet = true; m_eventPattern = value; }

    /**
     * <p>The event pattern you want to test.</p>
     */
    inline void SetEventPattern(Aws::String&& value) { m_eventPatternHasBeenSet = true; m_eventPattern = value; }

    /**
     * <p>The event pattern you want to test.</p>
     */
    inline void SetEventPattern(const char* value) { m_eventPatternHasBeenSet = true; m_eventPattern.assign(value); }

    /**
     * <p>The event pattern you want to test.</p>
     */
    inline TestEventPatternRequest& WithEventPattern(const Aws::String& value) { SetEventPattern(value); return *this;}

    /**
     * <p>The event pattern you want to test.</p>
     */
    inline TestEventPatternRequest& WithEventPattern(Aws::String&& value) { SetEventPattern(value); return *this;}

    /**
     * <p>The event pattern you want to test.</p>
     */
    inline TestEventPatternRequest& WithEventPattern(const char* value) { SetEventPattern(value); return *this;}

    /**
     * <p>The event in the JSON format to test against the event pattern.</p>
     */
    inline const Aws::String& GetEvent() const{ return m_event; }

    /**
     * <p>The event in the JSON format to test against the event pattern.</p>
     */
    inline void SetEvent(const Aws::String& value) { m_eventHasBeenSet = true; m_event = value; }

    /**
     * <p>The event in the JSON format to test against the event pattern.</p>
     */
    inline void SetEvent(Aws::String&& value) { m_eventHasBeenSet = true; m_event = value; }

    /**
     * <p>The event in the JSON format to test against the event pattern.</p>
     */
    inline void SetEvent(const char* value) { m_eventHasBeenSet = true; m_event.assign(value); }

    /**
     * <p>The event in the JSON format to test against the event pattern.</p>
     */
    inline TestEventPatternRequest& WithEvent(const Aws::String& value) { SetEvent(value); return *this;}

    /**
     * <p>The event in the JSON format to test against the event pattern.</p>
     */
    inline TestEventPatternRequest& WithEvent(Aws::String&& value) { SetEvent(value); return *this;}

    /**
     * <p>The event in the JSON format to test against the event pattern.</p>
     */
    inline TestEventPatternRequest& WithEvent(const char* value) { SetEvent(value); return *this;}

  private:
    Aws::String m_eventPattern;
    bool m_eventPatternHasBeenSet;
    Aws::String m_event;
    bool m_eventHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
