/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/NetworkImpairment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace InternetMonitor
{
namespace Model
{

NetworkImpairment::NetworkImpairment() : 
    m_networksHasBeenSet(false),
    m_asPathHasBeenSet(false),
    m_networkEventType(TriangulationEventType::NOT_SET),
    m_networkEventTypeHasBeenSet(false)
{
}

NetworkImpairment::NetworkImpairment(JsonView jsonValue) : 
    m_networksHasBeenSet(false),
    m_asPathHasBeenSet(false),
    m_networkEventType(TriangulationEventType::NOT_SET),
    m_networkEventTypeHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkImpairment& NetworkImpairment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Networks"))
  {
    Aws::Utils::Array<JsonView> networksJsonList = jsonValue.GetArray("Networks");
    for(unsigned networksIndex = 0; networksIndex < networksJsonList.GetLength(); ++networksIndex)
    {
      m_networks.push_back(networksJsonList[networksIndex].AsObject());
    }
    m_networksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AsPath"))
  {
    Aws::Utils::Array<JsonView> asPathJsonList = jsonValue.GetArray("AsPath");
    for(unsigned asPathIndex = 0; asPathIndex < asPathJsonList.GetLength(); ++asPathIndex)
    {
      m_asPath.push_back(asPathJsonList[asPathIndex].AsObject());
    }
    m_asPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkEventType"))
  {
    m_networkEventType = TriangulationEventTypeMapper::GetTriangulationEventTypeForName(jsonValue.GetString("NetworkEventType"));

    m_networkEventTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkImpairment::Jsonize() const
{
  JsonValue payload;

  if(m_networksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networksJsonList(m_networks.size());
   for(unsigned networksIndex = 0; networksIndex < networksJsonList.GetLength(); ++networksIndex)
   {
     networksJsonList[networksIndex].AsObject(m_networks[networksIndex].Jsonize());
   }
   payload.WithArray("Networks", std::move(networksJsonList));

  }

  if(m_asPathHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> asPathJsonList(m_asPath.size());
   for(unsigned asPathIndex = 0; asPathIndex < asPathJsonList.GetLength(); ++asPathIndex)
   {
     asPathJsonList[asPathIndex].AsObject(m_asPath[asPathIndex].Jsonize());
   }
   payload.WithArray("AsPath", std::move(asPathJsonList));

  }

  if(m_networkEventTypeHasBeenSet)
  {
   payload.WithString("NetworkEventType", TriangulationEventTypeMapper::GetNameForTriangulationEventType(m_networkEventType));
  }

  return payload;
}

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
