/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GetWirelessDeviceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWirelessDeviceResult::GetWirelessDeviceResult() : 
    m_type(WirelessDeviceType::NOT_SET),
    m_positioning(PositioningConfigStatus::NOT_SET)
{
}

GetWirelessDeviceResult::GetWirelessDeviceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_type(WirelessDeviceType::NOT_SET),
    m_positioning(PositioningConfigStatus::NOT_SET)
{
  *this = result;
}

GetWirelessDeviceResult& GetWirelessDeviceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Type"))
  {
    m_type = WirelessDeviceTypeMapper::GetWirelessDeviceTypeForName(jsonValue.GetString("Type"));

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("DestinationName"))
  {
    m_destinationName = jsonValue.GetString("DestinationName");

  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("ThingName"))
  {
    m_thingName = jsonValue.GetString("ThingName");

  }

  if(jsonValue.ValueExists("ThingArn"))
  {
    m_thingArn = jsonValue.GetString("ThingArn");

  }

  if(jsonValue.ValueExists("LoRaWAN"))
  {
    m_loRaWAN = jsonValue.GetObject("LoRaWAN");

  }

  if(jsonValue.ValueExists("Sidewalk"))
  {
    m_sidewalk = jsonValue.GetObject("Sidewalk");

  }

  if(jsonValue.ValueExists("Positioning"))
  {
    m_positioning = PositioningConfigStatusMapper::GetPositioningConfigStatusForName(jsonValue.GetString("Positioning"));

  }



  return *this;
}
