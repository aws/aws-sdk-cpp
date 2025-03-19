/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>The MQTT topic to which the Amazon Web Services IoT FleetWise campaign routes
   * data. For more information, see <a
   * href="https://docs.aws.amazon.com/iot/latest/developerguide/protocols.html">Device
   * communication protocols</a> in the <i>Amazon Web Services IoT Core Developer
   * Guide</i>.</p>  <p>Access to certain Amazon Web Services IoT
   * FleetWise features is currently gated. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/fleetwise-regions.html">Amazon
   * Web Services Region and feature availability</a> in the <i>Amazon Web Services
   * IoT FleetWise Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/MqttTopicConfig">AWS
   * API Reference</a></p>
   */
  class MqttTopicConfig
  {
  public:
    AWS_IOTFLEETWISE_API MqttTopicConfig() = default;
    AWS_IOTFLEETWISE_API MqttTopicConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API MqttTopicConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the MQTT topic.</p>
     */
    inline const Aws::String& GetMqttTopicArn() const { return m_mqttTopicArn; }
    inline bool MqttTopicArnHasBeenSet() const { return m_mqttTopicArnHasBeenSet; }
    template<typename MqttTopicArnT = Aws::String>
    void SetMqttTopicArn(MqttTopicArnT&& value) { m_mqttTopicArnHasBeenSet = true; m_mqttTopicArn = std::forward<MqttTopicArnT>(value); }
    template<typename MqttTopicArnT = Aws::String>
    MqttTopicConfig& WithMqttTopicArn(MqttTopicArnT&& value) { SetMqttTopicArn(std::forward<MqttTopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role that grants Amazon Web Services IoT FleetWise permission
     * to access and act on messages sent to the MQTT topic.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    MqttTopicConfig& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mqttTopicArn;
    bool m_mqttTopicArnHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
