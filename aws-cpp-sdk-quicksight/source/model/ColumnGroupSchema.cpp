/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> columnGroupColumnSchemaListJsonList = jsonValue.GetArray("ColumnGroupColumnSchemaList");
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
   Aws::Utils::Array<JsonValue> columnGroupColumnSchemaListJsonList(m_columnGroupColumnSchemaList.size());
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
