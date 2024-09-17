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
    AWS_IOTWIRELESS_API WirelessDeviceStatistics();
    AWS_IOTWIRELESS_API WirelessDeviceStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API WirelessDeviceStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline WirelessDeviceStatistics& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline WirelessDeviceStatistics& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline WirelessDeviceStatistics& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the wireless device reporting the data.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline WirelessDeviceStatistics& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline WirelessDeviceStatistics& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline WirelessDeviceStatistics& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The wireless device type.</p>
     */
    inline const WirelessDeviceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const WirelessDeviceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(WirelessDeviceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline WirelessDeviceStatistics& WithType(const WirelessDeviceType& value) { SetType(value); return *this;}
    inline WirelessDeviceStatistics& WithType(WirelessDeviceType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline WirelessDeviceStatistics& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline WirelessDeviceStatistics& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline WirelessDeviceStatistics& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the destination to which the device is assigned.</p>
     */
    inline const Aws::String& GetDestinationName() const{ return m_destinationName; }
    inline bool DestinationNameHasBeenSet() const { return m_destinationNameHasBeenSet; }
    inline void SetDestinationName(const Aws::String& value) { m_destinationNameHasBeenSet = true; m_destinationName = value; }
    inline void SetDestinationName(Aws::String&& value) { m_destinationNameHasBeenSet = true; m_destinationName = std::move(value); }
    inline void SetDestinationName(const char* value) { m_destinationNameHasBeenSet = true; m_destinationName.assign(value); }
    inline WirelessDeviceStatistics& WithDestinationName(const Aws::String& value) { SetDestinationName(value); return *this;}
    inline WirelessDeviceStatistics& WithDestinationName(Aws::String&& value) { SetDestinationName(std::move(value)); return *this;}
    inline WirelessDeviceStatistics& WithDestinationName(const char* value) { SetDestinationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the most recent uplink was received.</p> 
     * <p>Theis value is only valid for 3 months.</p> 
     */
    inline const Aws::String& GetLastUplinkReceivedAt() const{ return m_lastUplinkReceivedAt; }
    inline bool LastUplinkReceivedAtHasBeenSet() const { return m_lastUplinkReceivedAtHasBeenSet; }
    inline void SetLastUplinkReceivedAt(const Aws::String& value) { m_lastUplinkReceivedAtHasBeenSet = true; m_lastUplinkReceivedAt = value; }
    inline void SetLastUplinkReceivedAt(Aws::String&& value) { m_lastUplinkReceivedAtHasBeenSet = true; m_lastUplinkReceivedAt = std::move(value); }
    inline void SetLastUplinkReceivedAt(const char* value) { m_lastUplinkReceivedAtHasBeenSet = true; m_lastUplinkReceivedAt.assign(value); }
    inline WirelessDeviceStatistics& WithLastUplinkReceivedAt(const Aws::String& value) { SetLastUplinkReceivedAt(value); return *this;}
    inline WirelessDeviceStatistics& WithLastUplinkReceivedAt(Aws::String&& value) { SetLastUplinkReceivedAt(std::move(value)); return *this;}
    inline WirelessDeviceStatistics& WithLastUplinkReceivedAt(const char* value) { SetLastUplinkReceivedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>LoRaWAN device info.</p>
     */
    inline const LoRaWANListDevice& GetLoRaWAN() const{ return m_loRaWAN; }
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }
    inline void SetLoRaWAN(const LoRaWANListDevice& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = value; }
    inline void SetLoRaWAN(LoRaWANListDevice&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::move(value); }
    inline WirelessDeviceStatistics& WithLoRaWAN(const LoRaWANListDevice& value) { SetLoRaWAN(value); return *this;}
    inline WirelessDeviceStatistics& WithLoRaWAN(LoRaWANListDevice&& value) { SetLoRaWAN(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline const SidewalkListDevice& GetSidewalk() const{ return m_sidewalk; }
    inline bool SidewalkHasBeenSet() const { return m_sidewalkHasBeenSet; }
    inline void SetSidewalk(const SidewalkListDevice& value) { m_sidewalkHasBeenSet = true; m_sidewalk = value; }
    inline void SetSidewalk(SidewalkListDevice&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::move(value); }
    inline WirelessDeviceStatistics& WithSidewalk(const SidewalkListDevice& value) { SetSidewalk(value); return *this;}
    inline WirelessDeviceStatistics& WithSidewalk(SidewalkListDevice&& value) { SetSidewalk(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const FuotaDeviceStatus& GetFuotaDeviceStatus() const{ return m_fuotaDeviceStatus; }
    inline bool FuotaDeviceStatusHasBeenSet() const { return m_fuotaDeviceStatusHasBeenSet; }
    inline void SetFuotaDeviceStatus(const FuotaDeviceStatus& value) { m_fuotaDeviceStatusHasBeenSet = true; m_fuotaDeviceStatus = value; }
    inline void SetFuotaDeviceStatus(FuotaDeviceStatus&& value) { m_fuotaDeviceStatusHasBeenSet = true; m_fuotaDeviceStatus = std::move(value); }
    inline WirelessDeviceStatistics& WithFuotaDeviceStatus(const FuotaDeviceStatus& value) { SetFuotaDeviceStatus(value); return *this;}
    inline WirelessDeviceStatistics& WithFuotaDeviceStatus(FuotaDeviceStatus&& value) { SetFuotaDeviceStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the wireless device in the multicast group.</p>
     */
    inline const Aws::String& GetMulticastDeviceStatus() const{ return m_multicastDeviceStatus; }
    inline bool MulticastDeviceStatusHasBeenSet() const { return m_multicastDeviceStatusHasBeenSet; }
    inline void SetMulticastDeviceStatus(const Aws::String& value) { m_multicastDeviceStatusHasBeenSet = true; m_multicastDeviceStatus = value; }
    inline void SetMulticastDeviceStatus(Aws::String&& value) { m_multicastDeviceStatusHasBeenSet = true; m_multicastDeviceStatus = std::move(value); }
    inline void SetMulticastDeviceStatus(const char* value) { m_multicastDeviceStatusHasBeenSet = true; m_multicastDeviceStatus.assign(value); }
    inline WirelessDeviceStatistics& WithMulticastDeviceStatus(const Aws::String& value) { SetMulticastDeviceStatus(value); return *this;}
    inline WirelessDeviceStatistics& WithMulticastDeviceStatus(Aws::String&& value) { SetMulticastDeviceStatus(std::move(value)); return *this;}
    inline WirelessDeviceStatistics& WithMulticastDeviceStatus(const char* value) { SetMulticastDeviceStatus(value); return *this;}
    ///@}

    ///@{
    
    inline int GetMcGroupId() const{ return m_mcGroupId; }
    inline bool McGroupIdHasBeenSet() const { return m_mcGroupIdHasBeenSet; }
    inline void SetMcGroupId(int value) { m_mcGroupIdHasBeenSet = true; m_mcGroupId = value; }
    inline WirelessDeviceStatistics& WithMcGroupId(int value) { SetMcGroupId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    WirelessDeviceType m_type;
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

    FuotaDeviceStatus m_fuotaDeviceStatus;
    bool m_fuotaDeviceStatusHasBeenSet = false;

    Aws::String m_multicastDeviceStatus;
    bool m_multicastDeviceStatusHasBeenSet = false;

    int m_mcGroupId;
    bool m_mcGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
