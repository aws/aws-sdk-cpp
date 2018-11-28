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

#include <aws/securityhub/model/InsightResults.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

InsightResults::InsightResults() : 
    m_insightArnHasBeenSet(false),
    m_groupByAttributeHasBeenSet(false),
    m_resultValuesHasBeenSet(false)
{
}

InsightResults::InsightResults(JsonView jsonValue) : 
    m_insightArnHasBeenSet(false),
    m_groupByAttributeHasBeenSet(false),
    m_resultValuesHasBeenSet(false)
{
  *this = jsonValue;
}

InsightResults& InsightResults::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InsightArn"))
  {
    m_insightArn = jsonValue.GetString("InsightArn");

    m_insightArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupByAttribute"))
  {
    m_groupByAttribute = jsonValue.GetString("GroupByAttribute");

    m_groupByAttributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResultValues"))
  {
    Array<JsonView> resultValuesJsonList = jsonValue.GetArray("ResultValues");
    for(unsigned resultValuesIndex = 0; resultValuesIndex < resultValuesJsonList.GetLength(); ++resultValuesIndex)
    {
      m_resultValues.push_back(resultValuesJsonList[resultValuesIndex].AsObject());
    }
    m_resultValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue InsightResults::Jsonize() const
{
  JsonValue payload;

  if(m_insightArnHasBeenSet)
  {
   payload.WithString("InsightArn", m_insightArn);

  }

  if(m_groupByAttributeHasBeenSet)
  {
   payload.WithString("GroupByAttribute", m_groupByAttribute);

  }

  if(m_resultValuesHasBeenSet)
  {
   Array<JsonValue> resultValuesJsonList(m_resultValues.size());
   for(unsigned resultValuesIndex = 0; resultValuesIndex < resultValuesJsonList.GetLength(); ++resultValuesIndex)
   {
     resultValuesJsonList[resultValuesIndex].AsObject(m_resultValues[resultValuesIndex].Jsonize());
   }
   payload.WithArray("ResultValues", std::move(resultValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
