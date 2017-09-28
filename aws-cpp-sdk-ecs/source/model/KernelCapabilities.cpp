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

#include <aws/ecs/model/KernelCapabilities.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

KernelCapabilities::KernelCapabilities() : 
    m_addHasBeenSet(false),
    m_dropHasBeenSet(false)
{
}

KernelCapabilities::KernelCapabilities(const JsonValue& jsonValue) : 
    m_addHasBeenSet(false),
    m_dropHasBeenSet(false)
{
  *this = jsonValue;
}

KernelCapabilities& KernelCapabilities::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("add"))
  {
    Array<JsonValue> addJsonList = jsonValue.GetArray("add");
    for(unsigned addIndex = 0; addIndex < addJsonList.GetLength(); ++addIndex)
    {
      m_add.push_back(addJsonList[addIndex].AsString());
    }
    m_addHasBeenSet = true;
  }

  if(jsonValue.ValueExists("drop"))
  {
    Array<JsonValue> dropJsonList = jsonValue.GetArray("drop");
    for(unsigned dropIndex = 0; dropIndex < dropJsonList.GetLength(); ++dropIndex)
    {
      m_drop.push_back(dropJsonList[dropIndex].AsString());
    }
    m_dropHasBeenSet = true;
  }

  return *this;
}

JsonValue KernelCapabilities::Jsonize() const
{
  JsonValue payload;

  if(m_addHasBeenSet)
  {
   Array<JsonValue> addJsonList(m_add.size());
   for(unsigned addIndex = 0; addIndex < addJsonList.GetLength(); ++addIndex)
   {
     addJsonList[addIndex].AsString(m_add[addIndex]);
   }
   payload.WithArray("add", std::move(addJsonList));

  }

  if(m_dropHasBeenSet)
  {
   Array<JsonValue> dropJsonList(m_drop.size());
   for(unsigned dropIndex = 0; dropIndex < dropJsonList.GetLength(); ++dropIndex)
   {
     dropJsonList[dropIndex].AsString(m_drop[dropIndex]);
   }
   payload.WithArray("drop", std::move(dropJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
