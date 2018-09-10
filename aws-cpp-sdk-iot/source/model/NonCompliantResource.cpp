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

#include <aws/iot/model/NonCompliantResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

NonCompliantResource::NonCompliantResource() : 
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false),
    m_additionalInfoHasBeenSet(false)
{
}

NonCompliantResource::NonCompliantResource(JsonView jsonValue) : 
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false),
    m_additionalInfoHasBeenSet(false)
{
  *this = jsonValue;
}

NonCompliantResource& NonCompliantResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceIdentifier"))
  {
    m_resourceIdentifier = jsonValue.GetObject("resourceIdentifier");

    m_resourceIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("additionalInfo"))
  {
    Aws::Map<Aws::String, JsonView> additionalInfoJsonMap = jsonValue.GetObject("additionalInfo").GetAllObjects();
    for(auto& additionalInfoItem : additionalInfoJsonMap)
    {
      m_additionalInfo[additionalInfoItem.first] = additionalInfoItem.second.AsString();
    }
    m_additionalInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue NonCompliantResource::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_resourceIdentifierHasBeenSet)
  {
   payload.WithObject("resourceIdentifier", m_resourceIdentifier.Jsonize());

  }

  if(m_additionalInfoHasBeenSet)
  {
   JsonValue additionalInfoJsonMap;
   for(auto& additionalInfoItem : m_additionalInfo)
   {
     additionalInfoJsonMap.WithString(additionalInfoItem.first, additionalInfoItem.second);
   }
   payload.WithObject("additionalInfo", std::move(additionalInfoJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
