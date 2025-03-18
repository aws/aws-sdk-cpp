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
    AWS_GROUNDSTATION_API AntennaDownlinkDemodDecodeConfig() = default;
    AWS_GROUNDSTATION_API AntennaDownlinkDemodDecodeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API AntennaDownlinkDemodDecodeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the decode <code>Config</code>.</p>
     */
    inline const DecodeConfig& GetDecodeConfig() const { return m_decodeConfig; }
    inline bool DecodeConfigHasBeenSet() const { return m_decodeConfigHasBeenSet; }
    template<typename DecodeConfigT = DecodeConfig>
    void SetDecodeConfig(DecodeConfigT&& value) { m_decodeConfigHasBeenSet = true; m_decodeConfig = std::forward<DecodeConfigT>(value); }
    template<typename DecodeConfigT = DecodeConfig>
    AntennaDownlinkDemodDecodeConfig& WithDecodeConfig(DecodeConfigT&& value) { SetDecodeConfig(std::forward<DecodeConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the demodulation <code>Config</code>.</p>
     */
    inline const DemodulationConfig& GetDemodulationConfig() const { return m_demodulationConfig; }
    inline bool DemodulationConfigHasBeenSet() const { return m_demodulationConfigHasBeenSet; }
    template<typename DemodulationConfigT = DemodulationConfig>
    void SetDemodulationConfig(DemodulationConfigT&& value) { m_demodulationConfigHasBeenSet = true; m_demodulationConfig = std::forward<DemodulationConfigT>(value); }
    template<typename DemodulationConfigT = DemodulationConfig>
    AntennaDownlinkDemodDecodeConfig& WithDemodulationConfig(DemodulationConfigT&& value) { SetDemodulationConfig(std::forward<DemodulationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the spectral <code>Config</code>.</p>
     */
    inline const SpectrumConfig& GetSpectrumConfig() const { return m_spectrumConfig; }
    inline bool SpectrumConfigHasBeenSet() const { return m_spectrumConfigHasBeenSet; }
    template<typename SpectrumConfigT = SpectrumConfig>
    void SetSpectrumConfig(SpectrumConfigT&& value) { m_spectrumConfigHasBeenSet = true; m_spectrumConfig = std::forward<SpectrumConfigT>(value); }
    template<typename SpectrumConfigT = SpectrumConfig>
    AntennaDownlinkDemodDecodeConfig& WithSpectrumConfig(SpectrumConfigT&& value) { SetSpectrumConfig(std::forward<SpectrumConfigT>(value)); return *this;}
    ///@}
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
