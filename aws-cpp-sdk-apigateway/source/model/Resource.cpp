/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/apigateway/model/Resource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

Resource::Resource() : 
    m_idHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_pathPartHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_resourceMethodsHasBeenSet(false)
{
}

Resource::Resource(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_pathPartHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_resourceMethodsHasBeenSet(false)
{
  *this = jsonValue;
}

Resource& Resource::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parentId"))
  {
    m_parentId = jsonValue.GetString("parentId");

    m_parentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pathPart"))
  {
    m_pathPart = jsonValue.GetString("pathPart");

    m_pathPartHasBeenSet = true;
  }

  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceMethods"))
  {
    Aws::Map<Aws::String, JsonValue> resourceMethodsJsonMap = jsonValue.GetObject("resourceMethods").GetAllObjects();
    for(auto& resourceMethodsItem : resourceMethodsJsonMap)
    {
      m_resourceMethods[resourceMethodsItem.first] = resourceMethodsItem.second.AsObject();
    }
    m_resourceMethodsHasBeenSet = true;
  }

  return *this;
}

JsonValue Resource::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_parentIdHasBeenSet)
  {
   payload.WithString("parentId", m_parentId);

  }

  if(m_pathPartHasBeenSet)
  {
   payload.WithString("pathPart", m_pathPart);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  if(m_resourceMethodsHasBeenSet)
  {
   JsonValue resourceMethodsJsonMap;
   for(auto& resourceMethodsItem : m_resourceMethods)
   {
     resourceMethodsJsonMap.WithObject(resourceMethodsItem.first, resourceMethodsItem.second.Jsonize());
   }
   payload.WithObject("resourceMethods", std::move(resourceMethodsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws