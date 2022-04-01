/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/CreateExtensionAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateExtensionAssociationRequest::CreateExtensionAssociationRequest() : 
    m_extensionIdentifierHasBeenSet(false),
    m_extensionVersionNumber(0),
    m_extensionVersionNumberHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateExtensionAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_extensionIdentifierHasBeenSet)
  {
   payload.WithString("ExtensionIdentifier", m_extensionIdentifier);

  }

  if(m_extensionVersionNumberHasBeenSet)
  {
   payload.WithInteger("ExtensionVersionNumber", m_extensionVersionNumber);

  }

  if(m_resourceIdentifierHasBeenSet)
  {
   payload.WithString("ResourceIdentifier", m_resourceIdentifier);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

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




