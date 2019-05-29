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
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotthingsgraph/model/FlowExecutionEventType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTThingsGraph
{
namespace Model
{

  /**
   * <p>An object that contains information about a flow event.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/FlowExecutionMessage">AWS
   * API Reference</a></p>
   */
  class AWS_IOTTHINGSGRAPH_API FlowExecutionMessage
  {
  public:
    FlowExecutionMessage();
    FlowExecutionMessage(Aws::Utils::Json::JsonView jsonValue);
    FlowExecutionMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the message.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>The unique identifier of the message.</p>
     */
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    /**
     * <p>The unique identifier of the message.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>The unique identifier of the message.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    /**
     * <p>The unique identifier of the message.</p>
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * <p>The unique identifier of the message.</p>
     */
    inline FlowExecutionMessage& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>The unique identifier of the message.</p>
     */
    inline FlowExecutionMessage& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the message.</p>
     */
    inline FlowExecutionMessage& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    /**
     * <p>The type of flow event .</p>
     */
    inline const FlowExecutionEventType& GetEventType() const{ return m_eventType; }

    /**
     * <p>The type of flow event .</p>
     */
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

    /**
     * <p>The type of flow event .</p>
     */
    inline void SetEventType(const FlowExecutionEventType& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p>The type of flow event .</p>
     */
    inline void SetEventType(FlowExecutionEventType&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * <p>The type of flow event .</p>
     */
    inline FlowExecutionMessage& WithEventType(const FlowExecutionEventType& value) { SetEventType(value); return *this;}

    /**
     * <p>The type of flow event .</p>
     */
    inline FlowExecutionMessage& WithEventType(FlowExecutionEventType&& value) { SetEventType(std::move(value)); return *this;}


    /**
     * <p>The date and time when the message was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The date and time when the message was last updated.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The date and time when the message was last updated.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The date and time when the message was last updated.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The date and time when the message was last updated.</p>
     */
    inline FlowExecutionMessage& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The date and time when the message was last updated.</p>
     */
    inline FlowExecutionMessage& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p>A string containing information about the flow event.</p>
     */
    inline const Aws::String& GetPayload() const{ return m_payload; }

    /**
     * <p>A string containing information about the flow event.</p>
     */
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }

    /**
     * <p>A string containing information about the flow event.</p>
     */
    inline void SetPayload(const Aws::String& value) { m_payloadHasBeenSet = true; m_payload = value; }

    /**
     * <p>A string containing information about the flow event.</p>
     */
    inline void SetPayload(Aws::String&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }

    /**
     * <p>A string containing information about the flow event.</p>
     */
    inline void SetPayload(const char* value) { m_payloadHasBeenSet = true; m_payload.assign(value); }

    /**
     * <p>A string containing information about the flow event.</p>
     */
    inline FlowExecutionMessage& WithPayload(const Aws::String& value) { SetPayload(value); return *this;}

    /**
     * <p>A string containing information about the flow event.</p>
     */
    inline FlowExecutionMessage& WithPayload(Aws::String&& value) { SetPayload(std::move(value)); return *this;}

    /**
     * <p>A string containing information about the flow event.</p>
     */
    inline FlowExecutionMessage& WithPayload(const char* value) { SetPayload(value); return *this;}

  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet;

    FlowExecutionEventType m_eventType;
    bool m_eventTypeHasBeenSet;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet;

    Aws::String m_payload;
    bool m_payloadHasBeenSet;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
