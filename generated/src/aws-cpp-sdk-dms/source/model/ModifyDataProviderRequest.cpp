/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ModifyDataProviderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ModifyDataProviderRequest::ModifyDataProviderRequest() : 
    m_dataProviderIdentifierHasBeenSet(false),
    m_dataProviderNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_exactSettings(false),
    m_exactSettingsHasBeenSet(false),
    m_settingsHasBeenSet(false)
{
}

Aws::String ModifyDataProviderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataProviderIdentifierHasBeenSet)
  {
   payload.WithString("DataProviderIdentifier", m_dataProviderIdentifier);

  }

  if(m_dataProviderNameHasBeenSet)
  {
   payload.WithString("DataProviderName", m_dataProviderName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_engineHasBeenSet)
  {
   payload.WithString("Engine", m_engine);

  }

  if(m_exactSettingsHasBeenSet)
  {
   payload.WithBool("ExactSettings", m_exactSettings);

  }

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("Settings", m_settings.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ModifyDataProviderRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.ModifyDataProvider"));
  return headers;

}




