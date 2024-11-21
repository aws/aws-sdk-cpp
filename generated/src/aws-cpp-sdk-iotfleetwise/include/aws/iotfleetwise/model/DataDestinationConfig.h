/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/S3Config.h>
#include <aws/iotfleetwise/model/TimestreamConfig.h>
#include <aws/iotfleetwise/model/MqttTopicConfig.h>
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
   * <p>The destination where the campaign sends data. You can send data to an MQTT
   * topic, or store it in Amazon S3 or Amazon Timestream.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/DataDestinationConfig">AWS
   * API Reference</a></p>
   */
  class DataDestinationConfig
  {
  public:
    AWS_IOTFLEETWISE_API DataDestinationConfig();
    AWS_IOTFLEETWISE_API DataDestinationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API DataDestinationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 bucket where the Amazon Web Services IoT FleetWise campaign
     * sends data.</p>
     */
    inline const S3Config& GetS3Config() const{ return m_s3Config; }
    inline bool S3ConfigHasBeenSet() const { return m_s3ConfigHasBeenSet; }
    inline void SetS3Config(const S3Config& value) { m_s3ConfigHasBeenSet = true; m_s3Config = value; }
    inline void SetS3Config(S3Config&& value) { m_s3ConfigHasBeenSet = true; m_s3Config = std::move(value); }
    inline DataDestinationConfig& WithS3Config(const S3Config& value) { SetS3Config(value); return *this;}
    inline DataDestinationConfig& WithS3Config(S3Config&& value) { SetS3Config(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Timestream table where the campaign sends data.</p>
     */
    inline const TimestreamConfig& GetTimestreamConfig() const{ return m_timestreamConfig; }
    inline bool TimestreamConfigHasBeenSet() const { return m_timestreamConfigHasBeenSet; }
    inline void SetTimestreamConfig(const TimestreamConfig& value) { m_timestreamConfigHasBeenSet = true; m_timestreamConfig = value; }
    inline void SetTimestreamConfig(TimestreamConfig&& value) { m_timestreamConfigHasBeenSet = true; m_timestreamConfig = std::move(value); }
    inline DataDestinationConfig& WithTimestreamConfig(const TimestreamConfig& value) { SetTimestreamConfig(value); return *this;}
    inline DataDestinationConfig& WithTimestreamConfig(TimestreamConfig&& value) { SetTimestreamConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MQTT topic to which the Amazon Web Services IoT FleetWise campaign routes
     * data.</p>  <p>Access to certain Amazon Web Services IoT FleetWise
     * features is currently gated. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/fleetwise-regions.html">Amazon
     * Web Services Region and feature availability</a> in the <i>Amazon Web Services
     * IoT FleetWise Developer Guide</i>.</p> 
     */
    inline const MqttTopicConfig& GetMqttTopicConfig() const{ return m_mqttTopicConfig; }
    inline bool MqttTopicConfigHasBeenSet() const { return m_mqttTopicConfigHasBeenSet; }
    inline void SetMqttTopicConfig(const MqttTopicConfig& value) { m_mqttTopicConfigHasBeenSet = true; m_mqttTopicConfig = value; }
    inline void SetMqttTopicConfig(MqttTopicConfig&& value) { m_mqttTopicConfigHasBeenSet = true; m_mqttTopicConfig = std::move(value); }
    inline DataDestinationConfig& WithMqttTopicConfig(const MqttTopicConfig& value) { SetMqttTopicConfig(value); return *this;}
    inline DataDestinationConfig& WithMqttTopicConfig(MqttTopicConfig&& value) { SetMqttTopicConfig(std::move(value)); return *this;}
    ///@}
  private:

    S3Config m_s3Config;
    bool m_s3ConfigHasBeenSet = false;

    TimestreamConfig m_timestreamConfig;
    bool m_timestreamConfigHasBeenSet = false;

    MqttTopicConfig m_mqttTopicConfig;
    bool m_mqttTopicConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
