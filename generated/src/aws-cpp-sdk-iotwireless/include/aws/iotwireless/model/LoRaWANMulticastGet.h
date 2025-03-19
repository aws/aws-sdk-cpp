/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/SupportedRfRegion.h>
#include <aws/iotwireless/model/DlClass.h>
#include <aws/iotwireless/model/ParticipatingGatewaysMulticast.h>
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
   * <p>The LoRaWAN information that is to be returned from getting multicast group
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANMulticastGet">AWS
   * API Reference</a></p>
   */
  class LoRaWANMulticastGet
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANMulticastGet() = default;
    AWS_IOTWIRELESS_API LoRaWANMulticastGet(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANMulticastGet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline SupportedRfRegion GetRfRegion() const { return m_rfRegion; }
    inline bool RfRegionHasBeenSet() const { return m_rfRegionHasBeenSet; }
    inline void SetRfRegion(SupportedRfRegion value) { m_rfRegionHasBeenSet = true; m_rfRegion = value; }
    inline LoRaWANMulticastGet& WithRfRegion(SupportedRfRegion value) { SetRfRegion(value); return *this;}
    ///@}

    ///@{
    
    inline DlClass GetDlClass() const { return m_dlClass; }
    inline bool DlClassHasBeenSet() const { return m_dlClassHasBeenSet; }
    inline void SetDlClass(DlClass value) { m_dlClassHasBeenSet = true; m_dlClass = value; }
    inline LoRaWANMulticastGet& WithDlClass(DlClass value) { SetDlClass(value); return *this;}
    ///@}

    ///@{
    
    inline int GetNumberOfDevicesRequested() const { return m_numberOfDevicesRequested; }
    inline bool NumberOfDevicesRequestedHasBeenSet() const { return m_numberOfDevicesRequestedHasBeenSet; }
    inline void SetNumberOfDevicesRequested(int value) { m_numberOfDevicesRequestedHasBeenSet = true; m_numberOfDevicesRequested = value; }
    inline LoRaWANMulticastGet& WithNumberOfDevicesRequested(int value) { SetNumberOfDevicesRequested(value); return *this;}
    ///@}

    ///@{
    
    inline int GetNumberOfDevicesInGroup() const { return m_numberOfDevicesInGroup; }
    inline bool NumberOfDevicesInGroupHasBeenSet() const { return m_numberOfDevicesInGroupHasBeenSet; }
    inline void SetNumberOfDevicesInGroup(int value) { m_numberOfDevicesInGroupHasBeenSet = true; m_numberOfDevicesInGroup = value; }
    inline LoRaWANMulticastGet& WithNumberOfDevicesInGroup(int value) { SetNumberOfDevicesInGroup(value); return *this;}
    ///@}

    ///@{
    
    inline const ParticipatingGatewaysMulticast& GetParticipatingGateways() const { return m_participatingGateways; }
    inline bool ParticipatingGatewaysHasBeenSet() const { return m_participatingGatewaysHasBeenSet; }
    template<typename ParticipatingGatewaysT = ParticipatingGatewaysMulticast>
    void SetParticipatingGateways(ParticipatingGatewaysT&& value) { m_participatingGatewaysHasBeenSet = true; m_participatingGateways = std::forward<ParticipatingGatewaysT>(value); }
    template<typename ParticipatingGatewaysT = ParticipatingGatewaysMulticast>
    LoRaWANMulticastGet& WithParticipatingGateways(ParticipatingGatewaysT&& value) { SetParticipatingGateways(std::forward<ParticipatingGatewaysT>(value)); return *this;}
    ///@}
  private:

    SupportedRfRegion m_rfRegion{SupportedRfRegion::NOT_SET};
    bool m_rfRegionHasBeenSet = false;

    DlClass m_dlClass{DlClass::NOT_SET};
    bool m_dlClassHasBeenSet = false;

    int m_numberOfDevicesRequested{0};
    bool m_numberOfDevicesRequestedHasBeenSet = false;

    int m_numberOfDevicesInGroup{0};
    bool m_numberOfDevicesInGroupHasBeenSet = false;

    ParticipatingGatewaysMulticast m_participatingGateways;
    bool m_participatingGatewaysHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
