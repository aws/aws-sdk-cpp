/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/ParticipatingGateways.h>
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
   * <p>LoRaWAN router info.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANSendDataToDevice">AWS
   * API Reference</a></p>
   */
  class LoRaWANSendDataToDevice
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANSendDataToDevice() = default;
    AWS_IOTWIRELESS_API LoRaWANSendDataToDevice(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANSendDataToDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline int GetFPort() const { return m_fPort; }
    inline bool FPortHasBeenSet() const { return m_fPortHasBeenSet; }
    inline void SetFPort(int value) { m_fPortHasBeenSet = true; m_fPort = value; }
    inline LoRaWANSendDataToDevice& WithFPort(int value) { SetFPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Choose the gateways that you want to use for the downlink data traffic when
     * the wireless device is running in class B or class C mode.</p>
     */
    inline const ParticipatingGateways& GetParticipatingGateways() const { return m_participatingGateways; }
    inline bool ParticipatingGatewaysHasBeenSet() const { return m_participatingGatewaysHasBeenSet; }
    template<typename ParticipatingGatewaysT = ParticipatingGateways>
    void SetParticipatingGateways(ParticipatingGatewaysT&& value) { m_participatingGatewaysHasBeenSet = true; m_participatingGateways = std::forward<ParticipatingGatewaysT>(value); }
    template<typename ParticipatingGatewaysT = ParticipatingGateways>
    LoRaWANSendDataToDevice& WithParticipatingGateways(ParticipatingGatewaysT&& value) { SetParticipatingGateways(std::forward<ParticipatingGatewaysT>(value)); return *this;}
    ///@}
  private:

    int m_fPort{0};
    bool m_fPortHasBeenSet = false;

    ParticipatingGateways m_participatingGateways;
    bool m_participatingGatewaysHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
