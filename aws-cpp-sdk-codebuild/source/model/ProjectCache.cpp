/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> modesJsonList = jsonValue.GetArray("modes");
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
   Aws::Utils::Array<JsonValue> modesJsonList(m_modes.size());
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
