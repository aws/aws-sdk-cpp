/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/ResponsePartitionKey.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PI
{
namespace Model
{

ResponsePartitionKey::ResponsePartitionKey() : 
    m_dimensionsHasBeenSet(false)
{
}

ResponsePartitionKey::ResponsePartitionKey(JsonView jsonValue) : 
    m_dimensionsHasBeenSet(false)
{
  *this = jsonValue;
}

ResponsePartitionKey& ResponsePartitionKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Dimensions"))
  {
    Aws::Map<Aws::String, JsonView> dimensionsJsonMap = jsonValue.GetObject("Dimensions").GetAllObjects();
    for(auto& dimensionsItem : dimensionsJsonMap)
    {
      m_dimensions[dimensionsItem.first] = dimensionsItem.second.AsString();
    }
    m_dimensionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ResponsePartitionKey::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionsHasBeenSet)
  {
   JsonValue dimensionsJsonMap;
   for(auto& dimensionsItem : m_dimensions)
   {
     dimensionsJsonMap.WithString(dimensionsItem.first, dimensionsItem.second);
   }
   payload.WithObject("Dimensions", std::move(dimensionsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace PI
} // namespace Aws
