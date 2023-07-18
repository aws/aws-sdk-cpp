/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfigdata/model/ResourceNotFoundException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppConfigData
{
namespace Model
{

ResourceNotFoundException::ResourceNotFoundException() : 
    m_messageHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_referencedByHasBeenSet(false)
{
}

ResourceNotFoundException::ResourceNotFoundException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_referencedByHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceNotFoundException& ResourceNotFoundException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("ResourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReferencedBy"))
  {
    Aws::Map<Aws::String, JsonView> referencedByJsonMap = jsonValue.GetObject("ReferencedBy").GetAllObjects();
    for(auto& referencedByItem : referencedByJsonMap)
    {
      m_referencedBy[referencedByItem.first] = referencedByItem.second.AsString();
    }
    m_referencedByHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceNotFoundException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_referencedByHasBeenSet)
  {
   JsonValue referencedByJsonMap;
   for(auto& referencedByItem : m_referencedBy)
   {
     referencedByJsonMap.WithString(referencedByItem.first, referencedByItem.second);
   }
   payload.WithObject("ReferencedBy", std::move(referencedByJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace AppConfigData
} // namespace Aws
