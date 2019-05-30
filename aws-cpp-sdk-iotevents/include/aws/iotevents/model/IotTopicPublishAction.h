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
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Information required to publish the MQTT message via the AWS IoT Message
   * Broker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/IotTopicPublishAction">AWS
   * API Reference</a></p>
   */
  class AWS_IOTEVENTS_API IotTopicPublishAction
  {
  public:
    IotTopicPublishAction();
    IotTopicPublishAction(Aws::Utils::Json::JsonView jsonValue);
    IotTopicPublishAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The MQTT topic of the message.</p>
     */
    inline const Aws::String& GetMqttTopic() const{ return m_mqttTopic; }

    /**
     * <p>The MQTT topic of the message.</p>
     */
    inline bool MqttTopicHasBeenSet() const { return m_mqttTopicHasBeenSet; }

    /**
     * <p>The MQTT topic of the message.</p>
     */
    inline void SetMqttTopic(const Aws::String& value) { m_mqttTopicHasBeenSet = true; m_mqttTopic = value; }

    /**
     * <p>The MQTT topic of the message.</p>
     */
    inline void SetMqttTopic(Aws::String&& value) { m_mqttTopicHasBeenSet = true; m_mqttTopic = std::move(value); }

    /**
     * <p>The MQTT topic of the message.</p>
     */
    inline void SetMqttTopic(const char* value) { m_mqttTopicHasBeenSet = true; m_mqttTopic.assign(value); }

    /**
     * <p>The MQTT topic of the message.</p>
     */
    inline IotTopicPublishAction& WithMqttTopic(const Aws::String& value) { SetMqttTopic(value); return *this;}

    /**
     * <p>The MQTT topic of the message.</p>
     */
    inline IotTopicPublishAction& WithMqttTopic(Aws::String&& value) { SetMqttTopic(std::move(value)); return *this;}

    /**
     * <p>The MQTT topic of the message.</p>
     */
    inline IotTopicPublishAction& WithMqttTopic(const char* value) { SetMqttTopic(value); return *this;}

  private:

    Aws::String m_mqttTopic;
    bool m_mqttTopicHasBeenSet;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
