/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/datapipeline/model/Query.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

Query::Query() : 
    m_selectorsHasBeenSet(false)
{
}

Query::Query(const JsonValue& jsonValue) : 
    m_selectorsHasBeenSet(false)
{
  *this = jsonValue;
}

Query& Query::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("selectors"))
  {
    Array<JsonValue> selectorsJsonList = jsonValue.GetArray("selectors");
    for(unsigned selectorsIndex = 0; selectorsIndex < selectorsJsonList.GetLength(); ++selectorsIndex)
    {
      m_selectors.push_back(selectorsJsonList[selectorsIndex].AsObject());
    }
    m_selectorsHasBeenSet = true;
  }

  return *this;
}

JsonValue Query::Jsonize() const
{
  JsonValue payload;

  if(m_selectorsHasBeenSet)
  {
   Array<JsonValue> selectorsJsonList(m_selectors.size());
   for(unsigned selectorsIndex = 0; selectorsIndex < selectorsJsonList.GetLength(); ++selectorsIndex)
   {
     selectorsJsonList[selectorsIndex].AsObject(m_selectors[selectorsIndex].Jsonize());
   }
   payload.WithArray("selectors", std::move(selectorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataPipeline
} // namespace Aws