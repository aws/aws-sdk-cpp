/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/AntennaDownlinkConfig.h>
#include <aws/groundstation/model/AntennaDownlinkDemodDecodeConfig.h>
#include <aws/groundstation/model/AntennaUplinkConfig.h>
#include <aws/groundstation/model/DataflowEndpointConfig.h>
#include <aws/groundstation/model/S3RecordingConfig.h>
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
   * <p>Object containing the parameters of a <code>Config</code>.</p> <p>See the
   * subtype definitions for what each type of <code>Config</code>
   * contains.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ConfigTypeData">AWS
   * API Reference</a></p>
   */
  class ConfigTypeData
  {
  public:
    AWS_GROUNDSTATION_API ConfigTypeData() = default;
    AWS_GROUNDSTATION_API ConfigTypeData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API ConfigTypeData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about how AWS Ground Station should configure an antenna for
     * downlink during a contact.</p>
     */
    inline const AntennaDownlinkConfig& GetAntennaDownlinkConfig() const { return m_antennaDownlinkConfig; }
    inline bool AntennaDownlinkConfigHasBeenSet() const { return m_antennaDownlinkConfigHasBeenSet; }
    template<typename AntennaDownlinkConfigT = AntennaDownlinkConfig>
    void SetAntennaDownlinkConfig(AntennaDownlinkConfigT&& value) { m_antennaDownlinkConfigHasBeenSet = true; m_antennaDownlinkConfig = std::forward<AntennaDownlinkConfigT>(value); }
    template<typename AntennaDownlinkConfigT = AntennaDownlinkConfig>
    ConfigTypeData& WithAntennaDownlinkConfig(AntennaDownlinkConfigT&& value) { SetAntennaDownlinkConfig(std::forward<AntennaDownlinkConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about how AWS Ground Station should conﬁgure an antenna for
     * downlink demod decode during a contact.</p>
     */
    inline const AntennaDownlinkDemodDecodeConfig& GetAntennaDownlinkDemodDecodeConfig() const { return m_antennaDownlinkDemodDecodeConfig; }
    inline bool AntennaDownlinkDemodDecodeConfigHasBeenSet() const { return m_antennaDownlinkDemodDecodeConfigHasBeenSet; }
    template<typename AntennaDownlinkDemodDecodeConfigT = AntennaDownlinkDemodDecodeConfig>
    void SetAntennaDownlinkDemodDecodeConfig(AntennaDownlinkDemodDecodeConfigT&& value) { m_antennaDownlinkDemodDecodeConfigHasBeenSet = true; m_antennaDownlinkDemodDecodeConfig = std::forward<AntennaDownlinkDemodDecodeConfigT>(value); }
    template<typename AntennaDownlinkDemodDecodeConfigT = AntennaDownlinkDemodDecodeConfig>
    ConfigTypeData& WithAntennaDownlinkDemodDecodeConfig(AntennaDownlinkDemodDecodeConfigT&& value) { SetAntennaDownlinkDemodDecodeConfig(std::forward<AntennaDownlinkDemodDecodeConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about how AWS Ground Station should conﬁgure an antenna for
     * uplink during a contact.</p>
     */
    inline const AntennaUplinkConfig& GetAntennaUplinkConfig() const { return m_antennaUplinkConfig; }
    inline bool AntennaUplinkConfigHasBeenSet() const { return m_antennaUplinkConfigHasBeenSet; }
    template<typename AntennaUplinkConfigT = AntennaUplinkConfig>
    void SetAntennaUplinkConfig(AntennaUplinkConfigT&& value) { m_antennaUplinkConfigHasBeenSet = true; m_antennaUplinkConfig = std::forward<AntennaUplinkConfigT>(value); }
    template<typename AntennaUplinkConfigT = AntennaUplinkConfig>
    ConfigTypeData& WithAntennaUplinkConfig(AntennaUplinkConfigT&& value) { SetAntennaUplinkConfig(std::forward<AntennaUplinkConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the dataflow endpoint <code>Config</code>.</p>
     */
    inline const DataflowEndpointConfig& GetDataflowEndpointConfig() const { return m_dataflowEndpointConfig; }
    inline bool DataflowEndpointConfigHasBeenSet() const { return m_dataflowEndpointConfigHasBeenSet; }
    template<typename DataflowEndpointConfigT = DataflowEndpointConfig>
    void SetDataflowEndpointConfig(DataflowEndpointConfigT&& value) { m_dataflowEndpointConfigHasBeenSet = true; m_dataflowEndpointConfig = std::forward<DataflowEndpointConfigT>(value); }
    template<typename DataflowEndpointConfigT = DataflowEndpointConfig>
    ConfigTypeData& WithDataflowEndpointConfig(DataflowEndpointConfigT&& value) { SetDataflowEndpointConfig(std::forward<DataflowEndpointConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about an S3 recording <code>Config</code>.</p>
     */
    inline const S3RecordingConfig& GetS3RecordingConfig() const { return m_s3RecordingConfig; }
    inline bool S3RecordingConfigHasBeenSet() const { return m_s3RecordingConfigHasBeenSet; }
    template<typename S3RecordingConfigT = S3RecordingConfig>
    void SetS3RecordingConfig(S3RecordingConfigT&& value) { m_s3RecordingConfigHasBeenSet = true; m_s3RecordingConfig = std::forward<S3RecordingConfigT>(value); }
    template<typename S3RecordingConfigT = S3RecordingConfig>
    ConfigTypeData& WithS3RecordingConfig(S3RecordingConfigT&& value) { SetS3RecordingConfig(std::forward<S3RecordingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object that determines whether tracking should be used during a contact
     * executed with this <code>Config</code> in the mission profile. </p>
     */
    inline const TrackingConfig& GetTrackingConfig() const { return m_trackingConfig; }
    inline bool TrackingConfigHasBeenSet() const { return m_trackingConfigHasBeenSet; }
    template<typename TrackingConfigT = TrackingConfig>
    void SetTrackingConfig(TrackingConfigT&& value) { m_trackingConfigHasBeenSet = true; m_trackingConfig = std::forward<TrackingConfigT>(value); }
    template<typename TrackingConfigT = TrackingConfig>
    ConfigTypeData& WithTrackingConfig(TrackingConfigT&& value) { SetTrackingConfig(std::forward<TrackingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about an uplink echo <code>Config</code>.</p> <p>Parameters from
     * the <code>AntennaUplinkConfig</code>, corresponding to the specified
     * <code>AntennaUplinkConfigArn</code>, are used when this
     * <code>UplinkEchoConfig</code> is used in a contact.</p>
     */
    inline const UplinkEchoConfig& GetUplinkEchoConfig() const { return m_uplinkEchoConfig; }
    inline bool UplinkEchoConfigHasBeenSet() const { return m_uplinkEchoConfigHasBeenSet; }
    template<typename UplinkEchoConfigT = UplinkEchoConfig>
    void SetUplinkEchoConfig(UplinkEchoConfigT&& value) { m_uplinkEchoConfigHasBeenSet = true; m_uplinkEchoConfig = std::forward<UplinkEchoConfigT>(value); }
    template<typename UplinkEchoConfigT = UplinkEchoConfig>
    ConfigTypeData& WithUplinkEchoConfig(UplinkEchoConfigT&& value) { SetUplinkEchoConfig(std::forward<UplinkEchoConfigT>(value)); return *this;}
    ///@}
  private:

    AntennaDownlinkConfig m_antennaDownlinkConfig;
    bool m_antennaDownlinkConfigHasBeenSet = false;

    AntennaDownlinkDemodDecodeConfig m_antennaDownlinkDemodDecodeConfig;
    bool m_antennaDownlinkDemodDecodeConfigHasBeenSet = false;

    AntennaUplinkConfig m_antennaUplinkConfig;
    bool m_antennaUplinkConfigHasBeenSet = false;

    DataflowEndpointConfig m_dataflowEndpointConfig;
    bool m_dataflowEndpointConfigHasBeenSet = false;

    S3RecordingConfig m_s3RecordingConfig;
    bool m_s3RecordingConfigHasBeenSet = false;

    TrackingConfig m_trackingConfig;
    bool m_trackingConfigHasBeenSet = false;

    UplinkEchoConfig m_uplinkEchoConfig;
    bool m_uplinkEchoConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
