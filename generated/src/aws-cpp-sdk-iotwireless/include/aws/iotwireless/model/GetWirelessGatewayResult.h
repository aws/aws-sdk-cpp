/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/LoRaWANGateway.h>
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
  class GetWirelessGatewayResult
  {
  public:
    AWS_IOTWIRELESS_API GetWirelessGatewayResult();
    AWS_IOTWIRELESS_API GetWirelessGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetWirelessGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetWirelessGatewayResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetWirelessGatewayResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetWirelessGatewayResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the wireless gateway.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetWirelessGatewayResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetWirelessGatewayResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetWirelessGatewayResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetWirelessGatewayResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetWirelessGatewayResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetWirelessGatewayResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the wireless gateway.</p>
     */
    inline const LoRaWANGateway& GetLoRaWAN() const{ return m_loRaWAN; }
    inline void SetLoRaWAN(const LoRaWANGateway& value) { m_loRaWAN = value; }
    inline void SetLoRaWAN(LoRaWANGateway&& value) { m_loRaWAN = std::move(value); }
    inline GetWirelessGatewayResult& WithLoRaWAN(const LoRaWANGateway& value) { SetLoRaWAN(value); return *this;}
    inline GetWirelessGatewayResult& WithLoRaWAN(LoRaWANGateway&& value) { SetLoRaWAN(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetWirelessGatewayResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetWirelessGatewayResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetWirelessGatewayResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the thing associated with the wireless gateway. The value is
     * empty if a thing isn't associated with the gateway.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }
    inline void SetThingName(const Aws::String& value) { m_thingName = value; }
    inline void SetThingName(Aws::String&& value) { m_thingName = std::move(value); }
    inline void SetThingName(const char* value) { m_thingName.assign(value); }
    inline GetWirelessGatewayResult& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}
    inline GetWirelessGatewayResult& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}
    inline GetWirelessGatewayResult& WithThingName(const char* value) { SetThingName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the thing associated with the wireless gateway.</p>
     */
    inline const Aws::String& GetThingArn() const{ return m_thingArn; }
    inline void SetThingArn(const Aws::String& value) { m_thingArn = value; }
    inline void SetThingArn(Aws::String&& value) { m_thingArn = std::move(value); }
    inline void SetThingArn(const char* value) { m_thingArn.assign(value); }
    inline GetWirelessGatewayResult& WithThingArn(const Aws::String& value) { SetThingArn(value); return *this;}
    inline GetWirelessGatewayResult& WithThingArn(Aws::String&& value) { SetThingArn(std::move(value)); return *this;}
    inline GetWirelessGatewayResult& WithThingArn(const char* value) { SetThingArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetWirelessGatewayResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetWirelessGatewayResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetWirelessGatewayResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_id;

    Aws::String m_description;

    LoRaWANGateway m_loRaWAN;

    Aws::String m_arn;

    Aws::String m_thingName;

    Aws::String m_thingArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
