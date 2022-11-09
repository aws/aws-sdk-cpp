/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> dataItemsJsonList = jsonValue.GetArray("dataItems");
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
   Aws::Utils::Array<JsonValue> dataItemsJsonList(m_dataItems.size());
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
