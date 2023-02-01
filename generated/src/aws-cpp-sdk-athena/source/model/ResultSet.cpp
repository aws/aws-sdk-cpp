/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ResultSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

ResultSet::ResultSet() : 
    m_rowsHasBeenSet(false),
    m_resultSetMetadataHasBeenSet(false)
{
}

ResultSet::ResultSet(JsonView jsonValue) : 
    m_rowsHasBeenSet(false),
    m_resultSetMetadataHasBeenSet(false)
{
  *this = jsonValue;
}

ResultSet& ResultSet::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ResultSetMetadata"))
  {
    m_resultSetMetadata = jsonValue.GetObject("ResultSetMetadata");

    m_resultSetMetadataHasBeenSet = true;
  }

  return *this;
}

JsonValue ResultSet::Jsonize() const
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

  if(m_resultSetMetadataHasBeenSet)
  {
   payload.WithObject("ResultSetMetadata", m_resultSetMetadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
