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

#include <aws/quicksight/model/DataSetSchema.h>
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

DataSetSchema::DataSetSchema() : 
    m_columnSchemaListHasBeenSet(false)
{
}

DataSetSchema::DataSetSchema(JsonView jsonValue) : 
    m_columnSchemaListHasBeenSet(false)
{
  *this = jsonValue;
}

DataSetSchema& DataSetSchema::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ColumnSchemaList"))
  {
    Array<JsonView> columnSchemaListJsonList = jsonValue.GetArray("ColumnSchemaList");
    for(unsigned columnSchemaListIndex = 0; columnSchemaListIndex < columnSchemaListJsonList.GetLength(); ++columnSchemaListIndex)
    {
      m_columnSchemaList.push_back(columnSchemaListJsonList[columnSchemaListIndex].AsObject());
    }
    m_columnSchemaListHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSetSchema::Jsonize() const
{
  JsonValue payload;

  if(m_columnSchemaListHasBeenSet)
  {
   Array<JsonValue> columnSchemaListJsonList(m_columnSchemaList.size());
   for(unsigned columnSchemaListIndex = 0; columnSchemaListIndex < columnSchemaListJsonList.GetLength(); ++columnSchemaListIndex)
   {
     columnSchemaListJsonList[columnSchemaListIndex].AsObject(m_columnSchemaList[columnSchemaListIndex].Jsonize());
   }
   payload.WithArray("ColumnSchemaList", std::move(columnSchemaListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
