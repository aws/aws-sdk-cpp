/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/CreateComponentTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateComponentTypeRequest::CreateComponentTypeRequest() : 
    m_workspaceIdHasBeenSet(false),
    m_isSingleton(false),
    m_isSingletonHasBeenSet(false),
    m_componentTypeIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_propertyDefinitionsHasBeenSet(false),
    m_extendsFromHasBeenSet(false),
    m_functionsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_propertyGroupsHasBeenSet(false),
    m_componentTypeNameHasBeenSet(false)
{
}

Aws::String CreateComponentTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_isSingletonHasBeenSet)
  {
   payload.WithBool("isSingleton", m_isSingleton);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_propertyDefinitionsHasBeenSet)
  {
   JsonValue propertyDefinitionsJsonMap;
   for(auto& propertyDefinitionsItem : m_propertyDefinitions)
   {
     propertyDefinitionsJsonMap.WithObject(propertyDefinitionsItem.first, propertyDefinitionsItem.second.Jsonize());
   }
   payload.WithObject("propertyDefinitions", std::move(propertyDefinitionsJsonMap));

  }

  if(m_extendsFromHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> extendsFromJsonList(m_extendsFrom.size());
   for(unsigned extendsFromIndex = 0; extendsFromIndex < extendsFromJsonList.GetLength(); ++extendsFromIndex)
   {
     extendsFromJsonList[extendsFromIndex].AsString(m_extendsFrom[extendsFromIndex]);
   }
   payload.WithArray("extendsFrom", std::move(extendsFromJsonList));

  }

  if(m_functionsHasBeenSet)
  {
   JsonValue functionsJsonMap;
   for(auto& functionsItem : m_functions)
   {
     functionsJsonMap.WithObject(functionsItem.first, functionsItem.second.Jsonize());
   }
   payload.WithObject("functions", std::move(functionsJsonMap));

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

  if(m_propertyGroupsHasBeenSet)
  {
   JsonValue propertyGroupsJsonMap;
   for(auto& propertyGroupsItem : m_propertyGroups)
   {
     propertyGroupsJsonMap.WithObject(propertyGroupsItem.first, propertyGroupsItem.second.Jsonize());
   }
   payload.WithObject("propertyGroups", std::move(propertyGroupsJsonMap));

  }

  if(m_componentTypeNameHasBeenSet)
  {
   payload.WithString("componentTypeName", m_componentTypeName);

  }

  return payload.View().WriteReadable();
}




