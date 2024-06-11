/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class FlowExecutionMessage
  {
  public:
    AWS_IOTTHINGSGRAPH_API FlowExecutionMessage();
    AWS_IOTTHINGSGRAPH_API FlowExecutionMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API FlowExecutionMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the message.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }
    inline FlowExecutionMessage& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}
    inline FlowExecutionMessage& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}
    inline FlowExecutionMessage& WithMessageId(const char* value) { SetMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of flow event .</p>
     */
    inline const FlowExecutionEventType& GetEventType() const{ return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(const FlowExecutionEventType& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline void SetEventType(FlowExecutionEventType&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }
    inline FlowExecutionMessage& WithEventType(const FlowExecutionEventType& value) { SetEventType(value); return *this;}
    inline FlowExecutionMessage& WithEventType(FlowExecutionEventType&& value) { SetEventType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the message was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline FlowExecutionMessage& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline FlowExecutionMessage& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string containing information about the flow event.</p>
     */
    inline const Aws::String& GetPayload() const{ return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    inline void SetPayload(const Aws::String& value) { m_payloadHasBeenSet = true; m_payload = value; }
    inline void SetPayload(Aws::String&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }
    inline void SetPayload(const char* value) { m_payloadHasBeenSet = true; m_payload.assign(value); }
    inline FlowExecutionMessage& WithPayload(const Aws::String& value) { SetPayload(value); return *this;}
    inline FlowExecutionMessage& WithPayload(Aws::String&& value) { SetPayload(std::move(value)); return *this;}
    inline FlowExecutionMessage& WithPayload(const char* value) { SetPayload(value); return *this;}
    ///@}
  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    FlowExecutionEventType m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    Aws::String m_payload;
    bool m_payloadHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
