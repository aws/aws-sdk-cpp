/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/Csv.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

Csv::Csv() : 
    m_columnNamesHasBeenSet(false)
{
}

Csv::Csv(JsonView jsonValue) : 
    m_columnNamesHasBeenSet(false)
{
  *this = jsonValue;
}

Csv& Csv::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("columnNames"))
  {
    Aws::Utils::Array<JsonView> columnNamesJsonList = jsonValue.GetArray("columnNames");
    for(unsigned columnNamesIndex = 0; columnNamesIndex < columnNamesJsonList.GetLength(); ++columnNamesIndex)
    {
      m_columnNames.push_back(ColumnNameMapper::GetColumnNameForName(columnNamesJsonList[columnNamesIndex].AsString()));
    }
    m_columnNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue Csv::Jsonize() const
{
  JsonValue payload;

  if(m_columnNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnNamesJsonList(m_columnNames.size());
   for(unsigned columnNamesIndex = 0; columnNamesIndex < columnNamesJsonList.GetLength(); ++columnNamesIndex)
   {
     columnNamesJsonList[columnNamesIndex].AsString(ColumnNameMapper::GetNameForColumnName(m_columnNames[columnNamesIndex]));
   }
   payload.WithArray("columnNames", std::move(columnNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
