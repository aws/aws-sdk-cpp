/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/UpdateTaintsPayload.h>
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

UpdateTaintsPayload::UpdateTaintsPayload() : 
    m_addOrUpdateTaintsHasBeenSet(false),
    m_removeTaintsHasBeenSet(false)
{
}

UpdateTaintsPayload::UpdateTaintsPayload(JsonView jsonValue) : 
    m_addOrUpdateTaintsHasBeenSet(false),
    m_removeTaintsHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateTaintsPayload& UpdateTaintsPayload::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("addOrUpdateTaints"))
  {
    Aws::Utils::Array<JsonView> addOrUpdateTaintsJsonList = jsonValue.GetArray("addOrUpdateTaints");
    for(unsigned addOrUpdateTaintsIndex = 0; addOrUpdateTaintsIndex < addOrUpdateTaintsJsonList.GetLength(); ++addOrUpdateTaintsIndex)
    {
      m_addOrUpdateTaints.push_back(addOrUpdateTaintsJsonList[addOrUpdateTaintsIndex].AsObject());
    }
    m_addOrUpdateTaintsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("removeTaints"))
  {
    Aws::Utils::Array<JsonView> removeTaintsJsonList = jsonValue.GetArray("removeTaints");
    for(unsigned removeTaintsIndex = 0; removeTaintsIndex < removeTaintsJsonList.GetLength(); ++removeTaintsIndex)
    {
      m_removeTaints.push_back(removeTaintsJsonList[removeTaintsIndex].AsObject());
    }
    m_removeTaintsHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateTaintsPayload::Jsonize() const
{
  JsonValue payload;

  if(m_addOrUpdateTaintsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addOrUpdateTaintsJsonList(m_addOrUpdateTaints.size());
   for(unsigned addOrUpdateTaintsIndex = 0; addOrUpdateTaintsIndex < addOrUpdateTaintsJsonList.GetLength(); ++addOrUpdateTaintsIndex)
   {
     addOrUpdateTaintsJsonList[addOrUpdateTaintsIndex].AsObject(m_addOrUpdateTaints[addOrUpdateTaintsIndex].Jsonize());
   }
   payload.WithArray("addOrUpdateTaints", std::move(addOrUpdateTaintsJsonList));

  }

  if(m_removeTaintsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> removeTaintsJsonList(m_removeTaints.size());
   for(unsigned removeTaintsIndex = 0; removeTaintsIndex < removeTaintsJsonList.GetLength(); ++removeTaintsIndex)
   {
     removeTaintsJsonList[removeTaintsIndex].AsObject(m_removeTaints[removeTaintsIndex].Jsonize());
   }
   payload.WithArray("removeTaints", std::move(removeTaintsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
