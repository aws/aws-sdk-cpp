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

ResultSetMetadata::ResultSetMetadata(const JsonValue& jsonValue) : 
    m_columnInfoHasBeenSet(false)
{
  *this = jsonValue;
}

ResultSetMetadata& ResultSetMetadata::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ColumnInfo"))
  {
    Array<JsonValue> columnInfoJsonList = jsonValue.GetArray("ColumnInfo");
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
   Array<JsonValue> columnInfoJsonList(m_columnInfo.size());
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
