/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/UpdateComponentTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateComponentTypeRequest::UpdateComponentTypeRequest() : 
    m_componentTypeIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_extendsFromHasBeenSet(false),
    m_functionsHasBeenSet(false),
    m_isSingleton(false),
    m_isSingletonHasBeenSet(false),
    m_propertyDefinitionsHasBeenSet(false),
    m_workspaceIdHasBeenSet(false)
{
}

Aws::String UpdateComponentTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_extendsFromHasBeenSet)
  {
   Array<JsonValue> extendsFromJsonList(m_extendsFrom.size());
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

  if(m_isSingletonHasBeenSet)
  {
   payload.WithBool("isSingleton", m_isSingleton);

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

  return payload.View().WriteReadable();
}




