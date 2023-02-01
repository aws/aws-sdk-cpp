/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/ResourceIdPreference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EFS
{
namespace Model
{

ResourceIdPreference::ResourceIdPreference() : 
    m_resourceIdType(ResourceIdType::NOT_SET),
    m_resourceIdTypeHasBeenSet(false),
    m_resourcesHasBeenSet(false)
{
}

ResourceIdPreference::ResourceIdPreference(JsonView jsonValue) : 
    m_resourceIdType(ResourceIdType::NOT_SET),
    m_resourceIdTypeHasBeenSet(false),
    m_resourcesHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceIdPreference& ResourceIdPreference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceIdType"))
  {
    m_resourceIdType = ResourceIdTypeMapper::GetResourceIdTypeForName(jsonValue.GetString("ResourceIdType"));

    m_resourceIdTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Resources"))
  {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("Resources");
    for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
    {
      m_resources.push_back(ResourceMapper::GetResourceForName(resourcesJsonList[resourcesIndex].AsString()));
    }
    m_resourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceIdPreference::Jsonize() const
{
  JsonValue payload;

  if(m_resourceIdTypeHasBeenSet)
  {
   payload.WithString("ResourceIdType", ResourceIdTypeMapper::GetNameForResourceIdType(m_resourceIdType));
  }

  if(m_resourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
   for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
   {
     resourcesJsonList[resourcesIndex].AsString(ResourceMapper::GetNameForResource(m_resources[resourcesIndex]));
   }
   payload.WithArray("Resources", std::move(resourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EFS
} // namespace Aws
