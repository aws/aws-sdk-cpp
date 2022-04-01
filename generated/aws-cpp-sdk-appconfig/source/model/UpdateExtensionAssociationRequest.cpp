/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/UpdateExtensionAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateExtensionAssociationRequest::UpdateExtensionAssociationRequest() : 
    m_extensionAssociationIdHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

Aws::String UpdateExtensionAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  return payload.View().WriteReadable();
}




