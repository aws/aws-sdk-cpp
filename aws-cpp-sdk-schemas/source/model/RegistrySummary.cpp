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

#include <aws/schemas/model/RegistrySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Schemas
{
namespace Model
{

RegistrySummary::RegistrySummary() : 
    m_registryArnHasBeenSet(false),
    m_registryNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

RegistrySummary::RegistrySummary(JsonView jsonValue) : 
    m_registryArnHasBeenSet(false),
    m_registryNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

RegistrySummary& RegistrySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegistryArn"))
  {
    m_registryArn = jsonValue.GetString("RegistryArn");

    m_registryArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistryName"))
  {
    m_registryName = jsonValue.GetString("RegistryName");

    m_registryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue RegistrySummary::Jsonize() const
{
  JsonValue payload;

  if(m_registryArnHasBeenSet)
  {
   payload.WithString("RegistryArn", m_registryArn);

  }

  if(m_registryNameHasBeenSet)
  {
   payload.WithString("RegistryName", m_registryName);

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

  return payload;
}

} // namespace Model
} // namespace Schemas
} // namespace Aws
