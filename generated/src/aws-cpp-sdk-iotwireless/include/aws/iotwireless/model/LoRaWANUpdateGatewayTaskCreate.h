/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>LoRaWANUpdateGatewayTaskCreate object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANUpdateGatewayTaskCreate">AWS
   * API Reference</a></p>
   */
  class LoRaWANUpdateGatewayTaskCreate
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANUpdateGatewayTaskCreate();
    AWS_IOTWIRELESS_API LoRaWANUpdateGatewayTaskCreate(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANUpdateGatewayTaskCreate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The signature used to verify the update firmware.</p>
     */
    inline const Aws::String& GetUpdateSignature() const{ return m_updateSignature; }
    inline bool UpdateSignatureHasBeenSet() const { return m_updateSignatureHasBeenSet; }
    inline void SetUpdateSignature(const Aws::String& value) { m_updateSignatureHasBeenSet = true; m_updateSignature = value; }
    inline void SetUpdateSignature(Aws::String&& value) { m_updateSignatureHasBeenSet = true; m_updateSignature = std::move(value); }
    inline void SetUpdateSignature(const char* value) { m_updateSignatureHasBeenSet = true; m_updateSignature.assign(value); }
    inline LoRaWANUpdateGatewayTaskCreate& WithUpdateSignature(const Aws::String& value) { SetUpdateSignature(value); return *this;}
    inline LoRaWANUpdateGatewayTaskCreate& WithUpdateSignature(Aws::String&& value) { SetUpdateSignature(std::move(value)); return *this;}
    inline LoRaWANUpdateGatewayTaskCreate& WithUpdateSignature(const char* value) { SetUpdateSignature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CRC of the signature private key to check.</p>
     */
    inline long long GetSigKeyCrc() const{ return m_sigKeyCrc; }
    inline bool SigKeyCrcHasBeenSet() const { return m_sigKeyCrcHasBeenSet; }
    inline void SetSigKeyCrc(long long value) { m_sigKeyCrcHasBeenSet = true; m_sigKeyCrc = value; }
    inline LoRaWANUpdateGatewayTaskCreate& WithSigKeyCrc(long long value) { SetSigKeyCrc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the gateways that should receive the update.</p>
     */
    inline const LoRaWANGatewayVersion& GetCurrentVersion() const{ return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    inline void SetCurrentVersion(const LoRaWANGatewayVersion& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }
    inline void SetCurrentVersion(LoRaWANGatewayVersion&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }
    inline LoRaWANUpdateGatewayTaskCreate& WithCurrentVersion(const LoRaWANGatewayVersion& value) { SetCurrentVersion(value); return *this;}
    inline LoRaWANUpdateGatewayTaskCreate& WithCurrentVersion(LoRaWANGatewayVersion&& value) { SetCurrentVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The firmware version to update the gateway to.</p>
     */
    inline const LoRaWANGatewayVersion& GetUpdateVersion() const{ return m_updateVersion; }
    inline bool UpdateVersionHasBeenSet() const { return m_updateVersionHasBeenSet; }
    inline void SetUpdateVersion(const LoRaWANGatewayVersion& value) { m_updateVersionHasBeenSet = true; m_updateVersion = value; }
    inline void SetUpdateVersion(LoRaWANGatewayVersion&& value) { m_updateVersionHasBeenSet = true; m_updateVersion = std::move(value); }
    inline LoRaWANUpdateGatewayTaskCreate& WithUpdateVersion(const LoRaWANGatewayVersion& value) { SetUpdateVersion(value); return *this;}
    inline LoRaWANUpdateGatewayTaskCreate& WithUpdateVersion(LoRaWANGatewayVersion&& value) { SetUpdateVersion(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_updateSignature;
    bool m_updateSignatureHasBeenSet = false;

    long long m_sigKeyCrc;
    bool m_sigKeyCrcHasBeenSet = false;

    LoRaWANGatewayVersion m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    LoRaWANGatewayVersion m_updateVersion;
    bool m_updateVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
