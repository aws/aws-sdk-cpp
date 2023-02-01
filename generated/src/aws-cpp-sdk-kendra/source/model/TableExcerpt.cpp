/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/TableExcerpt.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

TableExcerpt::TableExcerpt() : 
    m_rowsHasBeenSet(false),
    m_totalNumberOfRows(0),
    m_totalNumberOfRowsHasBeenSet(false)
{
}

TableExcerpt::TableExcerpt(JsonView jsonValue) : 
    m_rowsHasBeenSet(false),
    m_totalNumberOfRows(0),
    m_totalNumberOfRowsHasBeenSet(false)
{
  *this = jsonValue;
}

TableExcerpt& TableExcerpt::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Rows"))
  {
    Aws::Utils::Array<JsonView> rowsJsonList = jsonValue.GetArray("Rows");
    for(unsigned rowsIndex = 0; rowsIndex < rowsJsonList.GetLength(); ++rowsIndex)
    {
      m_rows.push_back(rowsJsonList[rowsIndex].AsObject());
    }
    m_rowsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalNumberOfRows"))
  {
    m_totalNumberOfRows = jsonValue.GetInteger("TotalNumberOfRows");

    m_totalNumberOfRowsHasBeenSet = true;
  }

  return *this;
}

JsonValue TableExcerpt::Jsonize() const
{
  JsonValue payload;

  if(m_rowsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rowsJsonList(m_rows.size());
   for(unsigned rowsIndex = 0; rowsIndex < rowsJsonList.GetLength(); ++rowsIndex)
   {
     rowsJsonList[rowsIndex].AsObject(m_rows[rowsIndex].Jsonize());
   }
   payload.WithArray("Rows", std::move(rowsJsonList));

  }

  if(m_totalNumberOfRowsHasBeenSet)
  {
   payload.WithInteger("TotalNumberOfRows", m_totalNumberOfRows);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
