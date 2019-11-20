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

#include <aws/quicksight/model/ColumnGroupSchema.h>
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

ColumnGroupSchema::ColumnGroupSchema() : 
    m_nameHasBeenSet(false),
    m_columnGroupColumnSchemaListHasBeenSet(false)
{
}

ColumnGroupSchema::ColumnGroupSchema(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_columnGroupColumnSchemaListHasBeenSet(false)
{
  *this = jsonValue;
}

ColumnGroupSchema& ColumnGroupSchema::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnGroupColumnSchemaList"))
  {
    Array<JsonView> columnGroupColumnSchemaListJsonList = jsonValue.GetArray("ColumnGroupColumnSchemaList");
    for(unsigned columnGroupColumnSchemaListIndex = 0; columnGroupColumnSchemaListIndex < columnGroupColumnSchemaListJsonList.GetLength(); ++columnGroupColumnSchemaListIndex)
    {
      m_columnGroupColumnSchemaList.push_back(columnGroupColumnSchemaListJsonList[columnGroupColumnSchemaListIndex].AsObject());
    }
    m_columnGroupColumnSchemaListHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnGroupSchema::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_columnGroupColumnSchemaListHasBeenSet)
  {
   Array<JsonValue> columnGroupColumnSchemaListJsonList(m_columnGroupColumnSchemaList.size());
   for(unsigned columnGroupColumnSchemaListIndex = 0; columnGroupColumnSchemaListIndex < columnGroupColumnSchemaListJsonList.GetLength(); ++columnGroupColumnSchemaListIndex)
   {
     columnGroupColumnSchemaListJsonList[columnGroupColumnSchemaListIndex].AsObject(m_columnGroupColumnSchemaList[columnGroupColumnSchemaListIndex].Jsonize());
   }
   payload.WithArray("ColumnGroupColumnSchemaList", std::move(columnGroupColumnSchemaListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
