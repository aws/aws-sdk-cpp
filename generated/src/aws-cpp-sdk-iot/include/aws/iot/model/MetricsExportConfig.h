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
    AWS_IOT_API MetricsExportConfig() = default;
    AWS_IOT_API MetricsExportConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API MetricsExportConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The MQTT topic that Device Defender Detect should publish messages to for
     * metrics export.</p>
     */
    inline const Aws::String& GetMqttTopic() const { return m_mqttTopic; }
    inline bool MqttTopicHasBeenSet() const { return m_mqttTopicHasBeenSet; }
    template<typename MqttTopicT = Aws::String>
    void SetMqttTopic(MqttTopicT&& value) { m_mqttTopicHasBeenSet = true; m_mqttTopic = std::forward<MqttTopicT>(value); }
    template<typename MqttTopicT = Aws::String>
    MetricsExportConfig& WithMqttTopic(MqttTopicT&& value) { SetMqttTopic(std::forward<MqttTopicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This role ARN has permission to publish MQTT messages, after which Device
     * Defender Detect can assume the role and publish messages on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    MetricsExportConfig& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mqttTopic;
    bool m_mqttTopicHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
