/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/EventBridgeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EventBridge
{
namespace Model
{

  /**
   */
  class TestEventPatternRequest : public EventBridgeRequest
  {
  public:
    AWS_EVENTBRIDGE_API TestEventPatternRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestEventPattern"; }

    AWS_EVENTBRIDGE_API Aws::String SerializePayload() const override;

    AWS_EVENTBRIDGE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline const Aws::String& GetEventPattern() const{ return m_eventPattern; }

    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline bool EventPatternHasBeenSet() const { return m_eventPatternHasBeenSet; }

    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline void SetEventPattern(const Aws::String& value) { m_eventPatternHasBeenSet = true; m_eventPattern = value; }

    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline void SetEventPattern(Aws::String&& value) { m_eventPatternHasBeenSet = true; m_eventPattern = std::move(value); }

    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline void SetEventPattern(const char* value) { m_eventPatternHasBeenSet = true; m_eventPattern.assign(value); }

    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline TestEventPatternRequest& WithEventPattern(const Aws::String& value) { SetEventPattern(value); return *this;}

    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline TestEventPatternRequest& WithEventPattern(Aws::String&& value) { SetEventPattern(std::move(value)); return *this;}

    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline TestEventPatternRequest& WithEventPattern(const char* value) { SetEventPattern(value); return *this;}


    /**
     * <p>The event, in JSON format, to test against the event pattern. The JSON must
     * follow the format specified in <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/aws-events.html">Amazon
     * Web Services Events</a>, and the following fields are mandatory:</p> <ul> <li>
     * <p> <code>id</code> </p> </li> <li> <p> <code>account</code> </p> </li> <li> <p>
     * <code>source</code> </p> </li> <li> <p> <code>time</code> </p> </li> <li> <p>
     * <code>region</code> </p> </li> <li> <p> <code>resources</code> </p> </li> <li>
     * <p> <code>detail-type</code> </p> </li> </ul>
     */
    inline const Aws::String& GetEvent() const{ return m_event; }

    /**
     * <p>The event, in JSON format, to test against the event pattern. The JSON must
     * follow the format specified in <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/aws-events.html">Amazon
     * Web Services Events</a>, and the following fields are mandatory:</p> <ul> <li>
     * <p> <code>id</code> </p> </li> <li> <p> <code>account</code> </p> </li> <li> <p>
     * <code>source</code> </p> </li> <li> <p> <code>time</code> </p> </li> <li> <p>
     * <code>region</code> </p> </li> <li> <p> <code>resources</code> </p> </li> <li>
     * <p> <code>detail-type</code> </p> </li> </ul>
     */
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }

    /**
     * <p>The event, in JSON format, to test against the event pattern. The JSON must
     * follow the format specified in <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/aws-events.html">Amazon
     * Web Services Events</a>, and the following fields are mandatory:</p> <ul> <li>
     * <p> <code>id</code> </p> </li> <li> <p> <code>account</code> </p> </li> <li> <p>
     * <code>source</code> </p> </li> <li> <p> <code>time</code> </p> </li> <li> <p>
     * <code>region</code> </p> </li> <li> <p> <code>resources</code> </p> </li> <li>
     * <p> <code>detail-type</code> </p> </li> </ul>
     */
    inline void SetEvent(const Aws::String& value) { m_eventHasBeenSet = true; m_event = value; }

    /**
     * <p>The event, in JSON format, to test against the event pattern. The JSON must
     * follow the format specified in <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/aws-events.html">Amazon
     * Web Services Events</a>, and the following fields are mandatory:</p> <ul> <li>
     * <p> <code>id</code> </p> </li> <li> <p> <code>account</code> </p> </li> <li> <p>
     * <code>source</code> </p> </li> <li> <p> <code>time</code> </p> </li> <li> <p>
     * <code>region</code> </p> </li> <li> <p> <code>resources</code> </p> </li> <li>
     * <p> <code>detail-type</code> </p> </li> </ul>
     */
    inline void SetEvent(Aws::String&& value) { m_eventHasBeenSet = true; m_event = std::move(value); }

    /**
     * <p>The event, in JSON format, to test against the event pattern. The JSON must
     * follow the format specified in <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/aws-events.html">Amazon
     * Web Services Events</a>, and the following fields are mandatory:</p> <ul> <li>
     * <p> <code>id</code> </p> </li> <li> <p> <code>account</code> </p> </li> <li> <p>
     * <code>source</code> </p> </li> <li> <p> <code>time</code> </p> </li> <li> <p>
     * <code>region</code> </p> </li> <li> <p> <code>resources</code> </p> </li> <li>
     * <p> <code>detail-type</code> </p> </li> </ul>
     */
    inline void SetEvent(const char* value) { m_eventHasBeenSet = true; m_event.assign(value); }

    /**
     * <p>The event, in JSON format, to test against the event pattern. The JSON must
     * follow the format specified in <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/aws-events.html">Amazon
     * Web Services Events</a>, and the following fields are mandatory:</p> <ul> <li>
     * <p> <code>id</code> </p> </li> <li> <p> <code>account</code> </p> </li> <li> <p>
     * <code>source</code> </p> </li> <li> <p> <code>time</code> </p> </li> <li> <p>
     * <code>region</code> </p> </li> <li> <p> <code>resources</code> </p> </li> <li>
     * <p> <code>detail-type</code> </p> </li> </ul>
     */
    inline TestEventPatternRequest& WithEvent(const Aws::String& value) { SetEvent(value); return *this;}

    /**
     * <p>The event, in JSON format, to test against the event pattern. The JSON must
     * follow the format specified in <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/aws-events.html">Amazon
     * Web Services Events</a>, and the following fields are mandatory:</p> <ul> <li>
     * <p> <code>id</code> </p> </li> <li> <p> <code>account</code> </p> </li> <li> <p>
     * <code>source</code> </p> </li> <li> <p> <code>time</code> </p> </li> <li> <p>
     * <code>region</code> </p> </li> <li> <p> <code>resources</code> </p> </li> <li>
     * <p> <code>detail-type</code> </p> </li> </ul>
     */
    inline TestEventPatternRequest& WithEvent(Aws::String&& value) { SetEvent(std::move(value)); return *this;}

    /**
     * <p>The event, in JSON format, to test against the event pattern. The JSON must
     * follow the format specified in <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/aws-events.html">Amazon
     * Web Services Events</a>, and the following fields are mandatory:</p> <ul> <li>
     * <p> <code>id</code> </p> </li> <li> <p> <code>account</code> </p> </li> <li> <p>
     * <code>source</code> </p> </li> <li> <p> <code>time</code> </p> </li> <li> <p>
     * <code>region</code> </p> </li> <li> <p> <code>resources</code> </p> </li> <li>
     * <p> <code>detail-type</code> </p> </li> </ul>
     */
    inline TestEventPatternRequest& WithEvent(const char* value) { SetEvent(value); return *this;}

  private:

    Aws::String m_eventPattern;
    bool m_eventPatternHasBeenSet = false;

    Aws::String m_event;
    bool m_eventHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
