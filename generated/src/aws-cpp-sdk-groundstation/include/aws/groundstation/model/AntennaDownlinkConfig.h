/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
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
   * <p>Information about how AWS Ground Station should configure an antenna for
   * downlink during a contact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/AntennaDownlinkConfig">AWS
   * API Reference</a></p>
   */
  class AntennaDownlinkConfig
  {
  public:
    AWS_GROUNDSTATION_API AntennaDownlinkConfig();
    AWS_GROUNDSTATION_API AntennaDownlinkConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API AntennaDownlinkConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Object that describes a spectral <code>Config</code>.</p>
     */
    inline const SpectrumConfig& GetSpectrumConfig() const{ return m_spectrumConfig; }

    /**
     * <p>Object that describes a spectral <code>Config</code>.</p>
     */
    inline bool SpectrumConfigHasBeenSet() const { return m_spectrumConfigHasBeenSet; }

    /**
     * <p>Object that describes a spectral <code>Config</code>.</p>
     */
    inline void SetSpectrumConfig(const SpectrumConfig& value) { m_spectrumConfigHasBeenSet = true; m_spectrumConfig = value; }

    /**
     * <p>Object that describes a spectral <code>Config</code>.</p>
     */
    inline void SetSpectrumConfig(SpectrumConfig&& value) { m_spectrumConfigHasBeenSet = true; m_spectrumConfig = std::move(value); }

    /**
     * <p>Object that describes a spectral <code>Config</code>.</p>
     */
    inline AntennaDownlinkConfig& WithSpectrumConfig(const SpectrumConfig& value) { SetSpectrumConfig(value); return *this;}

    /**
     * <p>Object that describes a spectral <code>Config</code>.</p>
     */
    inline AntennaDownlinkConfig& WithSpectrumConfig(SpectrumConfig&& value) { SetSpectrumConfig(std::move(value)); return *this;}

  private:

    SpectrumConfig m_spectrumConfig;
    bool m_spectrumConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
