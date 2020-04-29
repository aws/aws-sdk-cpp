/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_gatewayCapabilitySummariesHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastUpdateDateHasBeenSet(false)
{
}

GatewaySummary::GatewaySummary(JsonView jsonValue) : 
    m_gatewayIdHasBeenSet(false),
    m_gatewayNameHasBeenSet(false),
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

  if(jsonValue.ValueExists("gatewayCapabilitySummaries"))
  {
    Array<JsonView> gatewayCapabilitySummariesJsonList = jsonValue.GetArray("gatewayCapabilitySummaries");
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

  if(m_gatewayCapabilitySummariesHasBeenSet)
  {
   Array<JsonValue> gatewayCapabilitySummariesJsonList(m_gatewayCapabilitySummaries.size());
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
