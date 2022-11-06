/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/GatewaySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

GatewaySummary::GatewaySummary() : 
    m_gatewayIdHasBeenSet(false),
    m_gatewayNameHasBeenSet(false),
    m_gatewayPlatformHasBeenSet(false),
    m_gatewayCapabilitySummariesHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastUpdateDateHasBeenSet(false)
{
}

GatewaySummary::GatewaySummary(JsonView jsonValue) : 
    m_gatewayIdHasBeenSet(false),
    m_gatewayNameHasBeenSet(false),
    m_gatewayPlatformHasBeenSet(false),
    m_gatewayCapabilitySummariesHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastUpdateDateHasBeenSet(false)
{
  *this = jsonValue;
}

GatewaySummary& GatewaySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("gatewayId"))
  {
    m_gatewayId = jsonValue.GetString("gatewayId");

    m_gatewayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gatewayName"))
  {
    m_gatewayName = jsonValue.GetString("gatewayName");

    m_gatewayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gatewayPlatform"))
  {
    m_gatewayPlatform = jsonValue.GetObject("gatewayPlatform");

    m_gatewayPlatformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gatewayCapabilitySummaries"))
  {
    Aws::Utils::Array<JsonView> gatewayCapabilitySummariesJsonList = jsonValue.GetArray("gatewayCapabilitySummaries");
    for(unsigned gatewayCapabilitySummariesIndex = 0; gatewayCapabilitySummariesIndex < gatewayCapabilitySummariesJsonList.GetLength(); ++gatewayCapabilitySummariesIndex)
    {
      m_gatewayCapabilitySummaries.push_back(gatewayCapabilitySummariesJsonList[gatewayCapabilitySummariesIndex].AsObject());
    }
    m_gatewayCapabilitySummariesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdateDate"))
  {
    m_lastUpdateDate = jsonValue.GetDouble("lastUpdateDate");

    m_lastUpdateDateHasBeenSet = true;
  }

  return *this;
}

JsonValue GatewaySummary::Jsonize() const
{
  JsonValue payload;

  if(m_gatewayIdHasBeenSet)
  {
   payload.WithString("gatewayId", m_gatewayId);

  }

  if(m_gatewayNameHasBeenSet)
  {
   payload.WithString("gatewayName", m_gatewayName);

  }

  if(m_gatewayPlatformHasBeenSet)
  {
   payload.WithObject("gatewayPlatform", m_gatewayPlatform.Jsonize());

  }

  if(m_gatewayCapabilitySummariesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> gatewayCapabilitySummariesJsonList(m_gatewayCapabilitySummaries.size());
   for(unsigned gatewayCapabilitySummariesIndex = 0; gatewayCapabilitySummariesIndex < gatewayCapabilitySummariesJsonList.GetLength(); ++gatewayCapabilitySummariesIndex)
   {
     gatewayCapabilitySummariesJsonList[gatewayCapabilitySummariesIndex].AsObject(m_gatewayCapabilitySummaries[gatewayCapabilitySummariesIndex].Jsonize());
   }
   payload.WithArray("gatewayCapabilitySummaries", std::move(gatewayCapabilitySummariesJsonList));

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_lastUpdateDateHasBeenSet)
  {
   payload.WithDouble("lastUpdateDate", m_lastUpdateDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
