/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/WirelessDeviceType.h>
#include <aws/iotwireless/model/LoRaWANListDevice.h>
#include <aws/iotwireless/model/SidewalkListDevice.h>
#include <aws/iotwireless/model/FuotaDeviceStatus.h>
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
   * <p>Information about a wireless device's operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/WirelessDeviceStatistics">AWS
   * API Reference</a></p>
   */
  class WirelessDeviceStatistics
  {
  public:
    AWS_IOTWIRELESS_API WirelessDeviceStatistics() = default;
    AWS_IOTWIRELESS_API WirelessDeviceStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API WirelessDeviceStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    WirelessDeviceStatistics& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the wireless device reporting the data.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    WirelessDeviceStatistics& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The wireless device type.</p>
     */
    inline WirelessDeviceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(WirelessDeviceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline WirelessDeviceStatistics& WithType(WirelessDeviceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    WirelessDeviceStatistics& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the destination to which the device is assigned.</p>
     */
    inline const Aws::String& GetDestinationName() const { return m_destinationName; }
    inline bool DestinationNameHasBeenSet() const { return m_destinationNameHasBeenSet; }
    template<typename DestinationNameT = Aws::String>
    void SetDestinationName(DestinationNameT&& value) { m_destinationNameHasBeenSet = true; m_destinationName = std::forward<DestinationNameT>(value); }
    template<typename DestinationNameT = Aws::String>
    WirelessDeviceStatistics& WithDestinationName(DestinationNameT&& value) { SetDestinationName(std::forward<DestinationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the most recent uplink was received.</p> 
     * <p>Theis value is only valid for 3 months.</p> 
     */
    inline const Aws::String& GetLastUplinkReceivedAt() const { return m_lastUplinkReceivedAt; }
    inline bool LastUplinkReceivedAtHasBeenSet() const { return m_lastUplinkReceivedAtHasBeenSet; }
    template<typename LastUplinkReceivedAtT = Aws::String>
    void SetLastUplinkReceivedAt(LastUplinkReceivedAtT&& value) { m_lastUplinkReceivedAtHasBeenSet = true; m_lastUplinkReceivedAt = std::forward<LastUplinkReceivedAtT>(value); }
    template<typename LastUplinkReceivedAtT = Aws::String>
    WirelessDeviceStatistics& WithLastUplinkReceivedAt(LastUplinkReceivedAtT&& value) { SetLastUplinkReceivedAt(std::forward<LastUplinkReceivedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>LoRaWAN device info.</p>
     */
    inline const LoRaWANListDevice& GetLoRaWAN() const { return m_loRaWAN; }
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }
    template<typename LoRaWANT = LoRaWANListDevice>
    void SetLoRaWAN(LoRaWANT&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::forward<LoRaWANT>(value); }
    template<typename LoRaWANT = LoRaWANListDevice>
    WirelessDeviceStatistics& WithLoRaWAN(LoRaWANT&& value) { SetLoRaWAN(std::forward<LoRaWANT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline const SidewalkListDevice& GetSidewalk() const { return m_sidewalk; }
    inline bool SidewalkHasBeenSet() const { return m_sidewalkHasBeenSet; }
    template<typename SidewalkT = SidewalkListDevice>
    void SetSidewalk(SidewalkT&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::forward<SidewalkT>(value); }
    template<typename SidewalkT = SidewalkListDevice>
    WirelessDeviceStatistics& WithSidewalk(SidewalkT&& value) { SetSidewalk(std::forward<SidewalkT>(value)); return *this;}
    ///@}

    ///@{
    
    inline FuotaDeviceStatus GetFuotaDeviceStatus() const { return m_fuotaDeviceStatus; }
    inline bool FuotaDeviceStatusHasBeenSet() const { return m_fuotaDeviceStatusHasBeenSet; }
    inline void SetFuotaDeviceStatus(FuotaDeviceStatus value) { m_fuotaDeviceStatusHasBeenSet = true; m_fuotaDeviceStatus = value; }
    inline WirelessDeviceStatistics& WithFuotaDeviceStatus(FuotaDeviceStatus value) { SetFuotaDeviceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the wireless device in the multicast group.</p>
     */
    inline const Aws::String& GetMulticastDeviceStatus() const { return m_multicastDeviceStatus; }
    inline bool MulticastDeviceStatusHasBeenSet() const { return m_multicastDeviceStatusHasBeenSet; }
    template<typename MulticastDeviceStatusT = Aws::String>
    void SetMulticastDeviceStatus(MulticastDeviceStatusT&& value) { m_multicastDeviceStatusHasBeenSet = true; m_multicastDeviceStatus = std::forward<MulticastDeviceStatusT>(value); }
    template<typename MulticastDeviceStatusT = Aws::String>
    WirelessDeviceStatistics& WithMulticastDeviceStatus(MulticastDeviceStatusT&& value) { SetMulticastDeviceStatus(std::forward<MulticastDeviceStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline int GetMcGroupId() const { return m_mcGroupId; }
    inline bool McGroupIdHasBeenSet() const { return m_mcGroupIdHasBeenSet; }
    inline void SetMcGroupId(int value) { m_mcGroupIdHasBeenSet = true; m_mcGroupId = value; }
    inline WirelessDeviceStatistics& WithMcGroupId(int value) { SetMcGroupId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    WirelessDeviceType m_type{WirelessDeviceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_destinationName;
    bool m_destinationNameHasBeenSet = false;

    Aws::String m_lastUplinkReceivedAt;
    bool m_lastUplinkReceivedAtHasBeenSet = false;

    LoRaWANListDevice m_loRaWAN;
    bool m_loRaWANHasBeenSet = false;

    SidewalkListDevice m_sidewalk;
    bool m_sidewalkHasBeenSet = false;

    FuotaDeviceStatus m_fuotaDeviceStatus{FuotaDeviceStatus::NOT_SET};
    bool m_fuotaDeviceStatusHasBeenSet = false;

    Aws::String m_multicastDeviceStatus;
    bool m_multicastDeviceStatusHasBeenSet = false;

    int m_mcGroupId{0};
    bool m_mcGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
