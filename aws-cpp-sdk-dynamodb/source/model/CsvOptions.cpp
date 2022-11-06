/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/CsvOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

CsvOptions::CsvOptions() : 
    m_delimiterHasBeenSet(false),
    m_headerListHasBeenSet(false)
{
}

CsvOptions::CsvOptions(JsonView jsonValue) : 
    m_delimiterHasBeenSet(false),
    m_headerListHasBeenSet(false)
{
  *this = jsonValue;
}

CsvOptions& CsvOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Delimiter"))
  {
    m_delimiter = jsonValue.GetString("Delimiter");

    m_delimiterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HeaderList"))
  {
    Aws::Utils::Array<JsonView> headerListJsonList = jsonValue.GetArray("HeaderList");
    for(unsigned headerListIndex = 0; headerListIndex < headerListJsonList.GetLength(); ++headerListIndex)
    {
      m_headerList.push_back(headerListJsonList[headerListIndex].AsString());
    }
    m_headerListHasBeenSet = true;
  }

  return *this;
}

JsonValue CsvOptions::Jsonize() const
{
  JsonValue payload;

  if(m_delimiterHasBeenSet)
  {
   payload.WithString("Delimiter", m_delimiter);

  }

  if(m_headerListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> headerListJsonList(m_headerList.size());
   for(unsigned headerListIndex = 0; headerListIndex < headerListJsonList.GetLength(); ++headerListIndex)
   {
     headerListJsonList[headerListIndex].AsString(m_headerList[headerListIndex]);
   }
   payload.WithArray("HeaderList", std::move(headerListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
