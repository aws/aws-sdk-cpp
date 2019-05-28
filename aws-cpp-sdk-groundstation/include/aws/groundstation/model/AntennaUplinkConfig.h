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
  class AWS_GROUNDSTATION_API AntennaUplinkConfig
  {
  public:
    AntennaUplinkConfig();
    AntennaUplinkConfig(Aws::Utils::Json::JsonView jsonValue);
    AntennaUplinkConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the uplink spectral <code>Config</code>.</p>
     */
    inline const UplinkSpectrumConfig& GetSpectrumConfig() const{ return m_spectrumConfig; }

    /**
     * <p>Information about the uplink spectral <code>Config</code>.</p>
     */
    inline bool SpectrumConfigHasBeenSet() const { return m_spectrumConfigHasBeenSet; }

    /**
     * <p>Information about the uplink spectral <code>Config</code>.</p>
     */
    inline void SetSpectrumConfig(const UplinkSpectrumConfig& value) { m_spectrumConfigHasBeenSet = true; m_spectrumConfig = value; }

    /**
     * <p>Information about the uplink spectral <code>Config</code>.</p>
     */
    inline void SetSpectrumConfig(UplinkSpectrumConfig&& value) { m_spectrumConfigHasBeenSet = true; m_spectrumConfig = std::move(value); }

    /**
     * <p>Information about the uplink spectral <code>Config</code>.</p>
     */
    inline AntennaUplinkConfig& WithSpectrumConfig(const UplinkSpectrumConfig& value) { SetSpectrumConfig(value); return *this;}

    /**
     * <p>Information about the uplink spectral <code>Config</code>.</p>
     */
    inline AntennaUplinkConfig& WithSpectrumConfig(UplinkSpectrumConfig&& value) { SetSpectrumConfig(std::move(value)); return *this;}


    /**
     * <p>EIRP of the target.</p>
     */
    inline const Eirp& GetTargetEirp() const{ return m_targetEirp; }

    /**
     * <p>EIRP of the target.</p>
     */
    inline bool TargetEirpHasBeenSet() const { return m_targetEirpHasBeenSet; }

    /**
     * <p>EIRP of the target.</p>
     */
    inline void SetTargetEirp(const Eirp& value) { m_targetEirpHasBeenSet = true; m_targetEirp = value; }

    /**
     * <p>EIRP of the target.</p>
     */
    inline void SetTargetEirp(Eirp&& value) { m_targetEirpHasBeenSet = true; m_targetEirp = std::move(value); }

    /**
     * <p>EIRP of the target.</p>
     */
    inline AntennaUplinkConfig& WithTargetEirp(const Eirp& value) { SetTargetEirp(value); return *this;}

    /**
     * <p>EIRP of the target.</p>
     */
    inline AntennaUplinkConfig& WithTargetEirp(Eirp&& value) { SetTargetEirp(std::move(value)); return *this;}

  private:

    UplinkSpectrumConfig m_spectrumConfig;
    bool m_spectrumConfigHasBeenSet;

    Eirp m_targetEirp;
    bool m_targetEirpHasBeenSet;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
