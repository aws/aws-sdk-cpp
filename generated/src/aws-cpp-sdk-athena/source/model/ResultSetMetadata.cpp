/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ResultSetMetadata.h>
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

ResultSetMetadata::ResultSetMetadata() : 
    m_columnInfoHasBeenSet(false)
{
}

ResultSetMetadata::ResultSetMetadata(JsonView jsonValue) : 
    m_columnInfoHasBeenSet(false)
{
  *this = jsonValue;
}

ResultSetMetadata& ResultSetMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ColumnInfo"))
  {
    Aws::Utils::Array<JsonView> columnInfoJsonList = jsonValue.GetArray("ColumnInfo");
    for(unsigned columnInfoIndex = 0; columnInfoIndex < columnInfoJsonList.GetLength(); ++columnInfoIndex)
    {
      m_columnInfo.push_back(columnInfoJsonList[columnInfoIndex].AsObject());
    }
    m_columnInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue ResultSetMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_columnInfoHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnInfoJsonList(m_columnInfo.size());
   for(unsigned columnInfoIndex = 0; columnInfoIndex < columnInfoJsonList.GetLength(); ++columnInfoIndex)
   {
     columnInfoJsonList[columnInfoIndex].AsObject(m_columnInfo[columnInfoIndex].Jsonize());
   }
   payload.WithArray("ColumnInfo", std::move(columnInfoJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
