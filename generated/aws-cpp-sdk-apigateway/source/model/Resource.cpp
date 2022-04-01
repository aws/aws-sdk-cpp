/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

Resource::Resource(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_pathPartHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_resourceMethodsHasBeenSet(false)
{
  *this = jsonValue;
}

Resource& Resource::operator =(JsonView jsonValue)
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
    Aws::Map<Aws::String, JsonView> resourceMethodsJsonMap = jsonValue.GetObject("resourceMethods").GetAllObjects();
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
