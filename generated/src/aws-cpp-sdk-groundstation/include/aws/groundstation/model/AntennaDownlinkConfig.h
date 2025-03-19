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
    AWS_GROUNDSTATION_API AntennaDownlinkConfig() = default;
    AWS_GROUNDSTATION_API AntennaDownlinkConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API AntennaDownlinkConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Object that describes a spectral <code>Config</code>.</p>
     */
    inline const SpectrumConfig& GetSpectrumConfig() const { return m_spectrumConfig; }
    inline bool SpectrumConfigHasBeenSet() const { return m_spectrumConfigHasBeenSet; }
    template<typename SpectrumConfigT = SpectrumConfig>
    void SetSpectrumConfig(SpectrumConfigT&& value) { m_spectrumConfigHasBeenSet = true; m_spectrumConfig = std::forward<SpectrumConfigT>(value); }
    template<typename SpectrumConfigT = SpectrumConfig>
    AntennaDownlinkConfig& WithSpectrumConfig(SpectrumConfigT&& value) { SetSpectrumConfig(std::forward<SpectrumConfigT>(value)); return *this;}
    ///@}
  private:

    SpectrumConfig m_spectrumConfig;
    bool m_spectrumConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
