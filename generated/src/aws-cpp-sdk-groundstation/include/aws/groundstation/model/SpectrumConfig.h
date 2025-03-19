/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/FrequencyBandwidth.h>
#include <aws/groundstation/model/Frequency.h>
#include <aws/groundstation/model/Polarization.h>
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
   * <p>Object that describes a spectral <code>Config</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/SpectrumConfig">AWS
   * API Reference</a></p>
   */
  class SpectrumConfig
  {
  public:
    AWS_GROUNDSTATION_API SpectrumConfig() = default;
    AWS_GROUNDSTATION_API SpectrumConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API SpectrumConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Bandwidth of a spectral <code>Config</code>. AWS Ground Station currently has
     * the following bandwidth limitations:</p> <ul> <li> <p>For
     * <code>AntennaDownlinkDemodDecodeconfig</code>, valid values are between 125 kHz
     * to 650 MHz.</p> </li> <li> <p>For <code>AntennaDownlinkconfig</code> valid
     * values are between 10 kHz to 54 MHz.</p> </li> <li> <p>For
     * <code>AntennaUplinkConfig</code>, valid values are between 10 kHz to 54 MHz.</p>
     * </li> </ul>
     */
    inline const FrequencyBandwidth& GetBandwidth() const { return m_bandwidth; }
    inline bool BandwidthHasBeenSet() const { return m_bandwidthHasBeenSet; }
    template<typename BandwidthT = FrequencyBandwidth>
    void SetBandwidth(BandwidthT&& value) { m_bandwidthHasBeenSet = true; m_bandwidth = std::forward<BandwidthT>(value); }
    template<typename BandwidthT = FrequencyBandwidth>
    SpectrumConfig& WithBandwidth(BandwidthT&& value) { SetBandwidth(std::forward<BandwidthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Center frequency of a spectral <code>Config</code>. Valid values are between
     * 2200 to 2300 MHz and 7750 to 8400 MHz for downlink and 2025 to 2120 MHz for
     * uplink.</p>
     */
    inline const Frequency& GetCenterFrequency() const { return m_centerFrequency; }
    inline bool CenterFrequencyHasBeenSet() const { return m_centerFrequencyHasBeenSet; }
    template<typename CenterFrequencyT = Frequency>
    void SetCenterFrequency(CenterFrequencyT&& value) { m_centerFrequencyHasBeenSet = true; m_centerFrequency = std::forward<CenterFrequencyT>(value); }
    template<typename CenterFrequencyT = Frequency>
    SpectrumConfig& WithCenterFrequency(CenterFrequencyT&& value) { SetCenterFrequency(std::forward<CenterFrequencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Polarization of a spectral <code>Config</code>. Capturing both
     * <code>"RIGHT_HAND"</code> and <code>"LEFT_HAND"</code> polarization requires two
     * separate configs.</p>
     */
    inline Polarization GetPolarization() const { return m_polarization; }
    inline bool PolarizationHasBeenSet() const { return m_polarizationHasBeenSet; }
    inline void SetPolarization(Polarization value) { m_polarizationHasBeenSet = true; m_polarization = value; }
    inline SpectrumConfig& WithPolarization(Polarization value) { SetPolarization(value); return *this;}
    ///@}
  private:

    FrequencyBandwidth m_bandwidth;
    bool m_bandwidthHasBeenSet = false;

    Frequency m_centerFrequency;
    bool m_centerFrequencyHasBeenSet = false;

    Polarization m_polarization{Polarization::NOT_SET};
    bool m_polarizationHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
