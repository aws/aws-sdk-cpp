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
   */
  class AWS_CLOUDWATCHEVENTS_API TestEventPatternRequest : public CloudWatchEventsRequest
  {
  public:
    TestEventPatternRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <zonbook> <simpara>The event pattern.</simpara> </zonbook> <xhtml> <p>The event
     * pattern.</p> </xhtml>
     */
    inline const Aws::String& GetEventPattern() const{ return m_eventPattern; }

    /**
     * <zonbook> <simpara>The event pattern.</simpara> </zonbook> <xhtml> <p>The event
     * pattern.</p> </xhtml>
     */
    inline void SetEventPattern(const Aws::String& value) { m_eventPatternHasBeenSet = true; m_eventPattern = value; }

    /**
     * <zonbook> <simpara>The event pattern.</simpara> </zonbook> <xhtml> <p>The event
     * pattern.</p> </xhtml>
     */
    inline void SetEventPattern(Aws::String&& value) { m_eventPatternHasBeenSet = true; m_eventPattern = value; }

    /**
     * <zonbook> <simpara>The event pattern.</simpara> </zonbook> <xhtml> <p>The event
     * pattern.</p> </xhtml>
     */
    inline void SetEventPattern(const char* value) { m_eventPatternHasBeenSet = true; m_eventPattern.assign(value); }

    /**
     * <zonbook> <simpara>The event pattern.</simpara> </zonbook> <xhtml> <p>The event
     * pattern.</p> </xhtml>
     */
    inline TestEventPatternRequest& WithEventPattern(const Aws::String& value) { SetEventPattern(value); return *this;}

    /**
     * <zonbook> <simpara>The event pattern.</simpara> </zonbook> <xhtml> <p>The event
     * pattern.</p> </xhtml>
     */
    inline TestEventPatternRequest& WithEventPattern(Aws::String&& value) { SetEventPattern(value); return *this;}

    /**
     * <zonbook> <simpara>The event pattern.</simpara> </zonbook> <xhtml> <p>The event
     * pattern.</p> </xhtml>
     */
    inline TestEventPatternRequest& WithEventPattern(const char* value) { SetEventPattern(value); return *this;}

    /**
     * <zonbook> <simpara>The event, in JSON format, to test against the event
     * pattern.</simpara> </zonbook> <xhtml> <p>The event, in JSON format, to test
     * against the event pattern.</p> </xhtml>
     */
    inline const Aws::String& GetEvent() const{ return m_event; }

    /**
     * <zonbook> <simpara>The event, in JSON format, to test against the event
     * pattern.</simpara> </zonbook> <xhtml> <p>The event, in JSON format, to test
     * against the event pattern.</p> </xhtml>
     */
    inline void SetEvent(const Aws::String& value) { m_eventHasBeenSet = true; m_event = value; }

    /**
     * <zonbook> <simpara>The event, in JSON format, to test against the event
     * pattern.</simpara> </zonbook> <xhtml> <p>The event, in JSON format, to test
     * against the event pattern.</p> </xhtml>
     */
    inline void SetEvent(Aws::String&& value) { m_eventHasBeenSet = true; m_event = value; }

    /**
     * <zonbook> <simpara>The event, in JSON format, to test against the event
     * pattern.</simpara> </zonbook> <xhtml> <p>The event, in JSON format, to test
     * against the event pattern.</p> </xhtml>
     */
    inline void SetEvent(const char* value) { m_eventHasBeenSet = true; m_event.assign(value); }

    /**
     * <zonbook> <simpara>The event, in JSON format, to test against the event
     * pattern.</simpara> </zonbook> <xhtml> <p>The event, in JSON format, to test
     * against the event pattern.</p> </xhtml>
     */
    inline TestEventPatternRequest& WithEvent(const Aws::String& value) { SetEvent(value); return *this;}

    /**
     * <zonbook> <simpara>The event, in JSON format, to test against the event
     * pattern.</simpara> </zonbook> <xhtml> <p>The event, in JSON format, to test
     * against the event pattern.</p> </xhtml>
     */
    inline TestEventPatternRequest& WithEvent(Aws::String&& value) { SetEvent(value); return *this;}

    /**
     * <zonbook> <simpara>The event, in JSON format, to test against the event
     * pattern.</simpara> </zonbook> <xhtml> <p>The event, in JSON format, to test
     * against the event pattern.</p> </xhtml>
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
