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

#include <aws/codebuild/model/ProjectCache.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

ProjectCache::ProjectCache() : 
    m_type(CacheType::NOT_SET),
    m_typeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_modesHasBeenSet(false)
{
}

ProjectCache::ProjectCache(JsonView jsonValue) : 
    m_type(CacheType::NOT_SET),
    m_typeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_modesHasBeenSet(false)
{
  *this = jsonValue;
}

ProjectCache& ProjectCache::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = CacheTypeMapper::GetCacheTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modes"))
  {
    Array<JsonView> modesJsonList = jsonValue.GetArray("modes");
    for(unsigned modesIndex = 0; modesIndex < modesJsonList.GetLength(); ++modesIndex)
    {
      m_modes.push_back(CacheModeMapper::GetCacheModeForName(modesJsonList[modesIndex].AsString()));
    }
    m_modesHasBeenSet = true;
  }

  return *this;
}

JsonValue ProjectCache::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", CacheTypeMapper::GetNameForCacheType(m_type));
  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("location", m_location);

  }

  if(m_modesHasBeenSet)
  {
   Array<JsonValue> modesJsonList(m_modes.size());
   for(unsigned modesIndex = 0; modesIndex < modesJsonList.GetLength(); ++modesIndex)
   {
     modesJsonList[modesIndex].AsString(CacheModeMapper::GetNameForCacheMode(m_modes[modesIndex]));
   }
   payload.WithArray("modes", std::move(modesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
