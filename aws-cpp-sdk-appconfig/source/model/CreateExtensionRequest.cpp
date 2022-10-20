/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/CreateExtensionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateExtensionRequest::CreateExtensionRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_latestVersionNumber(0),
    m_latestVersionNumberHasBeenSet(false)
{
}

Aws::String CreateExtensionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

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

Aws::Http::HeaderValueCollection CreateExtensionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_latestVersionNumberHasBeenSet)
  {
    ss << m_latestVersionNumber;
    headers.emplace("latest-version-number",  ss.str());
    ss.str("");
  }

  return headers;

}




