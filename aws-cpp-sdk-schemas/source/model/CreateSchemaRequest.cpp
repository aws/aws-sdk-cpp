/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/schemas/model/CreateSchemaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Schemas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSchemaRequest::CreateSchemaRequest() : 
    m_contentHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_registryNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String CreateSchemaRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

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

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", TypeMapper::GetNameForType(m_type));
  }

  return payload.View().WriteReadable();
}




