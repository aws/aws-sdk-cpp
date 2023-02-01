/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

KernelCapabilities::KernelCapabilities(JsonView jsonValue) : 
    m_addHasBeenSet(false),
    m_dropHasBeenSet(false)
{
  *this = jsonValue;
}

KernelCapabilities& KernelCapabilities::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("add"))
  {
    Aws::Utils::Array<JsonView> addJsonList = jsonValue.GetArray("add");
    for(unsigned addIndex = 0; addIndex < addJsonList.GetLength(); ++addIndex)
    {
      m_add.push_back(addJsonList[addIndex].AsString());
    }
    m_addHasBeenSet = true;
  }

  if(jsonValue.ValueExists("drop"))
  {
    Aws::Utils::Array<JsonView> dropJsonList = jsonValue.GetArray("drop");
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
   Aws::Utils::Array<JsonValue> addJsonList(m_add.size());
   for(unsigned addIndex = 0; addIndex < addJsonList.GetLength(); ++addIndex)
   {
     addJsonList[addIndex].AsString(m_add[addIndex]);
   }
   payload.WithArray("add", std::move(addJsonList));

  }

  if(m_dropHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dropJsonList(m_drop.size());
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
