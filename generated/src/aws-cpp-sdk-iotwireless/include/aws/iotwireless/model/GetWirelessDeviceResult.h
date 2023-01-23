/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/WirelessDeviceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/LoRaWANDevice.h>
#include <aws/iotwireless/model/SidewalkDevice.h>
#include <aws/iotwireless/model/PositioningConfigStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTWireless
{
namespace Model
{
  class GetWirelessDeviceResult
  {
  public:
    AWS_IOTWIRELESS_API GetWirelessDeviceResult();
    AWS_IOTWIRELESS_API GetWirelessDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetWirelessDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The wireless device type.</p>
     */
    inline const WirelessDeviceType& GetType() const{ return m_type; }

    /**
     * <p>The wireless device type.</p>
     */
    inline void SetType(const WirelessDeviceType& value) { m_type = value; }

    /**
     * <p>The wireless device type.</p>
     */
    inline void SetType(WirelessDeviceType&& value) { m_type = std::move(value); }

    /**
     * <p>The wireless device type.</p>
     */
    inline GetWirelessDeviceResult& WithType(const WirelessDeviceType& value) { SetType(value); return *this;}

    /**
     * <p>The wireless device type.</p>
     */
    inline GetWirelessDeviceResult& WithType(WirelessDeviceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline GetWirelessDeviceResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline GetWirelessDeviceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline GetWirelessDeviceResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the resource.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the resource.</p>
     */
    inline GetWirelessDeviceResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the resource.</p>
     */
    inline GetWirelessDeviceResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the resource.</p>
     */
    inline GetWirelessDeviceResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the destination to which the device is assigned.</p>
     */
    inline const Aws::String& GetDestinationName() const{ return m_destinationName; }

    /**
     * <p>The name of the destination to which the device is assigned.</p>
     */
    inline void SetDestinationName(const Aws::String& value) { m_destinationName = value; }

    /**
     * <p>The name of the destination to which the device is assigned.</p>
     */
    inline void SetDestinationName(Aws::String&& value) { m_destinationName = std::move(value); }

    /**
     * <p>The name of the destination to which the device is assigned.</p>
     */
    inline void SetDestinationName(const char* value) { m_destinationName.assign(value); }

    /**
     * <p>The name of the destination to which the device is assigned.</p>
     */
    inline GetWirelessDeviceResult& WithDestinationName(const Aws::String& value) { SetDestinationName(value); return *this;}

    /**
     * <p>The name of the destination to which the device is assigned.</p>
     */
    inline GetWirelessDeviceResult& WithDestinationName(Aws::String&& value) { SetDestinationName(std::move(value)); return *this;}

    /**
     * <p>The name of the destination to which the device is assigned.</p>
     */
    inline GetWirelessDeviceResult& WithDestinationName(const char* value) { SetDestinationName(value); return *this;}


    /**
     * <p>The ID of the wireless device.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the wireless device.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the wireless device.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the wireless device.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the wireless device.</p>
     */
    inline GetWirelessDeviceResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the wireless device.</p>
     */
    inline GetWirelessDeviceResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the wireless device.</p>
     */
    inline GetWirelessDeviceResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline GetWirelessDeviceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline GetWirelessDeviceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline GetWirelessDeviceResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the thing associated with the wireless device. The value is empty
     * if a thing isn't associated with the device.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the thing associated with the wireless device. The value is empty
     * if a thing isn't associated with the device.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingName = value; }

    /**
     * <p>The name of the thing associated with the wireless device. The value is empty
     * if a thing isn't associated with the device.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingName = std::move(value); }

    /**
     * <p>The name of the thing associated with the wireless device. The value is empty
     * if a thing isn't associated with the device.</p>
     */
    inline void SetThingName(const char* value) { m_thingName.assign(value); }

    /**
     * <p>The name of the thing associated with the wireless device. The value is empty
     * if a thing isn't associated with the device.</p>
     */
    inline GetWirelessDeviceResult& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing associated with the wireless device. The value is empty
     * if a thing isn't associated with the device.</p>
     */
    inline GetWirelessDeviceResult& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the thing associated with the wireless device. The value is empty
     * if a thing isn't associated with the device.</p>
     */
    inline GetWirelessDeviceResult& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>The ARN of the thing associated with the wireless device.</p>
     */
    inline const Aws::String& GetThingArn() const{ return m_thingArn; }

    /**
     * <p>The ARN of the thing associated with the wireless device.</p>
     */
    inline void SetThingArn(const Aws::String& value) { m_thingArn = value; }

    /**
     * <p>The ARN of the thing associated with the wireless device.</p>
     */
    inline void SetThingArn(Aws::String&& value) { m_thingArn = std::move(value); }

    /**
     * <p>The ARN of the thing associated with the wireless device.</p>
     */
    inline void SetThingArn(const char* value) { m_thingArn.assign(value); }

    /**
     * <p>The ARN of the thing associated with the wireless device.</p>
     */
    inline GetWirelessDeviceResult& WithThingArn(const Aws::String& value) { SetThingArn(value); return *this;}

    /**
     * <p>The ARN of the thing associated with the wireless device.</p>
     */
    inline GetWirelessDeviceResult& WithThingArn(Aws::String&& value) { SetThingArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the thing associated with the wireless device.</p>
     */
    inline GetWirelessDeviceResult& WithThingArn(const char* value) { SetThingArn(value); return *this;}


    /**
     * <p>Information about the wireless device.</p>
     */
    inline const LoRaWANDevice& GetLoRaWAN() const{ return m_loRaWAN; }

    /**
     * <p>Information about the wireless device.</p>
     */
    inline void SetLoRaWAN(const LoRaWANDevice& value) { m_loRaWAN = value; }

    /**
     * <p>Information about the wireless device.</p>
     */
    inline void SetLoRaWAN(LoRaWANDevice&& value) { m_loRaWAN = std::move(value); }

    /**
     * <p>Information about the wireless device.</p>
     */
    inline GetWirelessDeviceResult& WithLoRaWAN(const LoRaWANDevice& value) { SetLoRaWAN(value); return *this;}

    /**
     * <p>Information about the wireless device.</p>
     */
    inline GetWirelessDeviceResult& WithLoRaWAN(LoRaWANDevice&& value) { SetLoRaWAN(std::move(value)); return *this;}


    /**
     * <p>Sidewalk device object.</p>
     */
    inline const SidewalkDevice& GetSidewalk() const{ return m_sidewalk; }

    /**
     * <p>Sidewalk device object.</p>
     */
    inline void SetSidewalk(const SidewalkDevice& value) { m_sidewalk = value; }

    /**
     * <p>Sidewalk device object.</p>
     */
    inline void SetSidewalk(SidewalkDevice&& value) { m_sidewalk = std::move(value); }

    /**
     * <p>Sidewalk device object.</p>
     */
    inline GetWirelessDeviceResult& WithSidewalk(const SidewalkDevice& value) { SetSidewalk(value); return *this;}

    /**
     * <p>Sidewalk device object.</p>
     */
    inline GetWirelessDeviceResult& WithSidewalk(SidewalkDevice&& value) { SetSidewalk(std::move(value)); return *this;}


    /**
     * <p>FPort values for the GNSS, stream, and ClockSync functions of the positioning
     * information.</p>
     */
    inline const PositioningConfigStatus& GetPositioning() const{ return m_positioning; }

    /**
     * <p>FPort values for the GNSS, stream, and ClockSync functions of the positioning
     * information.</p>
     */
    inline void SetPositioning(const PositioningConfigStatus& value) { m_positioning = value; }

    /**
     * <p>FPort values for the GNSS, stream, and ClockSync functions of the positioning
     * information.</p>
     */
    inline void SetPositioning(PositioningConfigStatus&& value) { m_positioning = std::move(value); }

    /**
     * <p>FPort values for the GNSS, stream, and ClockSync functions of the positioning
     * information.</p>
     */
    inline GetWirelessDeviceResult& WithPositioning(const PositioningConfigStatus& value) { SetPositioning(value); return *this;}

    /**
     * <p>FPort values for the GNSS, stream, and ClockSync functions of the positioning
     * information.</p>
     */
    inline GetWirelessDeviceResult& WithPositioning(PositioningConfigStatus&& value) { SetPositioning(std::move(value)); return *this;}

  private:

    WirelessDeviceType m_type;

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_destinationName;

    Aws::String m_id;

    Aws::String m_arn;

    Aws::String m_thingName;

    Aws::String m_thingArn;

    LoRaWANDevice m_loRaWAN;

    SidewalkDevice m_sidewalk;

    PositioningConfigStatus m_positioning;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
