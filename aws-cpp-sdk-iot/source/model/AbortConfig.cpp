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

#include <aws/iot/model/AbortConfig.h>
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

AbortConfig::AbortConfig() : 
    m_criteriaListHasBeenSet(false)
{
}

AbortConfig::AbortConfig(JsonView jsonValue) : 
    m_criteriaListHasBeenSet(false)
{
  *this = jsonValue;
}

AbortConfig& AbortConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("criteriaList"))
  {
    Array<JsonView> criteriaListJsonList = jsonValue.GetArray("criteriaList");
    for(unsigned criteriaListIndex = 0; criteriaListIndex < criteriaListJsonList.GetLength(); ++criteriaListIndex)
    {
      m_criteriaList.push_back(criteriaListJsonList[criteriaListIndex].AsObject());
    }
    m_criteriaListHasBeenSet = true;
  }

  return *this;
}

JsonValue AbortConfig::Jsonize() const
{
  JsonValue payload;

  if(m_criteriaListHasBeenSet)
  {
   Array<JsonValue> criteriaListJsonList(m_criteriaList.size());
   for(unsigned criteriaListIndex = 0; criteriaListIndex < criteriaListJsonList.GetLength(); ++criteriaListIndex)
   {
     criteriaListJsonList[criteriaListIndex].AsObject(m_criteriaList[criteriaListIndex].Jsonize());
   }
   payload.WithArray("criteriaList", std::move(criteriaListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
