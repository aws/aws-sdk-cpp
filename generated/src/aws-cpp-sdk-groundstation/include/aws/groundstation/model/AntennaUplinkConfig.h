/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/UplinkSpectrumConfig.h>
#include <aws/groundstation/model/Eirp.h>
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
   * <p>Information about the uplink <code>Config</code> of an antenna.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/AntennaUplinkConfig">AWS
   * API Reference</a></p>
   */
  class AntennaUplinkConfig
  {
  public:
    AWS_GROUNDSTATION_API AntennaUplinkConfig();
    AWS_GROUNDSTATION_API AntennaUplinkConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API AntennaUplinkConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the uplink spectral <code>Config</code>.</p>
     */
    inline const UplinkSpectrumConfig& GetSpectrumConfig() const{ return m_spectrumConfig; }
    inline bool SpectrumConfigHasBeenSet() const { return m_spectrumConfigHasBeenSet; }
    inline void SetSpectrumConfig(const UplinkSpectrumConfig& value) { m_spectrumConfigHasBeenSet = true; m_spectrumConfig = value; }
    inline void SetSpectrumConfig(UplinkSpectrumConfig&& value) { m_spectrumConfigHasBeenSet = true; m_spectrumConfig = std::move(value); }
    inline AntennaUplinkConfig& WithSpectrumConfig(const UplinkSpectrumConfig& value) { SetSpectrumConfig(value); return *this;}
    inline AntennaUplinkConfig& WithSpectrumConfig(UplinkSpectrumConfig&& value) { SetSpectrumConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>EIRP of the target.</p>
     */
    inline const Eirp& GetTargetEirp() const{ return m_targetEirp; }
    inline bool TargetEirpHasBeenSet() const { return m_targetEirpHasBeenSet; }
    inline void SetTargetEirp(const Eirp& value) { m_targetEirpHasBeenSet = true; m_targetEirp = value; }
    inline void SetTargetEirp(Eirp&& value) { m_targetEirpHasBeenSet = true; m_targetEirp = std::move(value); }
    inline AntennaUplinkConfig& WithTargetEirp(const Eirp& value) { SetTargetEirp(value); return *this;}
    inline AntennaUplinkConfig& WithTargetEirp(Eirp&& value) { SetTargetEirp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not uplink transmit is disabled.</p>
     */
    inline bool GetTransmitDisabled() const{ return m_transmitDisabled; }
    inline bool TransmitDisabledHasBeenSet() const { return m_transmitDisabledHasBeenSet; }
    inline void SetTransmitDisabled(bool value) { m_transmitDisabledHasBeenSet = true; m_transmitDisabled = value; }
    inline AntennaUplinkConfig& WithTransmitDisabled(bool value) { SetTransmitDisabled(value); return *this;}
    ///@}
  private:

    UplinkSpectrumConfig m_spectrumConfig;
    bool m_spectrumConfigHasBeenSet = false;

    Eirp m_targetEirp;
    bool m_targetEirpHasBeenSet = false;

    bool m_transmitDisabled;
    bool m_transmitDisabledHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
