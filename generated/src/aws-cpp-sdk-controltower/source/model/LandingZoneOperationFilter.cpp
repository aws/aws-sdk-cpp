/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/LandingZoneOperationFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ControlTower
{
namespace Model
{

LandingZoneOperationFilter::LandingZoneOperationFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

LandingZoneOperationFilter& LandingZoneOperationFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("statuses"))
  {
    Aws::Utils::Array<JsonView> statusesJsonList = jsonValue.GetArray("statuses");
    for(unsigned statusesIndex = 0; statusesIndex < statusesJsonList.GetLength(); ++statusesIndex)
    {
      m_statuses.push_back(LandingZoneOperationStatusMapper::GetLandingZoneOperationStatusForName(statusesJsonList[statusesIndex].AsString()));
    }
    m_statusesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("types"))
  {
    Aws::Utils::Array<JsonView> typesJsonList = jsonValue.GetArray("types");
    for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
    {
      m_types.push_back(LandingZoneOperationTypeMapper::GetLandingZoneOperationTypeForName(typesJsonList[typesIndex].AsString()));
    }
    m_typesHasBeenSet = true;
  }
  return *this;
}

JsonValue LandingZoneOperationFilter::Jsonize() const
{
  JsonValue payload;

  if(m_statusesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statusesJsonList(m_statuses.size());
   for(unsigned statusesIndex = 0; statusesIndex < statusesJsonList.GetLength(); ++statusesIndex)
   {
     statusesJsonList[statusesIndex].AsString(LandingZoneOperationStatusMapper::GetNameForLandingZoneOperationStatus(m_statuses[statusesIndex]));
   }
   payload.WithArray("statuses", std::move(statusesJsonList));

  }

  if(m_typesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> typesJsonList(m_types.size());
   for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
   {
     typesJsonList[typesIndex].AsString(LandingZoneOperationTypeMapper::GetNameForLandingZoneOperationType(m_types[typesIndex]));
   }
   payload.WithArray("types", std::move(typesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ControlTower
} // namespace Aws
