/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/CreateEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEnvironmentRequest::CreateEnvironmentRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_federationMode(FederationMode::NOT_SET),
    m_federationModeHasBeenSet(false),
    m_federationParametersHasBeenSet(false),
    m_superuserParametersHasBeenSet(false),
    m_dataBundlesHasBeenSet(false)
{
}

Aws::String CreateEnvironmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_federationModeHasBeenSet)
  {
   payload.WithString("federationMode", FederationModeMapper::GetNameForFederationMode(m_federationMode));
  }

  if(m_federationParametersHasBeenSet)
  {
   payload.WithObject("federationParameters", m_federationParameters.Jsonize());

  }

  if(m_superuserParametersHasBeenSet)
  {
   payload.WithObject("superuserParameters", m_superuserParameters.Jsonize());

  }

  if(m_dataBundlesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataBundlesJsonList(m_dataBundles.size());
   for(unsigned dataBundlesIndex = 0; dataBundlesIndex < dataBundlesJsonList.GetLength(); ++dataBundlesIndex)
   {
     dataBundlesJsonList[dataBundlesIndex].AsString(m_dataBundles[dataBundlesIndex]);
   }
   payload.WithArray("dataBundles", std::move(dataBundlesJsonList));

  }

  return payload.View().WriteReadable();
}




