/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/SessionsStatisticsResources.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

SessionsStatisticsResources::SessionsStatisticsResources() : 
    m_fleetIdsHasBeenSet(false),
    m_queueIdsHasBeenSet(false)
{
}

SessionsStatisticsResources::SessionsStatisticsResources(JsonView jsonValue) : 
    m_fleetIdsHasBeenSet(false),
    m_queueIdsHasBeenSet(false)
{
  *this = jsonValue;
}

SessionsStatisticsResources& SessionsStatisticsResources::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fleetIds"))
  {
    Aws::Utils::Array<JsonView> fleetIdsJsonList = jsonValue.GetArray("fleetIds");
    for(unsigned fleetIdsIndex = 0; fleetIdsIndex < fleetIdsJsonList.GetLength(); ++fleetIdsIndex)
    {
      m_fleetIds.push_back(fleetIdsJsonList[fleetIdsIndex].AsString());
    }
    m_fleetIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queueIds"))
  {
    Aws::Utils::Array<JsonView> queueIdsJsonList = jsonValue.GetArray("queueIds");
    for(unsigned queueIdsIndex = 0; queueIdsIndex < queueIdsJsonList.GetLength(); ++queueIdsIndex)
    {
      m_queueIds.push_back(queueIdsJsonList[queueIdsIndex].AsString());
    }
    m_queueIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue SessionsStatisticsResources::Jsonize() const
{
  JsonValue payload;

  if(m_fleetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fleetIdsJsonList(m_fleetIds.size());
   for(unsigned fleetIdsIndex = 0; fleetIdsIndex < fleetIdsJsonList.GetLength(); ++fleetIdsIndex)
   {
     fleetIdsJsonList[fleetIdsIndex].AsString(m_fleetIds[fleetIdsIndex]);
   }
   payload.WithArray("fleetIds", std::move(fleetIdsJsonList));

  }

  if(m_queueIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> queueIdsJsonList(m_queueIds.size());
   for(unsigned queueIdsIndex = 0; queueIdsIndex < queueIdsJsonList.GetLength(); ++queueIdsIndex)
   {
     queueIdsJsonList[queueIdsIndex].AsString(m_queueIds[queueIdsIndex]);
   }
   payload.WithArray("queueIds", std::move(queueIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
