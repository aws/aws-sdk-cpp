/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
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
   * <p>Information about the uplink spectral <code>Config</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UplinkSpectrumConfig">AWS
   * API Reference</a></p>
   */
  class UplinkSpectrumConfig
  {
  public:
    AWS_GROUNDSTATION_API UplinkSpectrumConfig() = default;
    AWS_GROUNDSTATION_API UplinkSpectrumConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API UplinkSpectrumConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Center frequency of an uplink spectral <code>Config</code>. Valid values are
     * between 2025 to 2120 MHz.</p>
     */
    inline const Frequency& GetCenterFrequency() const { return m_centerFrequency; }
    inline bool CenterFrequencyHasBeenSet() const { return m_centerFrequencyHasBeenSet; }
    template<typename CenterFrequencyT = Frequency>
    void SetCenterFrequency(CenterFrequencyT&& value) { m_centerFrequencyHasBeenSet = true; m_centerFrequency = std::forward<CenterFrequencyT>(value); }
    template<typename CenterFrequencyT = Frequency>
    UplinkSpectrumConfig& WithCenterFrequency(CenterFrequencyT&& value) { SetCenterFrequency(std::forward<CenterFrequencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Polarization of an uplink spectral <code>Config</code>. Capturing both
     * <code>"RIGHT_HAND"</code> and <code>"LEFT_HAND"</code> polarization requires two
     * separate configs.</p>
     */
    inline Polarization GetPolarization() const { return m_polarization; }
    inline bool PolarizationHasBeenSet() const { return m_polarizationHasBeenSet; }
    inline void SetPolarization(Polarization value) { m_polarizationHasBeenSet = true; m_polarization = value; }
    inline UplinkSpectrumConfig& WithPolarization(Polarization value) { SetPolarization(value); return *this;}
    ///@}
  private:

    Frequency m_centerFrequency;
    bool m_centerFrequencyHasBeenSet = false;

    Polarization m_polarization{Polarization::NOT_SET};
    bool m_polarizationHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
