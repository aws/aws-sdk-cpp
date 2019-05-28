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
   * <p>Information about how AWS Ground Station should configure an
         antenna
   * for downlink during a contact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/AntennaDownlinkConfig">AWS
   * API Reference</a></p>
   */
  class AWS_GROUNDSTATION_API AntennaDownlinkConfig
  {
  public:
    AntennaDownlinkConfig();
    AntennaDownlinkConfig(Aws::Utils::Json::JsonView jsonValue);
    AntennaDownlinkConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_spectrumConfigHasBeenSet;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
