/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CreateDistributionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDistributionRequest::CreateDistributionRequest() : 
    m_distributionNameHasBeenSet(false),
    m_originHasBeenSet(false),
    m_defaultCacheBehaviorHasBeenSet(false),
    m_cacheBehaviorSettingsHasBeenSet(false),
    m_cacheBehaviorsHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_ipAddressType(IpAddressType::NOT_SET),
    m_ipAddressTypeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDistributionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_distributionNameHasBeenSet)
  {
   payload.WithString("distributionName", m_distributionName);

  }

  if(m_originHasBeenSet)
  {
   payload.WithObject("origin", m_origin.Jsonize());

  }

  if(m_defaultCacheBehaviorHasBeenSet)
  {
   payload.WithObject("defaultCacheBehavior", m_defaultCacheBehavior.Jsonize());

  }

  if(m_cacheBehaviorSettingsHasBeenSet)
  {
   payload.WithObject("cacheBehaviorSettings", m_cacheBehaviorSettings.Jsonize());

  }

  if(m_cacheBehaviorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cacheBehaviorsJsonList(m_cacheBehaviors.size());
   for(unsigned cacheBehaviorsIndex = 0; cacheBehaviorsIndex < cacheBehaviorsJsonList.GetLength(); ++cacheBehaviorsIndex)
   {
     cacheBehaviorsJsonList[cacheBehaviorsIndex].AsObject(m_cacheBehaviors[cacheBehaviorsIndex].Jsonize());
   }
   payload.WithArray("cacheBehaviors", std::move(cacheBehaviorsJsonList));

  }

  if(m_bundleIdHasBeenSet)
  {
   payload.WithString("bundleId", m_bundleId);

  }

  if(m_ipAddressTypeHasBeenSet)
  {
   payload.WithString("ipAddressType", IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDistributionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.CreateDistribution"));
  return headers;

}




