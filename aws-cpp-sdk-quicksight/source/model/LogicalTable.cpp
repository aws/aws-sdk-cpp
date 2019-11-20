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

#include <aws/quicksight/model/LogicalTable.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

LogicalTable::LogicalTable() : 
    m_aliasHasBeenSet(false),
    m_dataTransformsHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
}

LogicalTable::LogicalTable(JsonView jsonValue) : 
    m_aliasHasBeenSet(false),
    m_dataTransformsHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
  *this = jsonValue;
}

LogicalTable& LogicalTable::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Alias"))
  {
    m_alias = jsonValue.GetString("Alias");

    m_aliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataTransforms"))
  {
    Array<JsonView> dataTransformsJsonList = jsonValue.GetArray("DataTransforms");
    for(unsigned dataTransformsIndex = 0; dataTransformsIndex < dataTransformsJsonList.GetLength(); ++dataTransformsIndex)
    {
      m_dataTransforms.push_back(dataTransformsJsonList[dataTransformsIndex].AsObject());
    }
    m_dataTransformsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetObject("Source");

    m_sourceHasBeenSet = true;
  }

  return *this;
}

JsonValue LogicalTable::Jsonize() const
{
  JsonValue payload;

  if(m_aliasHasBeenSet)
  {
   payload.WithString("Alias", m_alias);

  }

  if(m_dataTransformsHasBeenSet)
  {
   Array<JsonValue> dataTransformsJsonList(m_dataTransforms.size());
   for(unsigned dataTransformsIndex = 0; dataTransformsIndex < dataTransformsJsonList.GetLength(); ++dataTransformsIndex)
   {
     dataTransformsJsonList[dataTransformsIndex].AsObject(m_dataTransforms[dataTransformsIndex].Jsonize());
   }
   payload.WithArray("DataTransforms", std::move(dataTransformsJsonList));

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("Source", m_source.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
