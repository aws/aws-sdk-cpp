/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/CreateDataIntegrationAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppIntegrationsService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDataIntegrationAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  if(m_objectConfigurationHasBeenSet)
  {
   JsonValue objectConfigurationJsonMap;
   for(auto& objectConfigurationItem : m_objectConfiguration)
   {
     JsonValue fieldsMapJsonMap;
     for(auto& fieldsMapItem : objectConfigurationItem.second)
     {
       Aws::Utils::Array<JsonValue> fieldsListJsonList(fieldsMapItem.second.size());
       for(unsigned fieldsListIndex = 0; fieldsListIndex < fieldsListJsonList.GetLength(); ++fieldsListIndex)
       {
         fieldsListJsonList[fieldsListIndex].AsString(fieldsMapItem.second[fieldsListIndex]);
       }
       fieldsMapJsonMap.WithArray(fieldsMapItem.first, std::move(fieldsListJsonList));
     }
     objectConfigurationJsonMap.WithObject(objectConfigurationItem.first, std::move(fieldsMapJsonMap));
   }
   payload.WithObject("ObjectConfiguration", std::move(objectConfigurationJsonMap));

  }

  if(m_destinationURIHasBeenSet)
  {
   payload.WithString("DestinationURI", m_destinationURI);

  }

  if(m_clientAssociationMetadataHasBeenSet)
  {
   JsonValue clientAssociationMetadataJsonMap;
   for(auto& clientAssociationMetadataItem : m_clientAssociationMetadata)
   {
     clientAssociationMetadataJsonMap.WithString(clientAssociationMetadataItem.first, clientAssociationMetadataItem.second);
   }
   payload.WithObject("ClientAssociationMetadata", std::move(clientAssociationMetadataJsonMap));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_executionConfigurationHasBeenSet)
  {
   payload.WithObject("ExecutionConfiguration", m_executionConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




