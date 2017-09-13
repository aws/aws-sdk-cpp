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

#include <aws/athena/model/Row.h>
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

Row::Row() : 
    m_dataHasBeenSet(false)
{
}

Row::Row(const JsonValue& jsonValue) : 
    m_dataHasBeenSet(false)
{
  *this = jsonValue;
}

Row& Row::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Data"))
  {
    Array<JsonValue> dataJsonList = jsonValue.GetArray("Data");
    for(unsigned dataIndex = 0; dataIndex < dataJsonList.GetLength(); ++dataIndex)
    {
      m_data.push_back(dataJsonList[dataIndex].AsObject());
    }
    m_dataHasBeenSet = true;
  }

  return *this;
}

JsonValue Row::Jsonize() const
{
  JsonValue payload;

  if(m_dataHasBeenSet)
  {
   Array<JsonValue> dataJsonList(m_data.size());
   for(unsigned dataIndex = 0; dataIndex < dataJsonList.GetLength(); ++dataIndex)
   {
     dataJsonList[dataIndex].AsObject(m_data[dataIndex].Jsonize());
   }
   payload.WithArray("Data", std::move(dataJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
