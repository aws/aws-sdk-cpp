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


    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline WirelessDeviceStatistics& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline WirelessDeviceStatistics& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline WirelessDeviceStatistics& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID of the wireless device reporting the data.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the wireless device reporting the data.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the wireless device reporting the data.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the wireless device reporting the data.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the wireless device reporting the data.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the wireless device reporting the data.</p>
     */
    inline WirelessDeviceStatistics& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the wireless device reporting the data.</p>
     */
    inline WirelessDeviceStatistics& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the wireless device reporting the data.</p>
     */
    inline WirelessDeviceStatistics& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The wireless device type.</p>
     */
    inline const WirelessDeviceType& GetType() const{ return m_type; }

    /**
     * <p>The wireless device type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The wireless device type.</p>
     */
    inline void SetType(const WirelessDeviceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The wireless device type.</p>
     */
    inline void SetType(WirelessDeviceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The wireless device type.</p>
     */
    inline WirelessDeviceStatistics& WithType(const WirelessDeviceType& value) { SetType(value); return *this;}

    /**
     * <p>The wireless device type.</p>
     */
    inline WirelessDeviceStatistics& WithType(WirelessDeviceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the resource.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline WirelessDeviceStatistics& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline WirelessDeviceStatistics& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline WirelessDeviceStatistics& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the destination to which the device is assigned.</p>
     */
    inline const Aws::String& GetDestinationName() const{ return m_destinationName; }

    /**
     * <p>The name of the destination to which the device is assigned.</p>
     */
    inline bool DestinationNameHasBeenSet() const { return m_destinationNameHasBeenSet; }

    /**
     * <p>The name of the destination to which the device is assigned.</p>
     */
    inline void SetDestinationName(const Aws::String& value) { m_destinationNameHasBeenSet = true; m_destinationName = value; }

    /**
     * <p>The name of the destination to which the device is assigned.</p>
     */
    inline void SetDestinationName(Aws::String&& value) { m_destinationNameHasBeenSet = true; m_destinationName = std::move(value); }

    /**
     * <p>The name of the destination to which the device is assigned.</p>
     */
    inline void SetDestinationName(const char* value) { m_destinationNameHasBeenSet = true; m_destinationName.assign(value); }

    /**
     * <p>The name of the destination to which the device is assigned.</p>
     */
    inline WirelessDeviceStatistics& WithDestinationName(const Aws::String& value) { SetDestinationName(value); return *this;}

    /**
     * <p>The name of the destination to which the device is assigned.</p>
     */
    inline WirelessDeviceStatistics& WithDestinationName(Aws::String&& value) { SetDestinationName(std::move(value)); return *this;}

    /**
     * <p>The name of the destination to which the device is assigned.</p>
     */
    inline WirelessDeviceStatistics& WithDestinationName(const char* value) { SetDestinationName(value); return *this;}


    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline const Aws::String& GetLastUplinkReceivedAt() const{ return m_lastUplinkReceivedAt; }

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline bool LastUplinkReceivedAtHasBeenSet() const { return m_lastUplinkReceivedAtHasBeenSet; }

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline void SetLastUplinkReceivedAt(const Aws::String& value) { m_lastUplinkReceivedAtHasBeenSet = true; m_lastUplinkReceivedAt = value; }

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline void SetLastUplinkReceivedAt(Aws::String&& value) { m_lastUplinkReceivedAtHasBeenSet = true; m_lastUplinkReceivedAt = std::move(value); }

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline void SetLastUplinkReceivedAt(const char* value) { m_lastUplinkReceivedAtHasBeenSet = true; m_lastUplinkReceivedAt.assign(value); }

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline WirelessDeviceStatistics& WithLastUplinkReceivedAt(const Aws::String& value) { SetLastUplinkReceivedAt(value); return *this;}

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline WirelessDeviceStatistics& WithLastUplinkReceivedAt(Aws::String&& value) { SetLastUplinkReceivedAt(std::move(value)); return *this;}

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline WirelessDeviceStatistics& WithLastUplinkReceivedAt(const char* value) { SetLastUplinkReceivedAt(value); return *this;}


    /**
     * <p>LoRaWAN device info.</p>
     */
    inline const LoRaWANListDevice& GetLoRaWAN() const{ return m_loRaWAN; }

    /**
     * <p>LoRaWAN device info.</p>
     */
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }

    /**
     * <p>LoRaWAN device info.</p>
     */
    inline void SetLoRaWAN(const LoRaWANListDevice& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = value; }

    /**
     * <p>LoRaWAN device info.</p>
     */
    inline void SetLoRaWAN(LoRaWANListDevice&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::move(value); }

    /**
     * <p>LoRaWAN device info.</p>
     */
    inline WirelessDeviceStatistics& WithLoRaWAN(const LoRaWANListDevice& value) { SetLoRaWAN(value); return *this;}

    /**
     * <p>LoRaWAN device info.</p>
     */
    inline WirelessDeviceStatistics& WithLoRaWAN(LoRaWANListDevice&& value) { SetLoRaWAN(std::move(value)); return *this;}


    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline const SidewalkListDevice& GetSidewalk() const{ return m_sidewalk; }

    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline bool SidewalkHasBeenSet() const { return m_sidewalkHasBeenSet; }

    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline void SetSidewalk(const SidewalkListDevice& value) { m_sidewalkHasBeenSet = true; m_sidewalk = value; }

    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline void SetSidewalk(SidewalkListDevice&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::move(value); }

    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline WirelessDeviceStatistics& WithSidewalk(const SidewalkListDevice& value) { SetSidewalk(value); return *this;}

    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline WirelessDeviceStatistics& WithSidewalk(SidewalkListDevice&& value) { SetSidewalk(std::move(value)); return *this;}


    
    inline const FuotaDeviceStatus& GetFuotaDeviceStatus() const{ return m_fuotaDeviceStatus; }

    
    inline bool FuotaDeviceStatusHasBeenSet() const { return m_fuotaDeviceStatusHasBeenSet; }

    
    inline void SetFuotaDeviceStatus(const FuotaDeviceStatus& value) { m_fuotaDeviceStatusHasBeenSet = true; m_fuotaDeviceStatus = value; }

    
    inline void SetFuotaDeviceStatus(FuotaDeviceStatus&& value) { m_fuotaDeviceStatusHasBeenSet = true; m_fuotaDeviceStatus = std::move(value); }

    
    inline WirelessDeviceStatistics& WithFuotaDeviceStatus(const FuotaDeviceStatus& value) { SetFuotaDeviceStatus(value); return *this;}

    
    inline WirelessDeviceStatistics& WithFuotaDeviceStatus(FuotaDeviceStatus&& value) { SetFuotaDeviceStatus(std::move(value)); return *this;}


    /**
     * <p>The status of the wireless device in the multicast group.</p>
     */
    inline const Aws::String& GetMulticastDeviceStatus() const{ return m_multicastDeviceStatus; }

    /**
     * <p>The status of the wireless device in the multicast group.</p>
     */
    inline bool MulticastDeviceStatusHasBeenSet() const { return m_multicastDeviceStatusHasBeenSet; }

    /**
     * <p>The status of the wireless device in the multicast group.</p>
     */
    inline void SetMulticastDeviceStatus(const Aws::String& value) { m_multicastDeviceStatusHasBeenSet = true; m_multicastDeviceStatus = value; }

    /**
     * <p>The status of the wireless device in the multicast group.</p>
     */
    inline void SetMulticastDeviceStatus(Aws::String&& value) { m_multicastDeviceStatusHasBeenSet = true; m_multicastDeviceStatus = std::move(value); }

    /**
     * <p>The status of the wireless device in the multicast group.</p>
     */
    inline void SetMulticastDeviceStatus(const char* value) { m_multicastDeviceStatusHasBeenSet = true; m_multicastDeviceStatus.assign(value); }

    /**
     * <p>The status of the wireless device in the multicast group.</p>
     */
    inline WirelessDeviceStatistics& WithMulticastDeviceStatus(const Aws::String& value) { SetMulticastDeviceStatus(value); return *this;}

    /**
     * <p>The status of the wireless device in the multicast group.</p>
     */
    inline WirelessDeviceStatistics& WithMulticastDeviceStatus(Aws::String&& value) { SetMulticastDeviceStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the wireless device in the multicast group.</p>
     */
    inline WirelessDeviceStatistics& WithMulticastDeviceStatus(const char* value) { SetMulticastDeviceStatus(value); return *this;}


    
    inline int GetMcGroupId() const{ return m_mcGroupId; }

    
    inline bool McGroupIdHasBeenSet() const { return m_mcGroupIdHasBeenSet; }

    
    inline void SetMcGroupId(int value) { m_mcGroupIdHasBeenSet = true; m_mcGroupId = value; }

    
    inline WirelessDeviceStatistics& WithMcGroupId(int value) { SetMcGroupId(value); return *this;}

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
