/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/StartBatchDeleteConfigurationTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartBatchDeleteConfigurationTaskRequest::StartBatchDeleteConfigurationTaskRequest() : 
    m_configurationType(DeletionConfigurationItemType::NOT_SET),
    m_configurationTypeHasBeenSet(false),
    m_configurationIdsHasBeenSet(false)
{
}

Aws::String StartBatchDeleteConfigurationTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationTypeHasBeenSet)
  {
   payload.WithString("configurationType", DeletionConfigurationItemTypeMapper::GetNameForDeletionConfigurationItemType(m_configurationType));
  }

  if(m_configurationIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configurationIdsJsonList(m_configurationIds.size());
   for(unsigned configurationIdsIndex = 0; configurationIdsIndex < configurationIdsJsonList.GetLength(); ++configurationIdsIndex)
   {
     configurationIdsJsonList[configurationIdsIndex].AsString(m_configurationIds[configurationIdsIndex]);
   }
   payload.WithArray("configurationIds", std::move(configurationIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartBatchDeleteConfigurationTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPoseidonService_V2015_11_01.StartBatchDeleteConfigurationTask"));
  return headers;

}




