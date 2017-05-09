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

#include <aws/ssm/model/PatchFilterGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

PatchFilterGroup::PatchFilterGroup() : 
    m_patchFiltersHasBeenSet(false)
{
}

PatchFilterGroup::PatchFilterGroup(const JsonValue& jsonValue) : 
    m_patchFiltersHasBeenSet(false)
{
  *this = jsonValue;
}

PatchFilterGroup& PatchFilterGroup::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("PatchFilters"))
  {
    Array<JsonValue> patchFiltersJsonList = jsonValue.GetArray("PatchFilters");
    for(unsigned patchFiltersIndex = 0; patchFiltersIndex < patchFiltersJsonList.GetLength(); ++patchFiltersIndex)
    {
      m_patchFilters.push_back(patchFiltersJsonList[patchFiltersIndex].AsObject());
    }
    m_patchFiltersHasBeenSet = true;
  }

  return *this;
}

JsonValue PatchFilterGroup::Jsonize() const
{
  JsonValue payload;

  if(m_patchFiltersHasBeenSet)
  {
   Array<JsonValue> patchFiltersJsonList(m_patchFilters.size());
   for(unsigned patchFiltersIndex = 0; patchFiltersIndex < patchFiltersJsonList.GetLength(); ++patchFiltersIndex)
   {
     patchFiltersJsonList[patchFiltersIndex].AsObject(m_patchFilters[patchFiltersIndex].Jsonize());
   }
   payload.WithArray("PatchFilters", std::move(patchFiltersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws