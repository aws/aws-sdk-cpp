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
    AWS_IOTWIRELESS_API LoRaWANUpdateGatewayTaskCreate() = default;
    AWS_IOTWIRELESS_API LoRaWANUpdateGatewayTaskCreate(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANUpdateGatewayTaskCreate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The signature used to verify the update firmware.</p>
     */
    inline const Aws::String& GetUpdateSignature() const { return m_updateSignature; }
    inline bool UpdateSignatureHasBeenSet() const { return m_updateSignatureHasBeenSet; }
    template<typename UpdateSignatureT = Aws::String>
    void SetUpdateSignature(UpdateSignatureT&& value) { m_updateSignatureHasBeenSet = true; m_updateSignature = std::forward<UpdateSignatureT>(value); }
    template<typename UpdateSignatureT = Aws::String>
    LoRaWANUpdateGatewayTaskCreate& WithUpdateSignature(UpdateSignatureT&& value) { SetUpdateSignature(std::forward<UpdateSignatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CRC of the signature private key to check.</p>
     */
    inline long long GetSigKeyCrc() const { return m_sigKeyCrc; }
    inline bool SigKeyCrcHasBeenSet() const { return m_sigKeyCrcHasBeenSet; }
    inline void SetSigKeyCrc(long long value) { m_sigKeyCrcHasBeenSet = true; m_sigKeyCrc = value; }
    inline LoRaWANUpdateGatewayTaskCreate& WithSigKeyCrc(long long value) { SetSigKeyCrc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the gateways that should receive the update.</p>
     */
    inline const LoRaWANGatewayVersion& GetCurrentVersion() const { return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    template<typename CurrentVersionT = LoRaWANGatewayVersion>
    void SetCurrentVersion(CurrentVersionT&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::forward<CurrentVersionT>(value); }
    template<typename CurrentVersionT = LoRaWANGatewayVersion>
    LoRaWANUpdateGatewayTaskCreate& WithCurrentVersion(CurrentVersionT&& value) { SetCurrentVersion(std::forward<CurrentVersionT>(value)); return *this;}
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
    LoRaWANUpdateGatewayTaskCreate& WithUpdateVersion(UpdateVersionT&& value) { SetUpdateVersion(std::forward<UpdateVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_updateSignature;
    bool m_updateSignatureHasBeenSet = false;

    long long m_sigKeyCrc{0};
    bool m_sigKeyCrcHasBeenSet = false;

    LoRaWANGatewayVersion m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    LoRaWANGatewayVersion m_updateVersion;
    bool m_updateVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
