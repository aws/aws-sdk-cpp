/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/ApiCache.h>
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

ApiCache::ApiCache() : 
    m_ttl(0),
    m_ttlHasBeenSet(false),
    m_apiCachingBehavior(ApiCachingBehavior::NOT_SET),
    m_apiCachingBehaviorHasBeenSet(false),
    m_transitEncryptionEnabled(false),
    m_transitEncryptionEnabledHasBeenSet(false),
    m_atRestEncryptionEnabled(false),
    m_atRestEncryptionEnabledHasBeenSet(false),
    m_type(ApiCacheType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(ApiCacheStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ApiCache::ApiCache(JsonView jsonValue) : 
    m_ttl(0),
    m_ttlHasBeenSet(false),
    m_apiCachingBehavior(ApiCachingBehavior::NOT_SET),
    m_apiCachingBehaviorHasBeenSet(false),
    m_transitEncryptionEnabled(false),
    m_transitEncryptionEnabledHasBeenSet(false),
    m_atRestEncryptionEnabled(false),
    m_atRestEncryptionEnabledHasBeenSet(false),
    m_type(ApiCacheType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(ApiCacheStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ApiCache& ApiCache::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ttl"))
  {
    m_ttl = jsonValue.GetInt64("ttl");

    m_ttlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("apiCachingBehavior"))
  {
    m_apiCachingBehavior = ApiCachingBehaviorMapper::GetApiCachingBehaviorForName(jsonValue.GetString("apiCachingBehavior"));

    m_apiCachingBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transitEncryptionEnabled"))
  {
    m_transitEncryptionEnabled = jsonValue.GetBool("transitEncryptionEnabled");

    m_transitEncryptionEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("atRestEncryptionEnabled"))
  {
    m_atRestEncryptionEnabled = jsonValue.GetBool("atRestEncryptionEnabled");

    m_atRestEncryptionEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = ApiCacheTypeMapper::GetApiCacheTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ApiCacheStatusMapper::GetApiCacheStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ApiCache::Jsonize() const
{
  JsonValue payload;

  if(m_ttlHasBeenSet)
  {
   payload.WithInt64("ttl", m_ttl);

  }

  if(m_apiCachingBehaviorHasBeenSet)
  {
   payload.WithString("apiCachingBehavior", ApiCachingBehaviorMapper::GetNameForApiCachingBehavior(m_apiCachingBehavior));
  }

  if(m_transitEncryptionEnabledHasBeenSet)
  {
   payload.WithBool("transitEncryptionEnabled", m_transitEncryptionEnabled);

  }

  if(m_atRestEncryptionEnabledHasBeenSet)
  {
   payload.WithBool("atRestEncryptionEnabled", m_atRestEncryptionEnabled);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ApiCacheTypeMapper::GetNameForApiCacheType(m_type));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ApiCacheStatusMapper::GetNameForApiCacheStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
