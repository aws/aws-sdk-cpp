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

#include <aws/quicksight/model/DataSetConfiguration.h>
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

DataSetConfiguration::DataSetConfiguration() : 
    m_placeholderHasBeenSet(false),
    m_dataSetSchemaHasBeenSet(false),
    m_columnGroupSchemaListHasBeenSet(false)
{
}

DataSetConfiguration::DataSetConfiguration(JsonView jsonValue) : 
    m_placeholderHasBeenSet(false),
    m_dataSetSchemaHasBeenSet(false),
    m_columnGroupSchemaListHasBeenSet(false)
{
  *this = jsonValue;
}

DataSetConfiguration& DataSetConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Placeholder"))
  {
    m_placeholder = jsonValue.GetString("Placeholder");

    m_placeholderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSetSchema"))
  {
    m_dataSetSchema = jsonValue.GetObject("DataSetSchema");

    m_dataSetSchemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnGroupSchemaList"))
  {
    Array<JsonView> columnGroupSchemaListJsonList = jsonValue.GetArray("ColumnGroupSchemaList");
    for(unsigned columnGroupSchemaListIndex = 0; columnGroupSchemaListIndex < columnGroupSchemaListJsonList.GetLength(); ++columnGroupSchemaListIndex)
    {
      m_columnGroupSchemaList.push_back(columnGroupSchemaListJsonList[columnGroupSchemaListIndex].AsObject());
    }
    m_columnGroupSchemaListHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSetConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_placeholderHasBeenSet)
  {
   payload.WithString("Placeholder", m_placeholder);

  }

  if(m_dataSetSchemaHasBeenSet)
  {
   payload.WithObject("DataSetSchema", m_dataSetSchema.Jsonize());

  }

  if(m_columnGroupSchemaListHasBeenSet)
  {
   Array<JsonValue> columnGroupSchemaListJsonList(m_columnGroupSchemaList.size());
   for(unsigned columnGroupSchemaListIndex = 0; columnGroupSchemaListIndex < columnGroupSchemaListJsonList.GetLength(); ++columnGroupSchemaListIndex)
   {
     columnGroupSchemaListJsonList[columnGroupSchemaListIndex].AsObject(m_columnGroupSchemaList[columnGroupSchemaListIndex].Jsonize());
   }
   payload.WithArray("ColumnGroupSchemaList", std::move(columnGroupSchemaListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
