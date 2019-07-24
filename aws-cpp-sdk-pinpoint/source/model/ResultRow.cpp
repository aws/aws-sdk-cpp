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

#include <aws/pinpoint/model/ResultRow.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

ResultRow::ResultRow() : 
    m_groupedBysHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

ResultRow::ResultRow(JsonView jsonValue) : 
    m_groupedBysHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

ResultRow& ResultRow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupedBys"))
  {
    Array<JsonView> groupedBysJsonList = jsonValue.GetArray("GroupedBys");
    for(unsigned groupedBysIndex = 0; groupedBysIndex < groupedBysJsonList.GetLength(); ++groupedBysIndex)
    {
      m_groupedBys.push_back(groupedBysJsonList[groupedBysIndex].AsObject());
    }
    m_groupedBysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Values"))
  {
    Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsObject());
    }
    m_valuesHasBeenSet = true;
  }

  return *this;
}

JsonValue ResultRow::Jsonize() const
{
  JsonValue payload;

  if(m_groupedBysHasBeenSet)
  {
   Array<JsonValue> groupedBysJsonList(m_groupedBys.size());
   for(unsigned groupedBysIndex = 0; groupedBysIndex < groupedBysJsonList.GetLength(); ++groupedBysIndex)
   {
     groupedBysJsonList[groupedBysIndex].AsObject(m_groupedBys[groupedBysIndex].Jsonize());
   }
   payload.WithArray("GroupedBys", std::move(groupedBysJsonList));

  }

  if(m_valuesHasBeenSet)
  {
   Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsObject(m_values[valuesIndex].Jsonize());
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
