/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/CSV.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

CSV::CSV(JsonView jsonValue)
{
  *this = jsonValue;
}

CSV& CSV::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("quoteCharacter"))
  {
    m_quoteCharacter = jsonValue.GetString("quoteCharacter");
    m_quoteCharacterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("delimiter"))
  {
    m_delimiter = jsonValue.GetString("delimiter");
    m_delimiterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("columns"))
  {
    Aws::Utils::Array<JsonView> columnsJsonList = jsonValue.GetArray("columns");
    for(unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex)
    {
      m_columns.push_back(columnsJsonList[columnsIndex].AsString());
    }
    m_columnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");
    m_sourceHasBeenSet = true;
  }
  return *this;
}

JsonValue CSV::Jsonize() const
{
  JsonValue payload;

  if(m_quoteCharacterHasBeenSet)
  {
   payload.WithString("quoteCharacter", m_quoteCharacter);

  }

  if(m_delimiterHasBeenSet)
  {
   payload.WithString("delimiter", m_delimiter);

  }

  if(m_columnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnsJsonList(m_columns.size());
   for(unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex)
   {
     columnsJsonList[columnsIndex].AsString(m_columns[columnsIndex]);
   }
   payload.WithArray("columns", std::move(columnsJsonList));

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
