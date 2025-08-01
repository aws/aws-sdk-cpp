/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/HybridSettingsDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

HybridSettingsDescription::HybridSettingsDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

HybridSettingsDescription& HybridSettingsDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SelfManagedDnsIpAddrs"))
  {
    Aws::Utils::Array<JsonView> selfManagedDnsIpAddrsJsonList = jsonValue.GetArray("SelfManagedDnsIpAddrs");
    for(unsigned selfManagedDnsIpAddrsIndex = 0; selfManagedDnsIpAddrsIndex < selfManagedDnsIpAddrsJsonList.GetLength(); ++selfManagedDnsIpAddrsIndex)
    {
      m_selfManagedDnsIpAddrs.push_back(selfManagedDnsIpAddrsJsonList[selfManagedDnsIpAddrsIndex].AsString());
    }
    m_selfManagedDnsIpAddrsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SelfManagedInstanceIds"))
  {
    Aws::Utils::Array<JsonView> selfManagedInstanceIdsJsonList = jsonValue.GetArray("SelfManagedInstanceIds");
    for(unsigned selfManagedInstanceIdsIndex = 0; selfManagedInstanceIdsIndex < selfManagedInstanceIdsJsonList.GetLength(); ++selfManagedInstanceIdsIndex)
    {
      m_selfManagedInstanceIds.push_back(selfManagedInstanceIdsJsonList[selfManagedInstanceIdsIndex].AsString());
    }
    m_selfManagedInstanceIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue HybridSettingsDescription::Jsonize() const
{
  JsonValue payload;

  if(m_selfManagedDnsIpAddrsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selfManagedDnsIpAddrsJsonList(m_selfManagedDnsIpAddrs.size());
   for(unsigned selfManagedDnsIpAddrsIndex = 0; selfManagedDnsIpAddrsIndex < selfManagedDnsIpAddrsJsonList.GetLength(); ++selfManagedDnsIpAddrsIndex)
   {
     selfManagedDnsIpAddrsJsonList[selfManagedDnsIpAddrsIndex].AsString(m_selfManagedDnsIpAddrs[selfManagedDnsIpAddrsIndex]);
   }
   payload.WithArray("SelfManagedDnsIpAddrs", std::move(selfManagedDnsIpAddrsJsonList));

  }

  if(m_selfManagedInstanceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selfManagedInstanceIdsJsonList(m_selfManagedInstanceIds.size());
   for(unsigned selfManagedInstanceIdsIndex = 0; selfManagedInstanceIdsIndex < selfManagedInstanceIdsJsonList.GetLength(); ++selfManagedInstanceIdsIndex)
   {
     selfManagedInstanceIdsJsonList[selfManagedInstanceIdsIndex].AsString(m_selfManagedInstanceIds[selfManagedInstanceIdsIndex]);
   }
   payload.WithArray("SelfManagedInstanceIds", std::move(selfManagedInstanceIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
