/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Set configurations for metrics export.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/MetricsExportConfig">AWS
   * API Reference</a></p>
   */
  class MetricsExportConfig
  {
  public:
    AWS_IOT_API MetricsExportConfig();
    AWS_IOT_API MetricsExportConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API MetricsExportConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The MQTT topic that Device Defender Detect should publish messages to for
     * metrics export.</p>
     */
    inline const Aws::String& GetMqttTopic() const{ return m_mqttTopic; }

    /**
     * <p>The MQTT topic that Device Defender Detect should publish messages to for
     * metrics export.</p>
     */
    inline bool MqttTopicHasBeenSet() const { return m_mqttTopicHasBeenSet; }

    /**
     * <p>The MQTT topic that Device Defender Detect should publish messages to for
     * metrics export.</p>
     */
    inline void SetMqttTopic(const Aws::String& value) { m_mqttTopicHasBeenSet = true; m_mqttTopic = value; }

    /**
     * <p>The MQTT topic that Device Defender Detect should publish messages to for
     * metrics export.</p>
     */
    inline void SetMqttTopic(Aws::String&& value) { m_mqttTopicHasBeenSet = true; m_mqttTopic = std::move(value); }

    /**
     * <p>The MQTT topic that Device Defender Detect should publish messages to for
     * metrics export.</p>
     */
    inline void SetMqttTopic(const char* value) { m_mqttTopicHasBeenSet = true; m_mqttTopic.assign(value); }

    /**
     * <p>The MQTT topic that Device Defender Detect should publish messages to for
     * metrics export.</p>
     */
    inline MetricsExportConfig& WithMqttTopic(const Aws::String& value) { SetMqttTopic(value); return *this;}

    /**
     * <p>The MQTT topic that Device Defender Detect should publish messages to for
     * metrics export.</p>
     */
    inline MetricsExportConfig& WithMqttTopic(Aws::String&& value) { SetMqttTopic(std::move(value)); return *this;}

    /**
     * <p>The MQTT topic that Device Defender Detect should publish messages to for
     * metrics export.</p>
     */
    inline MetricsExportConfig& WithMqttTopic(const char* value) { SetMqttTopic(value); return *this;}


    /**
     * <p>This role ARN has permission to publish MQTT messages, after which Device
     * Defender Detect can assume the role and publish messages on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>This role ARN has permission to publish MQTT messages, after which Device
     * Defender Detect can assume the role and publish messages on your behalf.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>This role ARN has permission to publish MQTT messages, after which Device
     * Defender Detect can assume the role and publish messages on your behalf.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>This role ARN has permission to publish MQTT messages, after which Device
     * Defender Detect can assume the role and publish messages on your behalf.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>This role ARN has permission to publish MQTT messages, after which Device
     * Defender Detect can assume the role and publish messages on your behalf.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>This role ARN has permission to publish MQTT messages, after which Device
     * Defender Detect can assume the role and publish messages on your behalf.</p>
     */
    inline MetricsExportConfig& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>This role ARN has permission to publish MQTT messages, after which Device
     * Defender Detect can assume the role and publish messages on your behalf.</p>
     */
    inline MetricsExportConfig& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>This role ARN has permission to publish MQTT messages, after which Device
     * Defender Detect can assume the role and publish messages on your behalf.</p>
     */
    inline MetricsExportConfig& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_mqttTopic;
    bool m_mqttTopicHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
