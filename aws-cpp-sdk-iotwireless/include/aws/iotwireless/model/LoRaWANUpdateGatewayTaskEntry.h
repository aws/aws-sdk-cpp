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
    AWS_IOTWIRELESS_API LoRaWANUpdateGatewayTaskEntry();
    AWS_IOTWIRELESS_API LoRaWANUpdateGatewayTaskEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANUpdateGatewayTaskEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version of the gateways that should receive the update.</p>
     */
    inline const LoRaWANGatewayVersion& GetCurrentVersion() const{ return m_currentVersion; }

    /**
     * <p>The version of the gateways that should receive the update.</p>
     */
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }

    /**
     * <p>The version of the gateways that should receive the update.</p>
     */
    inline void SetCurrentVersion(const LoRaWANGatewayVersion& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }

    /**
     * <p>The version of the gateways that should receive the update.</p>
     */
    inline void SetCurrentVersion(LoRaWANGatewayVersion&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }

    /**
     * <p>The version of the gateways that should receive the update.</p>
     */
    inline LoRaWANUpdateGatewayTaskEntry& WithCurrentVersion(const LoRaWANGatewayVersion& value) { SetCurrentVersion(value); return *this;}

    /**
     * <p>The version of the gateways that should receive the update.</p>
     */
    inline LoRaWANUpdateGatewayTaskEntry& WithCurrentVersion(LoRaWANGatewayVersion&& value) { SetCurrentVersion(std::move(value)); return *this;}


    /**
     * <p>The firmware version to update the gateway to.</p>
     */
    inline const LoRaWANGatewayVersion& GetUpdateVersion() const{ return m_updateVersion; }

    /**
     * <p>The firmware version to update the gateway to.</p>
     */
    inline bool UpdateVersionHasBeenSet() const { return m_updateVersionHasBeenSet; }

    /**
     * <p>The firmware version to update the gateway to.</p>
     */
    inline void SetUpdateVersion(const LoRaWANGatewayVersion& value) { m_updateVersionHasBeenSet = true; m_updateVersion = value; }

    /**
     * <p>The firmware version to update the gateway to.</p>
     */
    inline void SetUpdateVersion(LoRaWANGatewayVersion&& value) { m_updateVersionHasBeenSet = true; m_updateVersion = std::move(value); }

    /**
     * <p>The firmware version to update the gateway to.</p>
     */
    inline LoRaWANUpdateGatewayTaskEntry& WithUpdateVersion(const LoRaWANGatewayVersion& value) { SetUpdateVersion(value); return *this;}

    /**
     * <p>The firmware version to update the gateway to.</p>
     */
    inline LoRaWANUpdateGatewayTaskEntry& WithUpdateVersion(LoRaWANGatewayVersion&& value) { SetUpdateVersion(std::move(value)); return *this;}

  private:

    LoRaWANGatewayVersion m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    LoRaWANGatewayVersion m_updateVersion;
    bool m_updateVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
