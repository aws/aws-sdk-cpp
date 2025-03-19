/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Information about an uplink echo <code>Config</code>.</p> <p>Parameters from
   * the <code>AntennaUplinkConfig</code>, corresponding to the specified
   * <code>AntennaUplinkConfigArn</code>, are used when this
   * <code>UplinkEchoConfig</code> is used in a contact.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UplinkEchoConfig">AWS
   * API Reference</a></p>
   */
  class UplinkEchoConfig
  {
  public:
    AWS_GROUNDSTATION_API UplinkEchoConfig() = default;
    AWS_GROUNDSTATION_API UplinkEchoConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API UplinkEchoConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN of an uplink <code>Config</code>.</p>
     */
    inline const Aws::String& GetAntennaUplinkConfigArn() const { return m_antennaUplinkConfigArn; }
    inline bool AntennaUplinkConfigArnHasBeenSet() const { return m_antennaUplinkConfigArnHasBeenSet; }
    template<typename AntennaUplinkConfigArnT = Aws::String>
    void SetAntennaUplinkConfigArn(AntennaUplinkConfigArnT&& value) { m_antennaUplinkConfigArnHasBeenSet = true; m_antennaUplinkConfigArn = std::forward<AntennaUplinkConfigArnT>(value); }
    template<typename AntennaUplinkConfigArnT = Aws::String>
    UplinkEchoConfig& WithAntennaUplinkConfigArn(AntennaUplinkConfigArnT&& value) { SetAntennaUplinkConfigArn(std::forward<AntennaUplinkConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not an uplink <code>Config</code> is enabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline UplinkEchoConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_antennaUplinkConfigArn;
    bool m_antennaUplinkConfigArnHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
