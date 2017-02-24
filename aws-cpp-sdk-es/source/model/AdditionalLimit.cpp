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
#include <aws/es/model/AdditionalLimit.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

AdditionalLimit::AdditionalLimit() : 
    m_limitNameHasBeenSet(false),
    m_limitValuesHasBeenSet(false)
{
}

AdditionalLimit::AdditionalLimit(const JsonValue& jsonValue) : 
    m_limitNameHasBeenSet(false),
    m_limitValuesHasBeenSet(false)
{
  *this = jsonValue;
}

AdditionalLimit& AdditionalLimit::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("LimitName"))
  {
    m_limitName = jsonValue.GetString("LimitName");

    m_limitNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LimitValues"))
  {
    Array<JsonValue> limitValuesJsonList = jsonValue.GetArray("LimitValues");
    for(unsigned limitValuesIndex = 0; limitValuesIndex < limitValuesJsonList.GetLength(); ++limitValuesIndex)
    {
      m_limitValues.push_back(limitValuesJsonList[limitValuesIndex].AsString());
    }
    m_limitValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue AdditionalLimit::Jsonize() const
{
  JsonValue payload;

  if(m_limitNameHasBeenSet)
  {
   payload.WithString("LimitName", m_limitName);

  }

  if(m_limitValuesHasBeenSet)
  {
   Array<JsonValue> limitValuesJsonList(m_limitValues.size());
   for(unsigned limitValuesIndex = 0; limitValuesIndex < limitValuesJsonList.GetLength(); ++limitValuesIndex)
   {
     limitValuesJsonList[limitValuesIndex].AsString(m_limitValues[limitValuesIndex]);
   }
   payload.WithArray("LimitValues", std::move(limitValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws