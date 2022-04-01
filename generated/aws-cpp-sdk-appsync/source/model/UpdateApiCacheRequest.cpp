/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/UpdateApiCacheRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateApiCacheRequest::UpdateApiCacheRequest() : 
    m_apiIdHasBeenSet(false),
    m_ttl(0),
    m_ttlHasBeenSet(false),
    m_apiCachingBehavior(ApiCachingBehavior::NOT_SET),
    m_apiCachingBehaviorHasBeenSet(false),
    m_type(ApiCacheType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String UpdateApiCacheRequest::SerializePayload() const
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

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ApiCacheTypeMapper::GetNameForApiCacheType(m_type));
  }

  return payload.View().WriteReadable();
}




