﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/Payload.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Information required to publish the MQTT message through the AWS IoT message
   * broker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/IotTopicPublishAction">AWS
   * API Reference</a></p>
   */
  class IotTopicPublishAction
  {
  public:
    AWS_IOTEVENTS_API IotTopicPublishAction();
    AWS_IOTEVENTS_API IotTopicPublishAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API IotTopicPublishAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The MQTT topic of the message. You can use a string expression that includes
     * variables (<code>$variable.&lt;variable-name&gt;</code>) and input values
     * (<code>$input.&lt;input-name&gt;.&lt;path-to-datum&gt;</code>) as the topic
     * string.</p>
     */
    inline const Aws::String& GetMqttTopic() const{ return m_mqttTopic; }
    inline bool MqttTopicHasBeenSet() const { return m_mqttTopicHasBeenSet; }
    inline void SetMqttTopic(const Aws::String& value) { m_mqttTopicHasBeenSet = true; m_mqttTopic = value; }
    inline void SetMqttTopic(Aws::String&& value) { m_mqttTopicHasBeenSet = true; m_mqttTopic = std::move(value); }
    inline void SetMqttTopic(const char* value) { m_mqttTopicHasBeenSet = true; m_mqttTopic.assign(value); }
    inline IotTopicPublishAction& WithMqttTopic(const Aws::String& value) { SetMqttTopic(value); return *this;}
    inline IotTopicPublishAction& WithMqttTopic(Aws::String&& value) { SetMqttTopic(std::move(value)); return *this;}
    inline IotTopicPublishAction& WithMqttTopic(const char* value) { SetMqttTopic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can configure the action payload when you publish a message to an AWS IoT
     * Core topic.</p>
     */
    inline const Payload& GetPayload() const{ return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    inline void SetPayload(const Payload& value) { m_payloadHasBeenSet = true; m_payload = value; }
    inline void SetPayload(Payload&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }
    inline IotTopicPublishAction& WithPayload(const Payload& value) { SetPayload(value); return *this;}
    inline IotTopicPublishAction& WithPayload(Payload&& value) { SetPayload(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_mqttTopic;
    bool m_mqttTopicHasBeenSet = false;

    Payload m_payload;
    bool m_payloadHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
