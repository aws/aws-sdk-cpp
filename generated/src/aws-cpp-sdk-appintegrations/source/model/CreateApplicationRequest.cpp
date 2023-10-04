/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/CreateApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppIntegrationsService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateApplicationRequest::CreateApplicationRequest() : 
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_applicationSourceConfigHasBeenSet(false),
    m_subscriptionsHasBeenSet(false),
    m_publicationsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("Namespace", m_namespace);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_applicationSourceConfigHasBeenSet)
  {
   payload.WithObject("ApplicationSourceConfig", m_applicationSourceConfig.Jsonize());

  }

  if(m_subscriptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subscriptionsJsonList(m_subscriptions.size());
   for(unsigned subscriptionsIndex = 0; subscriptionsIndex < subscriptionsJsonList.GetLength(); ++subscriptionsIndex)
   {
     subscriptionsJsonList[subscriptionsIndex].AsObject(m_subscriptions[subscriptionsIndex].Jsonize());
   }
   payload.WithArray("Subscriptions", std::move(subscriptionsJsonList));

  }

  if(m_publicationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> publicationsJsonList(m_publications.size());
   for(unsigned publicationsIndex = 0; publicationsIndex < publicationsJsonList.GetLength(); ++publicationsIndex)
   {
     publicationsJsonList[publicationsIndex].AsObject(m_publications[publicationsIndex].Jsonize());
   }
   payload.WithArray("Publications", std::move(publicationsJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




