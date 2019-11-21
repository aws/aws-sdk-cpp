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
    Array<JsonView> cachingKeysJsonList = jsonValue.GetArray("cachingKeys");
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
   Array<JsonValue> cachingKeysJsonList(m_cachingKeys.size());
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
