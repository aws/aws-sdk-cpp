/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/IoTJobAbortConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

IoTJobAbortConfig::IoTJobAbortConfig() : 
    m_criteriaListHasBeenSet(false)
{
}

IoTJobAbortConfig::IoTJobAbortConfig(JsonView jsonValue) : 
    m_criteriaListHasBeenSet(false)
{
  *this = jsonValue;
}

IoTJobAbortConfig& IoTJobAbortConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("criteriaList"))
  {
    Aws::Utils::Array<JsonView> criteriaListJsonList = jsonValue.GetArray("criteriaList");
    for(unsigned criteriaListIndex = 0; criteriaListIndex < criteriaListJsonList.GetLength(); ++criteriaListIndex)
    {
      m_criteriaList.push_back(criteriaListJsonList[criteriaListIndex].AsObject());
    }
    m_criteriaListHasBeenSet = true;
  }

  return *this;
}

JsonValue IoTJobAbortConfig::Jsonize() const
{
  JsonValue payload;

  if(m_criteriaListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> criteriaListJsonList(m_criteriaList.size());
   for(unsigned criteriaListIndex = 0; criteriaListIndex < criteriaListJsonList.GetLength(); ++criteriaListIndex)
   {
     criteriaListJsonList[criteriaListIndex].AsObject(m_criteriaList[criteriaListIndex].Jsonize());
   }
   payload.WithArray("criteriaList", std::move(criteriaListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
