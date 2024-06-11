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


    ///@{
    /**
     * <p>The wireless device type.</p>
     */
    inline const WirelessDeviceType& GetType() const{ return m_type; }
    inline void SetType(const WirelessDeviceType& value) { m_type = value; }
    inline void SetType(WirelessDeviceType&& value) { m_type = std::move(value); }
    inline GetWirelessDeviceResult& WithType(const WirelessDeviceType& value) { SetType(value); return *this;}
    inline GetWirelessDeviceResult& WithType(WirelessDeviceType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetWirelessDeviceResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetWirelessDeviceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetWirelessDeviceResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetWirelessDeviceResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetWirelessDeviceResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetWirelessDeviceResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the destination to which the device is assigned.</p>
     */
    inline const Aws::String& GetDestinationName() const{ return m_destinationName; }
    inline void SetDestinationName(const Aws::String& value) { m_destinationName = value; }
    inline void SetDestinationName(Aws::String&& value) { m_destinationName = std::move(value); }
    inline void SetDestinationName(const char* value) { m_destinationName.assign(value); }
    inline GetWirelessDeviceResult& WithDestinationName(const Aws::String& value) { SetDestinationName(value); return *this;}
    inline GetWirelessDeviceResult& WithDestinationName(Aws::String&& value) { SetDestinationName(std::move(value)); return *this;}
    inline GetWirelessDeviceResult& WithDestinationName(const char* value) { SetDestinationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the wireless device.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetWirelessDeviceResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetWirelessDeviceResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetWirelessDeviceResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetWirelessDeviceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetWirelessDeviceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetWirelessDeviceResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the thing associated with the wireless device. The value is empty
     * if a thing isn't associated with the device.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }
    inline void SetThingName(const Aws::String& value) { m_thingName = value; }
    inline void SetThingName(Aws::String&& value) { m_thingName = std::move(value); }
    inline void SetThingName(const char* value) { m_thingName.assign(value); }
    inline GetWirelessDeviceResult& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}
    inline GetWirelessDeviceResult& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}
    inline GetWirelessDeviceResult& WithThingName(const char* value) { SetThingName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the thing associated with the wireless device.</p>
     */
    inline const Aws::String& GetThingArn() const{ return m_thingArn; }
    inline void SetThingArn(const Aws::String& value) { m_thingArn = value; }
    inline void SetThingArn(Aws::String&& value) { m_thingArn = std::move(value); }
    inline void SetThingArn(const char* value) { m_thingArn.assign(value); }
    inline GetWirelessDeviceResult& WithThingArn(const Aws::String& value) { SetThingArn(value); return *this;}
    inline GetWirelessDeviceResult& WithThingArn(Aws::String&& value) { SetThingArn(std::move(value)); return *this;}
    inline GetWirelessDeviceResult& WithThingArn(const char* value) { SetThingArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the wireless device.</p>
     */
    inline const LoRaWANDevice& GetLoRaWAN() const{ return m_loRaWAN; }
    inline void SetLoRaWAN(const LoRaWANDevice& value) { m_loRaWAN = value; }
    inline void SetLoRaWAN(LoRaWANDevice&& value) { m_loRaWAN = std::move(value); }
    inline GetWirelessDeviceResult& WithLoRaWAN(const LoRaWANDevice& value) { SetLoRaWAN(value); return *this;}
    inline GetWirelessDeviceResult& WithLoRaWAN(LoRaWANDevice&& value) { SetLoRaWAN(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sidewalk device object.</p>
     */
    inline const SidewalkDevice& GetSidewalk() const{ return m_sidewalk; }
    inline void SetSidewalk(const SidewalkDevice& value) { m_sidewalk = value; }
    inline void SetSidewalk(SidewalkDevice&& value) { m_sidewalk = std::move(value); }
    inline GetWirelessDeviceResult& WithSidewalk(const SidewalkDevice& value) { SetSidewalk(value); return *this;}
    inline GetWirelessDeviceResult& WithSidewalk(SidewalkDevice&& value) { SetSidewalk(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>FPort values for the GNSS, stream, and ClockSync functions of the positioning
     * information.</p>
     */
    inline const PositioningConfigStatus& GetPositioning() const{ return m_positioning; }
    inline void SetPositioning(const PositioningConfigStatus& value) { m_positioning = value; }
    inline void SetPositioning(PositioningConfigStatus&& value) { m_positioning = std::move(value); }
    inline GetWirelessDeviceResult& WithPositioning(const PositioningConfigStatus& value) { SetPositioning(value); return *this;}
    inline GetWirelessDeviceResult& WithPositioning(PositioningConfigStatus&& value) { SetPositioning(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetWirelessDeviceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetWirelessDeviceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetWirelessDeviceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
