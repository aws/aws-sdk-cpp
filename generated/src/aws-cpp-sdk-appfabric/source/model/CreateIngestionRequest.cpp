/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/CreateIngestionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateIngestionRequest::CreateIngestionRequest() : 
    m_appBundleIdentifierHasBeenSet(false),
    m_appHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_ingestionType(IngestionType::NOT_SET),
    m_ingestionTypeHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateIngestionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appHasBeenSet)
  {
   payload.WithString("app", m_app);

  }

  if(m_tenantIdHasBeenSet)
  {
   payload.WithString("tenantId", m_tenantId);

  }

  if(m_ingestionTypeHasBeenSet)
  {
   payload.WithString("ingestionType", IngestionTypeMapper::GetNameForIngestionType(m_ingestionType));
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

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




