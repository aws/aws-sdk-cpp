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
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/AntennaDownlinkConfig.h>
#include <aws/groundstation/model/AntennaDownlinkDemodDecodeConfig.h>
#include <aws/groundstation/model/AntennaUplinkConfig.h>
#include <aws/groundstation/model/DataflowEndpointConfig.h>
#include <aws/groundstation/model/TrackingConfig.h>
#include <aws/groundstation/model/UplinkEchoConfig.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Object containing the parameters for a <code>Config</code>.</p>
        
   * <p>See the subtype definitions for what each type of <code>Config</code>
   * contains.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ConfigTypeData">AWS
   * API Reference</a></p>
   */
  class AWS_GROUNDSTATION_API ConfigTypeData
  {
  public:
    ConfigTypeData();
    ConfigTypeData(Aws::Utils::Json::JsonView jsonValue);
    ConfigTypeData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about how AWS Ground Station should configure an antenna for
     * downlink during a contact.</p>
     */
    inline const AntennaDownlinkConfig& GetAntennaDownlinkConfig() const{ return m_antennaDownlinkConfig; }

    /**
     * <p>Information about how AWS Ground Station should configure an antenna for
     * downlink during a contact.</p>
     */
    inline bool AntennaDownlinkConfigHasBeenSet() const { return m_antennaDownlinkConfigHasBeenSet; }

    /**
     * <p>Information about how AWS Ground Station should configure an antenna for
     * downlink during a contact.</p>
     */
    inline void SetAntennaDownlinkConfig(const AntennaDownlinkConfig& value) { m_antennaDownlinkConfigHasBeenSet = true; m_antennaDownlinkConfig = value; }

    /**
     * <p>Information about how AWS Ground Station should configure an antenna for
     * downlink during a contact.</p>
     */
    inline void SetAntennaDownlinkConfig(AntennaDownlinkConfig&& value) { m_antennaDownlinkConfigHasBeenSet = true; m_antennaDownlinkConfig = std::move(value); }

    /**
     * <p>Information about how AWS Ground Station should configure an antenna for
     * downlink during a contact.</p>
     */
    inline ConfigTypeData& WithAntennaDownlinkConfig(const AntennaDownlinkConfig& value) { SetAntennaDownlinkConfig(value); return *this;}

    /**
     * <p>Information about how AWS Ground Station should configure an antenna for
     * downlink during a contact.</p>
     */
    inline ConfigTypeData& WithAntennaDownlinkConfig(AntennaDownlinkConfig&& value) { SetAntennaDownlinkConfig(std::move(value)); return *this;}


    /**
     * <p>Information about how AWS Ground Station should conﬁgure an antenna for
     * downlink demod decode during a contact.</p>
     */
    inline const AntennaDownlinkDemodDecodeConfig& GetAntennaDownlinkDemodDecodeConfig() const{ return m_antennaDownlinkDemodDecodeConfig; }

    /**
     * <p>Information about how AWS Ground Station should conﬁgure an antenna for
     * downlink demod decode during a contact.</p>
     */
    inline bool AntennaDownlinkDemodDecodeConfigHasBeenSet() const { return m_antennaDownlinkDemodDecodeConfigHasBeenSet; }

    /**
     * <p>Information about how AWS Ground Station should conﬁgure an antenna for
     * downlink demod decode during a contact.</p>
     */
    inline void SetAntennaDownlinkDemodDecodeConfig(const AntennaDownlinkDemodDecodeConfig& value) { m_antennaDownlinkDemodDecodeConfigHasBeenSet = true; m_antennaDownlinkDemodDecodeConfig = value; }

    /**
     * <p>Information about how AWS Ground Station should conﬁgure an antenna for
     * downlink demod decode during a contact.</p>
     */
    inline void SetAntennaDownlinkDemodDecodeConfig(AntennaDownlinkDemodDecodeConfig&& value) { m_antennaDownlinkDemodDecodeConfigHasBeenSet = true; m_antennaDownlinkDemodDecodeConfig = std::move(value); }

    /**
     * <p>Information about how AWS Ground Station should conﬁgure an antenna for
     * downlink demod decode during a contact.</p>
     */
    inline ConfigTypeData& WithAntennaDownlinkDemodDecodeConfig(const AntennaDownlinkDemodDecodeConfig& value) { SetAntennaDownlinkDemodDecodeConfig(value); return *this;}

    /**
     * <p>Information about how AWS Ground Station should conﬁgure an antenna for
     * downlink demod decode during a contact.</p>
     */
    inline ConfigTypeData& WithAntennaDownlinkDemodDecodeConfig(AntennaDownlinkDemodDecodeConfig&& value) { SetAntennaDownlinkDemodDecodeConfig(std::move(value)); return *this;}


    /**
     * <p>Information about how AWS Ground Station should conﬁgure an antenna for
     * uplink during a contact.</p>
     */
    inline const AntennaUplinkConfig& GetAntennaUplinkConfig() const{ return m_antennaUplinkConfig; }

    /**
     * <p>Information about how AWS Ground Station should conﬁgure an antenna for
     * uplink during a contact.</p>
     */
    inline bool AntennaUplinkConfigHasBeenSet() const { return m_antennaUplinkConfigHasBeenSet; }

    /**
     * <p>Information about how AWS Ground Station should conﬁgure an antenna for
     * uplink during a contact.</p>
     */
    inline void SetAntennaUplinkConfig(const AntennaUplinkConfig& value) { m_antennaUplinkConfigHasBeenSet = true; m_antennaUplinkConfig = value; }

    /**
     * <p>Information about how AWS Ground Station should conﬁgure an antenna for
     * uplink during a contact.</p>
     */
    inline void SetAntennaUplinkConfig(AntennaUplinkConfig&& value) { m_antennaUplinkConfigHasBeenSet = true; m_antennaUplinkConfig = std::move(value); }

    /**
     * <p>Information about how AWS Ground Station should conﬁgure an antenna for
     * uplink during a contact.</p>
     */
    inline ConfigTypeData& WithAntennaUplinkConfig(const AntennaUplinkConfig& value) { SetAntennaUplinkConfig(value); return *this;}

    /**
     * <p>Information about how AWS Ground Station should conﬁgure an antenna for
     * uplink during a contact.</p>
     */
    inline ConfigTypeData& WithAntennaUplinkConfig(AntennaUplinkConfig&& value) { SetAntennaUplinkConfig(std::move(value)); return *this;}


    /**
     * <p>Information about the dataflow endpoint <code>Config</code>.</p>
     */
    inline const DataflowEndpointConfig& GetDataflowEndpointConfig() const{ return m_dataflowEndpointConfig; }

    /**
     * <p>Information about the dataflow endpoint <code>Config</code>.</p>
     */
    inline bool DataflowEndpointConfigHasBeenSet() const { return m_dataflowEndpointConfigHasBeenSet; }

    /**
     * <p>Information about the dataflow endpoint <code>Config</code>.</p>
     */
    inline void SetDataflowEndpointConfig(const DataflowEndpointConfig& value) { m_dataflowEndpointConfigHasBeenSet = true; m_dataflowEndpointConfig = value; }

    /**
     * <p>Information about the dataflow endpoint <code>Config</code>.</p>
     */
    inline void SetDataflowEndpointConfig(DataflowEndpointConfig&& value) { m_dataflowEndpointConfigHasBeenSet = true; m_dataflowEndpointConfig = std::move(value); }

    /**
     * <p>Information about the dataflow endpoint <code>Config</code>.</p>
     */
    inline ConfigTypeData& WithDataflowEndpointConfig(const DataflowEndpointConfig& value) { SetDataflowEndpointConfig(value); return *this;}

    /**
     * <p>Information about the dataflow endpoint <code>Config</code>.</p>
     */
    inline ConfigTypeData& WithDataflowEndpointConfig(DataflowEndpointConfig&& value) { SetDataflowEndpointConfig(std::move(value)); return *this;}


    /**
     * <p>Object that determines whether tracking should be used during a contact
     * executed with this <code>Config</code> in the mission profile. </p>
     */
    inline const TrackingConfig& GetTrackingConfig() const{ return m_trackingConfig; }

    /**
     * <p>Object that determines whether tracking should be used during a contact
     * executed with this <code>Config</code> in the mission profile. </p>
     */
    inline bool TrackingConfigHasBeenSet() const { return m_trackingConfigHasBeenSet; }

    /**
     * <p>Object that determines whether tracking should be used during a contact
     * executed with this <code>Config</code> in the mission profile. </p>
     */
    inline void SetTrackingConfig(const TrackingConfig& value) { m_trackingConfigHasBeenSet = true; m_trackingConfig = value; }

    /**
     * <p>Object that determines whether tracking should be used during a contact
     * executed with this <code>Config</code> in the mission profile. </p>
     */
    inline void SetTrackingConfig(TrackingConfig&& value) { m_trackingConfigHasBeenSet = true; m_trackingConfig = std::move(value); }

    /**
     * <p>Object that determines whether tracking should be used during a contact
     * executed with this <code>Config</code> in the mission profile. </p>
     */
    inline ConfigTypeData& WithTrackingConfig(const TrackingConfig& value) { SetTrackingConfig(value); return *this;}

    /**
     * <p>Object that determines whether tracking should be used during a contact
     * executed with this <code>Config</code> in the mission profile. </p>
     */
    inline ConfigTypeData& WithTrackingConfig(TrackingConfig&& value) { SetTrackingConfig(std::move(value)); return *this;}


    /**
     * <p>Information about an uplink echo <code>Config</code>.</p>
        
     * <p>Parameters from the <code>AntennaUplinkConfig</code>, corresponding to the
     * specified <code>AntennaUplinkConfigArn</code>, are used when this
     * <code>UplinkEchoConfig</code> is used in a contact.</p>
     */
    inline const UplinkEchoConfig& GetUplinkEchoConfig() const{ return m_uplinkEchoConfig; }

    /**
     * <p>Information about an uplink echo <code>Config</code>.</p>
        
     * <p>Parameters from the <code>AntennaUplinkConfig</code>, corresponding to the
     * specified <code>AntennaUplinkConfigArn</code>, are used when this
     * <code>UplinkEchoConfig</code> is used in a contact.</p>
     */
    inline bool UplinkEchoConfigHasBeenSet() const { return m_uplinkEchoConfigHasBeenSet; }

    /**
     * <p>Information about an uplink echo <code>Config</code>.</p>
        
     * <p>Parameters from the <code>AntennaUplinkConfig</code>, corresponding to the
     * specified <code>AntennaUplinkConfigArn</code>, are used when this
     * <code>UplinkEchoConfig</code> is used in a contact.</p>
     */
    inline void SetUplinkEchoConfig(const UplinkEchoConfig& value) { m_uplinkEchoConfigHasBeenSet = true; m_uplinkEchoConfig = value; }

    /**
     * <p>Information about an uplink echo <code>Config</code>.</p>
        
     * <p>Parameters from the <code>AntennaUplinkConfig</code>, corresponding to the
     * specified <code>AntennaUplinkConfigArn</code>, are used when this
     * <code>UplinkEchoConfig</code> is used in a contact.</p>
     */
    inline void SetUplinkEchoConfig(UplinkEchoConfig&& value) { m_uplinkEchoConfigHasBeenSet = true; m_uplinkEchoConfig = std::move(value); }

    /**
     * <p>Information about an uplink echo <code>Config</code>.</p>
        
     * <p>Parameters from the <code>AntennaUplinkConfig</code>, corresponding to the
     * specified <code>AntennaUplinkConfigArn</code>, are used when this
     * <code>UplinkEchoConfig</code> is used in a contact.</p>
     */
    inline ConfigTypeData& WithUplinkEchoConfig(const UplinkEchoConfig& value) { SetUplinkEchoConfig(value); return *this;}

    /**
     * <p>Information about an uplink echo <code>Config</code>.</p>
        
     * <p>Parameters from the <code>AntennaUplinkConfig</code>, corresponding to the
     * specified <code>AntennaUplinkConfigArn</code>, are used when this
     * <code>UplinkEchoConfig</code> is used in a contact.</p>
     */
    inline ConfigTypeData& WithUplinkEchoConfig(UplinkEchoConfig&& value) { SetUplinkEchoConfig(std::move(value)); return *this;}

  private:

    AntennaDownlinkConfig m_antennaDownlinkConfig;
    bool m_antennaDownlinkConfigHasBeenSet;

    AntennaDownlinkDemodDecodeConfig m_antennaDownlinkDemodDecodeConfig;
    bool m_antennaDownlinkDemodDecodeConfigHasBeenSet;

    AntennaUplinkConfig m_antennaUplinkConfig;
    bool m_antennaUplinkConfigHasBeenSet;

    DataflowEndpointConfig m_dataflowEndpointConfig;
    bool m_dataflowEndpointConfigHasBeenSet;

    TrackingConfig m_trackingConfig;
    bool m_trackingConfigHasBeenSet;

    UplinkEchoConfig m_uplinkEchoConfig;
    bool m_uplinkEchoConfigHasBeenSet;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
