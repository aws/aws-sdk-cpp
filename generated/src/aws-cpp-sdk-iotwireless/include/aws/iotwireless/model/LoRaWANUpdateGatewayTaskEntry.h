/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/LoRaWANGatewayVersion.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>LoRaWANUpdateGatewayTaskEntry object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANUpdateGatewayTaskEntry">AWS
   * API Reference</a></p>
   */
  class LoRaWANUpdateGatewayTaskEntry
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANUpdateGatewayTaskEntry() = default;
    AWS_IOTWIRELESS_API LoRaWANUpdateGatewayTaskEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANUpdateGatewayTaskEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the gateways that should receive the update.</p>
     */
    inline const LoRaWANGatewayVersion& GetCurrentVersion() const { return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    template<typename CurrentVersionT = LoRaWANGatewayVersion>
    void SetCurrentVersion(CurrentVersionT&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::forward<CurrentVersionT>(value); }
    template<typename CurrentVersionT = LoRaWANGatewayVersion>
    LoRaWANUpdateGatewayTaskEntry& WithCurrentVersion(CurrentVersionT&& value) { SetCurrentVersion(std::forward<CurrentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The firmware version to update the gateway to.</p>
     */
    inline const LoRaWANGatewayVersion& GetUpdateVersion() const { return m_updateVersion; }
    inline bool UpdateVersionHasBeenSet() const { return m_updateVersionHasBeenSet; }
    template<typename UpdateVersionT = LoRaWANGatewayVersion>
    void SetUpdateVersion(UpdateVersionT&& value) { m_updateVersionHasBeenSet = true; m_updateVersion = std::forward<UpdateVersionT>(value); }
    template<typename UpdateVersionT = LoRaWANGatewayVersion>
    LoRaWANUpdateGatewayTaskEntry& WithUpdateVersion(UpdateVersionT&& value) { SetUpdateVersion(std::forward<UpdateVersionT>(value)); return *this;}
    ///@}
  private:

    LoRaWANGatewayVersion m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    LoRaWANGatewayVersion m_updateVersion;
    bool m_updateVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
