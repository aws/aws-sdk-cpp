/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/UpdateExtensionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateExtensionRequest::UpdateExtensionRequest() : 
    m_extensionIdentifierHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false)
{
}

Aws::String UpdateExtensionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_actionsHasBeenSet)
  {
   JsonValue actionsJsonMap;
   for(auto& actionsItem : m_actions)
   {
     Aws::Utils::Array<JsonValue> actionListJsonList(actionsItem.second.size());
     for(unsigned actionListIndex = 0; actionListIndex < actionListJsonList.GetLength(); ++actionListIndex)
     {
       actionListJsonList[actionListIndex].AsObject(actionsItem.second[actionListIndex].Jsonize());
     }
     actionsJsonMap.WithArray(ActionPointMapper::GetNameForActionPoint(actionsItem.first), std::move(actionListJsonList));
   }
   payload.WithObject("Actions", std::move(actionsJsonMap));

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithObject(parametersItem.first, parametersItem.second.Jsonize());
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  if(m_versionNumberHasBeenSet)
  {
   payload.WithInteger("VersionNumber", m_versionNumber);

  }

  return payload.View().WriteReadable();
}




