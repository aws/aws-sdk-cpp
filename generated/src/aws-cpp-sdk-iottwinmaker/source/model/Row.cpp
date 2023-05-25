/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/Row.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

Row::Row() : 
    m_rowDataHasBeenSet(false)
{
}

Row::Row(JsonView jsonValue) : 
    m_rowDataHasBeenSet(false)
{
  *this = jsonValue;
}

Row& Row::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rowData"))
  {
    Aws::Utils::Array<JsonView> rowDataJsonList = jsonValue.GetArray("rowData");
    for(unsigned rowDataIndex = 0; rowDataIndex < rowDataJsonList.GetLength(); ++rowDataIndex)
    {
      m_rowData.push_back(rowDataJsonList[rowDataIndex].AsObject());
    }
    m_rowDataHasBeenSet = true;
  }

  return *this;
}

JsonValue Row::Jsonize() const
{
  JsonValue payload;

  if(m_rowDataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rowDataJsonList(m_rowData.size());
   for(unsigned rowDataIndex = 0; rowDataIndex < rowDataJsonList.GetLength(); ++rowDataIndex)
   {
     rowDataJsonList[rowDataIndex].AsObject(m_rowData[rowDataIndex].View());
   }
   payload.WithArray("rowData", std::move(rowDataJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
