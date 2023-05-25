/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/CachingConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

CachingConfig::CachingConfig() : 
    m_ttl(0),
    m_ttlHasBeenSet(false),
    m_cachingKeysHasBeenSet(false)
{
}

CachingConfig::CachingConfig(JsonView jsonValue) : 
    m_ttl(0),
    m_ttlHasBeenSet(false),
    m_cachingKeysHasBeenSet(false)
{
  *this = jsonValue;
}

CachingConfig& CachingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ttl"))
  {
    m_ttl = jsonValue.GetInt64("ttl");

    m_ttlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cachingKeys"))
  {
    Aws::Utils::Array<JsonView> cachingKeysJsonList = jsonValue.GetArray("cachingKeys");
    for(unsigned cachingKeysIndex = 0; cachingKeysIndex < cachingKeysJsonList.GetLength(); ++cachingKeysIndex)
    {
      m_cachingKeys.push_back(cachingKeysJsonList[cachingKeysIndex].AsString());
    }
    m_cachingKeysHasBeenSet = true;
  }

  return *this;
}

JsonValue CachingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_ttlHasBeenSet)
  {
   payload.WithInt64("ttl", m_ttl);

  }

  if(m_cachingKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cachingKeysJsonList(m_cachingKeys.size());
   for(unsigned cachingKeysIndex = 0; cachingKeysIndex < cachingKeysJsonList.GetLength(); ++cachingKeysIndex)
   {
     cachingKeysJsonList[cachingKeysIndex].AsString(m_cachingKeys[cachingKeysIndex]);
   }
   payload.WithArray("cachingKeys", std::move(cachingKeysJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
