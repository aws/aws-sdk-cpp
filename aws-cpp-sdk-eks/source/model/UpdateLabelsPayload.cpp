/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/UpdateLabelsPayload.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

UpdateLabelsPayload::UpdateLabelsPayload() : 
    m_addOrUpdateLabelsHasBeenSet(false),
    m_removeLabelsHasBeenSet(false)
{
}

UpdateLabelsPayload::UpdateLabelsPayload(JsonView jsonValue) : 
    m_addOrUpdateLabelsHasBeenSet(false),
    m_removeLabelsHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateLabelsPayload& UpdateLabelsPayload::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("addOrUpdateLabels"))
  {
    Aws::Map<Aws::String, JsonView> addOrUpdateLabelsJsonMap = jsonValue.GetObject("addOrUpdateLabels").GetAllObjects();
    for(auto& addOrUpdateLabelsItem : addOrUpdateLabelsJsonMap)
    {
      m_addOrUpdateLabels[addOrUpdateLabelsItem.first] = addOrUpdateLabelsItem.second.AsString();
    }
    m_addOrUpdateLabelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("removeLabels"))
  {
    Aws::Utils::Array<JsonView> removeLabelsJsonList = jsonValue.GetArray("removeLabels");
    for(unsigned removeLabelsIndex = 0; removeLabelsIndex < removeLabelsJsonList.GetLength(); ++removeLabelsIndex)
    {
      m_removeLabels.push_back(removeLabelsJsonList[removeLabelsIndex].AsString());
    }
    m_removeLabelsHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateLabelsPayload::Jsonize() const
{
  JsonValue payload;

  if(m_addOrUpdateLabelsHasBeenSet)
  {
   JsonValue addOrUpdateLabelsJsonMap;
   for(auto& addOrUpdateLabelsItem : m_addOrUpdateLabels)
   {
     addOrUpdateLabelsJsonMap.WithString(addOrUpdateLabelsItem.first, addOrUpdateLabelsItem.second);
   }
   payload.WithObject("addOrUpdateLabels", std::move(addOrUpdateLabelsJsonMap));

  }

  if(m_removeLabelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> removeLabelsJsonList(m_removeLabels.size());
   for(unsigned removeLabelsIndex = 0; removeLabelsIndex < removeLabelsJsonList.GetLength(); ++removeLabelsIndex)
   {
     removeLabelsJsonList[removeLabelsIndex].AsString(m_removeLabels[removeLabelsIndex]);
   }
   payload.WithArray("removeLabels", std::move(removeLabelsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
