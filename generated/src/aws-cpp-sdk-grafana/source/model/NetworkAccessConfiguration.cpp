/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/NetworkAccessConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{

NetworkAccessConfiguration::NetworkAccessConfiguration() : 
    m_prefixListIdsHasBeenSet(false),
    m_vpceIdsHasBeenSet(false)
{
}

NetworkAccessConfiguration::NetworkAccessConfiguration(JsonView jsonValue) : 
    m_prefixListIdsHasBeenSet(false),
    m_vpceIdsHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkAccessConfiguration& NetworkAccessConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("prefixListIds"))
  {
    Aws::Utils::Array<JsonView> prefixListIdsJsonList = jsonValue.GetArray("prefixListIds");
    for(unsigned prefixListIdsIndex = 0; prefixListIdsIndex < prefixListIdsJsonList.GetLength(); ++prefixListIdsIndex)
    {
      m_prefixListIds.push_back(prefixListIdsJsonList[prefixListIdsIndex].AsString());
    }
    m_prefixListIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpceIds"))
  {
    Aws::Utils::Array<JsonView> vpceIdsJsonList = jsonValue.GetArray("vpceIds");
    for(unsigned vpceIdsIndex = 0; vpceIdsIndex < vpceIdsJsonList.GetLength(); ++vpceIdsIndex)
    {
      m_vpceIds.push_back(vpceIdsJsonList[vpceIdsIndex].AsString());
    }
    m_vpceIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkAccessConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_prefixListIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> prefixListIdsJsonList(m_prefixListIds.size());
   for(unsigned prefixListIdsIndex = 0; prefixListIdsIndex < prefixListIdsJsonList.GetLength(); ++prefixListIdsIndex)
   {
     prefixListIdsJsonList[prefixListIdsIndex].AsString(m_prefixListIds[prefixListIdsIndex]);
   }
   payload.WithArray("prefixListIds", std::move(prefixListIdsJsonList));

  }

  if(m_vpceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpceIdsJsonList(m_vpceIds.size());
   for(unsigned vpceIdsIndex = 0; vpceIdsIndex < vpceIdsJsonList.GetLength(); ++vpceIdsIndex)
   {
     vpceIdsJsonList[vpceIdsIndex].AsString(m_vpceIds[vpceIdsIndex]);
   }
   payload.WithArray("vpceIds", std::move(vpceIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
