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

#include <aws/quicksight/model/RelationalTable.h>
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

RelationalTable::RelationalTable() : 
    m_dataSourceArnHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_inputColumnsHasBeenSet(false)
{
}

RelationalTable::RelationalTable(JsonView jsonValue) : 
    m_dataSourceArnHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_inputColumnsHasBeenSet(false)
{
  *this = jsonValue;
}

RelationalTable& RelationalTable::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSourceArn"))
  {
    m_dataSourceArn = jsonValue.GetString("DataSourceArn");

    m_dataSourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Schema"))
  {
    m_schema = jsonValue.GetString("Schema");

    m_schemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputColumns"))
  {
    Array<JsonView> inputColumnsJsonList = jsonValue.GetArray("InputColumns");
    for(unsigned inputColumnsIndex = 0; inputColumnsIndex < inputColumnsJsonList.GetLength(); ++inputColumnsIndex)
    {
      m_inputColumns.push_back(inputColumnsJsonList[inputColumnsIndex].AsObject());
    }
    m_inputColumnsHasBeenSet = true;
  }

  return *this;
}

JsonValue RelationalTable::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceArnHasBeenSet)
  {
   payload.WithString("DataSourceArn", m_dataSourceArn);

  }

  if(m_schemaHasBeenSet)
  {
   payload.WithString("Schema", m_schema);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_inputColumnsHasBeenSet)
  {
   Array<JsonValue> inputColumnsJsonList(m_inputColumns.size());
   for(unsigned inputColumnsIndex = 0; inputColumnsIndex < inputColumnsJsonList.GetLength(); ++inputColumnsIndex)
   {
     inputColumnsJsonList[inputColumnsIndex].AsObject(m_inputColumns[inputColumnsIndex].Jsonize());
   }
   payload.WithArray("InputColumns", std::move(inputColumnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
