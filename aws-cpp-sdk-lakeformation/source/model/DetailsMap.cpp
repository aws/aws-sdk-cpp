/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/DetailsMap.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

DetailsMap::DetailsMap() : 
    m_resourceShareHasBeenSet(false)
{
}

DetailsMap::DetailsMap(JsonView jsonValue) : 
    m_resourceShareHasBeenSet(false)
{
  *this = jsonValue;
}

DetailsMap& DetailsMap::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceShare"))
  {
    Aws::Utils::Array<JsonView> resourceShareJsonList = jsonValue.GetArray("ResourceShare");
    for(unsigned resourceShareIndex = 0; resourceShareIndex < resourceShareJsonList.GetLength(); ++resourceShareIndex)
    {
      m_resourceShare.push_back(resourceShareJsonList[resourceShareIndex].AsString());
    }
    m_resourceShareHasBeenSet = true;
  }

  return *this;
}

JsonValue DetailsMap::Jsonize() const
{
  JsonValue payload;

  if(m_resourceShareHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceShareJsonList(m_resourceShare.size());
   for(unsigned resourceShareIndex = 0; resourceShareIndex < resourceShareJsonList.GetLength(); ++resourceShareIndex)
   {
     resourceShareJsonList[resourceShareIndex].AsString(m_resourceShare[resourceShareIndex]);
   }
   payload.WithArray("ResourceShare", std::move(resourceShareJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
