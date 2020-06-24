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

#include <aws/honeycode/model/ResultRow.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Honeycode
{
namespace Model
{

ResultRow::ResultRow() : 
    m_rowIdHasBeenSet(false),
    m_dataItemsHasBeenSet(false)
{
}

ResultRow::ResultRow(JsonView jsonValue) : 
    m_rowIdHasBeenSet(false),
    m_dataItemsHasBeenSet(false)
{
  *this = jsonValue;
}

ResultRow& ResultRow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rowId"))
  {
    m_rowId = jsonValue.GetString("rowId");

    m_rowIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataItems"))
  {
    Array<JsonView> dataItemsJsonList = jsonValue.GetArray("dataItems");
    for(unsigned dataItemsIndex = 0; dataItemsIndex < dataItemsJsonList.GetLength(); ++dataItemsIndex)
    {
      m_dataItems.push_back(dataItemsJsonList[dataItemsIndex].AsObject());
    }
    m_dataItemsHasBeenSet = true;
  }

  return *this;
}

JsonValue ResultRow::Jsonize() const
{
  JsonValue payload;

  if(m_rowIdHasBeenSet)
  {
   payload.WithString("rowId", m_rowId);

  }

  if(m_dataItemsHasBeenSet)
  {
   Array<JsonValue> dataItemsJsonList(m_dataItems.size());
   for(unsigned dataItemsIndex = 0; dataItemsIndex < dataItemsJsonList.GetLength(); ++dataItemsIndex)
   {
     dataItemsJsonList[dataItemsIndex].AsObject(m_dataItems[dataItemsIndex].Jsonize());
   }
   payload.WithArray("dataItems", std::move(dataItemsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Honeycode
} // namespace Aws
