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
   * <p>LoRaWANGatewayCurrentVersion object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANGatewayCurrentVersion">AWS
   * API Reference</a></p>
   */
  class AWS_IOTWIRELESS_API LoRaWANGatewayCurrentVersion
  {
  public:
    LoRaWANGatewayCurrentVersion();
    LoRaWANGatewayCurrentVersion(Aws::Utils::Json::JsonView jsonValue);
    LoRaWANGatewayCurrentVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline LoRaWANGatewayCurrentVersion& WithCurrentVersion(const LoRaWANGatewayVersion& value) { SetCurrentVersion(value); return *this;}

    /**
     * <p>The version of the gateways that should receive the update.</p>
     */
    inline LoRaWANGatewayCurrentVersion& WithCurrentVersion(LoRaWANGatewayVersion&& value) { SetCurrentVersion(std::move(value)); return *this;}

  private:

    LoRaWANGatewayVersion m_currentVersion;
    bool m_currentVersionHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
