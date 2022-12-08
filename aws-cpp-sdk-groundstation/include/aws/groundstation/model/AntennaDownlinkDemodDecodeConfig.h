/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/DecodeConfig.h>
#include <aws/groundstation/model/DemodulationConfig.h>
#include <aws/groundstation/model/SpectrumConfig.h>
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
   * <p>Information about how AWS Ground Station should conﬁgure an antenna for
   * downlink demod decode during a contact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/AntennaDownlinkDemodDecodeConfig">AWS
   * API Reference</a></p>
   */
  class AntennaDownlinkDemodDecodeConfig
  {
  public:
    AWS_GROUNDSTATION_API AntennaDownlinkDemodDecodeConfig();
    AWS_GROUNDSTATION_API AntennaDownlinkDemodDecodeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API AntennaDownlinkDemodDecodeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the decode <code>Config</code>.</p>
     */
    inline const DecodeConfig& GetDecodeConfig() const{ return m_decodeConfig; }

    /**
     * <p>Information about the decode <code>Config</code>.</p>
     */
    inline bool DecodeConfigHasBeenSet() const { return m_decodeConfigHasBeenSet; }

    /**
     * <p>Information about the decode <code>Config</code>.</p>
     */
    inline void SetDecodeConfig(const DecodeConfig& value) { m_decodeConfigHasBeenSet = true; m_decodeConfig = value; }

    /**
     * <p>Information about the decode <code>Config</code>.</p>
     */
    inline void SetDecodeConfig(DecodeConfig&& value) { m_decodeConfigHasBeenSet = true; m_decodeConfig = std::move(value); }

    /**
     * <p>Information about the decode <code>Config</code>.</p>
     */
    inline AntennaDownlinkDemodDecodeConfig& WithDecodeConfig(const DecodeConfig& value) { SetDecodeConfig(value); return *this;}

    /**
     * <p>Information about the decode <code>Config</code>.</p>
     */
    inline AntennaDownlinkDemodDecodeConfig& WithDecodeConfig(DecodeConfig&& value) { SetDecodeConfig(std::move(value)); return *this;}


    /**
     * <p>Information about the demodulation <code>Config</code>.</p>
     */
    inline const DemodulationConfig& GetDemodulationConfig() const{ return m_demodulationConfig; }

    /**
     * <p>Information about the demodulation <code>Config</code>.</p>
     */
    inline bool DemodulationConfigHasBeenSet() const { return m_demodulationConfigHasBeenSet; }

    /**
     * <p>Information about the demodulation <code>Config</code>.</p>
     */
    inline void SetDemodulationConfig(const DemodulationConfig& value) { m_demodulationConfigHasBeenSet = true; m_demodulationConfig = value; }

    /**
     * <p>Information about the demodulation <code>Config</code>.</p>
     */
    inline void SetDemodulationConfig(DemodulationConfig&& value) { m_demodulationConfigHasBeenSet = true; m_demodulationConfig = std::move(value); }

    /**
     * <p>Information about the demodulation <code>Config</code>.</p>
     */
    inline AntennaDownlinkDemodDecodeConfig& WithDemodulationConfig(const DemodulationConfig& value) { SetDemodulationConfig(value); return *this;}

    /**
     * <p>Information about the demodulation <code>Config</code>.</p>
     */
    inline AntennaDownlinkDemodDecodeConfig& WithDemodulationConfig(DemodulationConfig&& value) { SetDemodulationConfig(std::move(value)); return *this;}


    /**
     * <p>Information about the spectral <code>Config</code>.</p>
     */
    inline const SpectrumConfig& GetSpectrumConfig() const{ return m_spectrumConfig; }

    /**
     * <p>Information about the spectral <code>Config</code>.</p>
     */
    inline bool SpectrumConfigHasBeenSet() const { return m_spectrumConfigHasBeenSet; }

    /**
     * <p>Information about the spectral <code>Config</code>.</p>
     */
    inline void SetSpectrumConfig(const SpectrumConfig& value) { m_spectrumConfigHasBeenSet = true; m_spectrumConfig = value; }

    /**
     * <p>Information about the spectral <code>Config</code>.</p>
     */
    inline void SetSpectrumConfig(SpectrumConfig&& value) { m_spectrumConfigHasBeenSet = true; m_spectrumConfig = std::move(value); }

    /**
     * <p>Information about the spectral <code>Config</code>.</p>
     */
    inline AntennaDownlinkDemodDecodeConfig& WithSpectrumConfig(const SpectrumConfig& value) { SetSpectrumConfig(value); return *this;}

    /**
     * <p>Information about the spectral <code>Config</code>.</p>
     */
    inline AntennaDownlinkDemodDecodeConfig& WithSpectrumConfig(SpectrumConfig&& value) { SetSpectrumConfig(std::move(value)); return *this;}

  private:

    DecodeConfig m_decodeConfig;
    bool m_decodeConfigHasBeenSet = false;

    DemodulationConfig m_demodulationConfig;
    bool m_demodulationConfigHasBeenSet = false;

    SpectrumConfig m_spectrumConfig;
    bool m_spectrumConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
